#!/usr/bin/python3
'''
'''
import requests


def recurse(subreddit, hot_list=[], after=''):
    header = {'user-agent': 'Cody'}
    url = 'https://www.reddit.com/r/{}/hot.json?after={}'.format(
        subreddit, after)

    req = requests.get(url, headers=header)
    if req.status_code != 200:
        return

    subs = req.json()
    data = subs.get('data').get('children')
    for val in data:
        hot_list.append(val.get('data').get('title'))

    after = subs.get('data').get('after')
    if after is not None:
        return recurse(subreddit, hot_list, after)
    else:
        return hot_list

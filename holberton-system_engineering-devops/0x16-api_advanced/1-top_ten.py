#!/usr/bin/python3
import requests


def top_ten(subreddit):

    url = 'https://www.reddit.com/r/{}/hot.json'.format(subreddit)
    header = {'User-Agent': 'Cody'}

    try:
        subs = requests.get(url, headers=header)
        subs = subs.json().get('data')
        subs = subs.get('children')
        x = 0
        for value in subs:
            if x > 9:
                break
            print(value['data'].get('title'))
            x += 1

    except:
        print('None')

#!/usr/bin/python3
import requests


def number_of_subscribers(subreddit):

    url = 'https://www.reddit.com/r/{}/about.json?sort=new'.format(subreddit)
    header = {'User-Agent': 'Cody'}

    try:
        subs = requests.get(url, headers=header)
        subs = subs.json().get('data')
        for key, value in subs.items():
            if key == 'subscribers':
                return(value)

    except:
        return(0)

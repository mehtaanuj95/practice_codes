# A web parser that parses website and finds the frequency of words in title links for multiple pages...!!

import requests
from bs4 import BeautifulSoup
import operator

def start():
    page = 1
    word_list = []
    while page <= 15:
        url = 'https://thenewboston.com/forum/recent_activity.php?page=' + str(page)

        source_code = requests.get(url).text
        soup = BeautifulSoup(source_code)
        for data in soup.findAll('a', {'class': 'title text-semibold'}):
            content = data.string
            words = content.lower().split()
            for every_word in words:
                #print(every_word)
                word_list.append(every_word)
        page += 1

    clean_up_list(word_list)

def clean_up_list(word_list):
    clean_word_list = []
    for word in word_list:
        symbols = "!@#$%^&*()_+|/<>?:,.-=\''[]{}~"
        for i in range(0, len(symbols)):
            word = word.replace(symbols[i], "")
        if(len(word) > 0):
            #print(word)
            clean_word_list.append(word)
    create_dictionary(clean_word_list)

def create_dictionary(clean_word_list):
    word_count = {}
    for word in clean_word_list:
        if word in word_count:
            word_count[word] += 1
        else:
            word_count[word] = 1

    for key, value in sorted(word_count.items(), key=operator.itemgetter(1)):
        print(key, value)

start()

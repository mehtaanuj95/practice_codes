#crawls links from wikipedia website of lost of colors
import requests
from bs4 import BeautifulSoup

def question():
    url = 'https://en.wikipedia.org/wiki/List_of_colors:_A%E2%80%93F'
    source_code = requests.get(url)
    plain_text = source_code.text
    soup = BeautifulSoup(plain_text)
    for link in soup.findAll('a'):
        #href = link.get('href')
        title = link.string
        print(title)
        #print(href)

question()

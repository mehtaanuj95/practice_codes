#crawls problem name from codechef website in easy category (practice problems)
import requests
from bs4 import BeautifulSoup

def question():
    url = 'https://www.codechef.com/problems/easy?sort_by=SuccessfulSubmission&sorting_order=desc';
    source_code = requests.get(url)
    plain_text = source_code.text
    soup = BeautifulSoup(plain_text)
    for link in soup.findAll('b'):
        #href = link.get('href')
        title = link.string
        print(title)
        #print(href)

question()

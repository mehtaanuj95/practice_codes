from urllib import request

url = "http://chart.finance.yahoo.com/table.csv?s=GOOG&a=10&b=5&c=2016&d=11&e=5&f=2016&g=d&ignore=.csv"
def download_data(csv_url):
    response = request.urlopen(csv_url)
    csv = response.read()
    csv_str = str(csv)
    lines = csv_str.split('\\n')
    dest_url = r'goog.csv'
    fw = open('dest_url', 'w')
    for line in lines:
        fw.write(line + '\n')
    fw.close()

download_data(url)
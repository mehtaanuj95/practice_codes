# Sorting a dictionary and finding its maxima and minima

stocks = {
    'GOOG': 542.01,
    'FB': 74.02,
    'AMZN': 99.15,
    'APPLE': 121.05,
    'WALLMART': 452.01
}

#sorted list
print(sorted(zip(stocks.values(), stocks.keys())))

#maximum value
print(max(zip(stocks.values(), stocks.keys())))

#minimum value
print(min(zip(stocks.values(), stocks.keys())))
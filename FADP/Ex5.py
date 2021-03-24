# Python program to read
# json file

import json
# Opening JSON file
f = open('/home/shivam/Desktop/SEM-III/FADP/data.json',)
# returns JSON object as
# a dictionary
data = json.load(f)
# Iterating through the json
# list
for i in data['Book']:
    print(i)
# Closing file
f.close()
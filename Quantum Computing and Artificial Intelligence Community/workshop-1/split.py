#avoid this
print(str.split('a, b, c', ',')) # ['a', ' b', ' c']

#use this
print('a, b, c'.split(',')) # ['a', ' b', ' c']

s = 'This is my string'
print(s.split()) # ['This', 'is', 'my', 'string']
print(s.split(maxsplit=1)) # ['This', 'is my string']
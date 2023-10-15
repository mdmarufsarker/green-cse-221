# Write a python program that takes a string and a substring as input and counts the number of occurrences of the substring within the string.Use the count() method to solve this problem.

# Sample Input:
# 3 python
# python is pythonic
# I love python, python is my favorite language
# python is cool

# Sample Output:
# 2
# 2
# 1

t = int(input())
substring = input()

for i in range(t):
    s = input()
    print(s.count(substring))
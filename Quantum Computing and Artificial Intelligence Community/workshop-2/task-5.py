# Given a list of numbers, separate the numbers which are divisible by 4 using list comprehension.

arr = [1,2,3,4,5,6,7,8,9,10,11,12]

res = [i for i in arr if i % 4 == 0]

print(res)

# Output: [4, 8, 12]
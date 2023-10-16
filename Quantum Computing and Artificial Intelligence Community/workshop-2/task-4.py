# Write a python program to normalize a list without using any library function . ( normalize means suppose you have a list like [1,2,3,4] -> here first you need to take the sum of them all which is 10. Then you need to divide each number with 10. So the new list will be [0.1,0.2,0.3,0.4].

arr = [1,2,3,4]
sum = 0

for i in arr:
    sum += i

for i in range(len(arr)):
    arr[i] /= sum

print(arr)
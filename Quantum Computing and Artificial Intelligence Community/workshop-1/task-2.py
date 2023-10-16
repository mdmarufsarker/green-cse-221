# Write a python program that checks if a given positive integer is prime or not . Use a loop to test divisibility and f-strings to display the results.

# Sample Input:
# 5
# 7

# Sample Output:
# 5 is prime
# 7 is prime

t = int(input())

for i in range(t):
    num = int(input())
    isPrime = True
    for j in range(2, num):
        if num % j == 0:
            isPrime = False
            break
    if isPrime:
        print(f"{num} is prime")
    else:
        print(f"{num} is not prime")
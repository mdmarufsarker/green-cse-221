# Write a python program that checks if a given positive integer is prime or not . Use a loop to test divisibility and f-strings to display the results.

# Sample Input:
# 5
# 7

# Sample Output:
# 5 is prime
# 7 is prime

t = int(input())

# prime check using seive of eratosthenes
def seive(num):
    # ternary operator
    if num == 1:
        return False
    if num == 2:
        return True
    if num % 2 == 0:
        return False
    i = 3
    while i * i <= num:
        if num % i == 0:
            return False
        i += 2
    return True

for i in range(t):
    num = int(input())
    if seive(num):
        print(f"{num} is prime")
    else:
        print(f"{num} is not prime")
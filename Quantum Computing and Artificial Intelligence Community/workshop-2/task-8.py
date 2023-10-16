# Given a list of numbers, create a dictionary using dictionary comprehension where the keys are the numbers and the values are ‘even’ if the number is even, and “odd” if the number is odd.

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]

# way 1
result = {x: "even" if x % 2 == 0 else "odd" for x in numbers}
print(result)
# Output: {1: 'odd', 2: 'even', 3: 'odd', 4: 'even', 5: 'odd', 6: 'even', 7: 'odd', 8: 'even', 9: 'odd'}

# way 2
dictionary = {}
for x in numbers:
    if x % 2 == 0:
        dictionary[x] = "even"
    else:
        dictionary[x] = "odd"

print(dictionary)
# Output: {1: 'odd', 2: 'even', 3: 'odd', 4: 'even', 5: 'odd', 6: 'even', 7: 'odd', 8: 'even', 9: 'odd'}
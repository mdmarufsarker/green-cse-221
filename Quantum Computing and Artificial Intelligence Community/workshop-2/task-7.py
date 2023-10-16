# Create a list of tuples, each representing a person’s name and age . Write a program that sorts the list of tuples by age in descending order.

data = [("Maruf", 20), ("Rahman", 19), ("Rafi", 21), ("Rahim", 18)]

# way 1
data.sort(key=lambda x: x[1], reverse=True)
print(data)

# Here we are using lambda function to sort the list where the key=lamda x: x[1] means we are sorting the list of tuples by the second element of each tuple. And here we are using reverse=True to sort the list of tuples in descending order.

# way 2
data.sort(key=lambda x: x[1])

for i in range(len(data)):
    print(data.pop(), end=" ")

print()
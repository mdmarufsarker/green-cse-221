# Given two sets, find union and difference of these sets without using built in set operations like union() or difference().
 
# Here union means all the elements which are present in both sets and difference means all the elements which are present in one set but not in other.

a = {1,2,3,4,5}
b = {4,5,6,7,8}

# using built in set operations
# Union
union = a.copy()
union.update(b)
print(union)

# Difference
difference = a.copy()
difference.difference_update(b)
print(difference)

# without using built in set operations
# Union
union = a.copy()
for i in b:
    if i not in union:
        union.add(i)
print(union)

# Difference
difference = a.copy()
for i in b:
    if i in difference:
        difference.remove(i)
print(difference)


# using set operations
ans1 = a | b
ans2 = a - b

print(ans1)
print(ans2)

'''
{1, 2, 3, 4, 5, 6, 7, 8}
{1, 2, 3}
{1, 2, 3, 4, 5, 6, 7, 8}
{1, 2, 3}
{1, 2, 3, 4, 5, 6, 7, 8}
{1, 2, 3}
'''
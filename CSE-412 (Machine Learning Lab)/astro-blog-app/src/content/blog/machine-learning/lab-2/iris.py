import numpy as np
from sklearn.datasets import load_iris

dataset = load_iris()

print(dataset.feature_names)

print(dataset.target_names)

print(len(dataset['data'])) # 150

# input -> x
# output -> y

x = dataset['data']
y = dataset['target']

print(dataset.keys())

for i in range(5):
    print(f'{x[i]} -> {y[i]}')

for i in range(1,6):
    print(f'{x[-i]} -> {y[-i]}')


unique_class = []

for cls in y:
    if cls not in unique_class:
        unique_class.append(cls)
        
for cls in unique_class:
    class_data = [0.0, 0.0, 0.0, 0.0]
    count = 0
    
    for i in range(len(x)):
        if y[i] == cls:
            class_data = class_data + x[i]
            count = count + 1
    print(f'Avg of {cls} class data:')
    print(class_data / count)
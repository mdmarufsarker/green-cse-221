from sklearn.datasets import load_iris

dataset = load_iris()

print(dataset.feature_names)

print(dataset.target_names)

print(len(dataset(['data']))) # 150

# input -> x
# output -> y

x = dataset['data']
y = dataset['target']

print(dataset.keys())

for i in range(5):
    print(f'{x[i]} -> {y[i]}')

for i in range(1,6):
    print(f'{x[-i]} -> {y[-i]}')
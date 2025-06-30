from sklearn.datasets import load_iris

dataset = load_iris()

x = dataset['data']
y = dataset['target']

unique_class = []

for cls in y:
    if cls not in unique_class:
        unique_class.append(cls)

for cls in unique_class:
    class_data = {"sl":[], "sw":[], "pl":[], "pw":[]}

    for i in range(len(x)):
        if y[i] == cls:
            class_data["sl"].append(x[i][0])
            class_data["sw"].append(x[i][1])
            class_data["pl"].append(x[i][2])
            class_data["pw"].append(x[i][3])

    for key in class_data.keys():
        class_data[key].sort()

        if len(class_data[key]) % 2 == 0:
            median = (class_data[key][len(class_data[key]) // 2 - 1] + class_data[key][len(class_data[key]) // 2]) / 2
        else:
            median = class_data[key][len(class_data[key]) // 2]

        print(f"Median of {key} for class {cls}: {median}")

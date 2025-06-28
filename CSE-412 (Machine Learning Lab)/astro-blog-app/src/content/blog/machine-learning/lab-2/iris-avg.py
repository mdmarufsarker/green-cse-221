from sklearn.datasets import load_iris

# Load data
dataset = load_iris()
x = dataset['data']  # list of lists
y = dataset['target']  # list
target_names = dataset['target_names']
feature_names = dataset['feature_names']

# Step 1: Prepare a dictionary to collect values for each label
data_by_class = {0: [], 1: [], 2: []}

# Step 2: Group features based on class labels
for features, label in zip(x, y):
    data_by_class[label].append(features)

# Step 3: Calculate average for each feature for each class
for label in data_by_class:
    class_name = target_names[label]
    class_data = data_by_class[label]
    num_samples = len(class_data)

    # Initialize a list to hold the sum of each feature
    feature_sums = [0.0, 0.0, 0.0, 0.0]

    # Add up all feature values
    for sample in class_data:
        for i in range(4):
            feature_sums[i] += sample[i]

    # Calculate average
    feature_avgs = [round(s / num_samples, 2) for s in feature_sums]

    # Print results
    print(f'\nAverage values for class "{class_name}" (label {label}):')
    for fname, avg in zip(feature_names, feature_avgs):
        print(f'  {fname}: {avg}')

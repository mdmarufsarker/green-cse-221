import numpy as np
from sklearn.datasets import load_iris

# Load the dataset
dataset = load_iris()
x = dataset['data']
y = dataset['target']
target_names = dataset['target_names']
feature_names = dataset['feature_names']

# Loop over each class label (0, 1, 2)
for label in np.unique(y):
    class_name = target_names[label]
    
    # Get all samples (rows) where the target is this label
    class_data = x[y == label]
    
    # Calculate the average of each column (axis=0 means column-wise)
    avg_values = class_data.mean(axis=0)
    
    # Print the result in a readable format
    print(f'\nAverage values for class "{class_name}" (label {label}):')
    for fname, avg in zip(feature_names, avg_values):
        print(f'  {fname}: {avg:.2f}')

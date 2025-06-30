# 📌 Step 1: Data Collection
# Load the Iris dataset from sklearn's built-in datasets
from sklearn.datasets import load_iris

dataset = load_iris()
x = dataset['data']      # Features: sepal length, sepal width, petal length, petal width
y = dataset['target']    # Labels: 0 = setosa, 1 = versicolor, 2 = virginica

# 📌 Step 2: Model Selection (Train-Test Split)
# Split the dataset into 80% training and 20% testing
from sklearn.model_selection import train_test_split

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.20, random_state=42)

# Optional: Print dataset sizes
print("Training samples:", len(x_train))
print("Testing samples:", len(x_test))

# 📌 Step 3: Data Preprocessing
# Standardize the features (mean=0, std=1) for better performance in KNN
from sklearn.preprocessing import StandardScaler

scaler = StandardScaler()
scaler.fit(x_train)  # Fit only on training data

x_train = scaler.transform(x_train)  # Transform training data
x_test = scaler.transform(x_test)    # Transform test data (using training parameters)

# 📌 Step 4: Model Training
# Create and train a K-Nearest Neighbors classifier (k=3)
from sklearn.neighbors import KNeighborsClassifier

classifier = KNeighborsClassifier(n_neighbors=3)
classifier.fit(x_train, y_train)

# 📌 Step 5: Accuracy Testing / Evaluation
# Predict on the test set and measure accuracy
from sklearn import metrics

y_pred = classifier.predict(x_test)
accuracy = metrics.accuracy_score(y_test, y_pred)

print("Model Accuracy:", accuracy)

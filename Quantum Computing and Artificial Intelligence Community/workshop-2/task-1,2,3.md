# Dot product, Cross product, and Determinant

## Dot product

The dot product of two vectors is a scalar. It is the sum of the products of the corresponding entries of the two sequences of numbers. For example, the dot product of the vectors $[1, 2, 3]$ and $[4, 5, 6]$ is $1 \times 4 + 2 \times 5 + 3 \times 6 = 32$.

The dot product of two vectors $u$ and $v$ is denoted by $u \cdot v$. It is defined as follows:

$$
u \cdot v = \sum_{i=1}^n u_i v_i
$$

where $u_i$ and $v_i$ are the $i$th entries of $u$ and $v$, respectively.

The dot product of two vectors can be calculated using the `dot` function in the `numpy` module.

```python
import numpy as np

u = np.array([1, 2, 3])
v = np.array([4, 5, 6])

print(np.dot(u, v))
```

The dot product of two vectors can also be calculated using the `dot` method of the `ndarray` class.

```python
import numpy as np

u = np.array([1, 2, 3])
v = np.array([4, 5, 6])

print(u.dot(v))
```

## Cross product

The cross product of two vectors is a vector. It is defined as follows:

$$
u \times v = \begin{bmatrix} u_2 v_3 - u_3 v_2 \\ u_3 v_1 - u_1 v_3 \\ u_1 v_2 - u_2 v_1 \end{bmatrix}
$$

where $u_i$ and $v_i$ are the $i$th entries of $u$ and $v$, respectively.

The cross product of two vectors can be calculated using the `cross` function in the `numpy` module.

```python
import numpy as np

u = np.array([1, 2, 3])
v = np.array([4, 5, 6])

print(np.cross(u, v))
```

The cross product of two vectors can also be calculated using the `cross` method of the `ndarray` class.

```python
import numpy as np

u = np.array([1, 2, 3])
v = np.array([4, 5, 6])

print(u.cross(v))
```

## Determinant

The determinant of a square matrix is a scalar. It is defined as follows:

$$
\det A = \sum_{\sigma \in S_n} \operatorname{sgn}(\sigma) \prod_{i=1}^n a_{i, \sigma(i)}
$$

where $S_n$ is the set of all permutations of the set $\{1, 2, \dots, n\}$, and $\operatorname{sgn}(\sigma)$ is the sign of the permutation $\sigma$.

The determinant of a square matrix can be calculated using the `det` function in the `numpy` module.

```python
import numpy as np

A = np.array([[1, 2], [3, 4]])

print(np.linalg.det(A))
```

The determinant of a square matrix can also be calculated using the `det` method of the `ndarray` class.

```python
import numpy as np

A = np.array([[1, 2], [3, 4]])

print(A.det())
```

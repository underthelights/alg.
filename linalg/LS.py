import numpy as np
import numpy.linalg as la

A= np.array([[1,1],[2,1],[3,1]])
b= np.array([1.2, 1.9, 1])

U,s,V = la.svd(A)
V = V.T
y = np.zeros(len(A[0]))
z = np.dot(U.T,b)
k = 0

threshold = 0.01
while k<len(A[0]) and s[k] > threshold:
    y[k] = z[k]/s[k]
    k += 1

x = np.dot(V,y)

print("the fn of best line is: y=" + str(x[0]) + "x +" + str(x[1]))

import numpy as np

A = np.array([
        [8,6,4],
        [-2,6,4],
        [-3,2,7]
        ])
B = np.array([10,5,0])
sol = np.linalg.solve(A,B)
X = sol[0]
Y = sol[1]
Z = sol[2]
print('X =',X)
print('Y =',Y)
print('Z =',Z)

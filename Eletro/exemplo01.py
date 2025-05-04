import numpy as np

A=np.array([
        [1,2,3,4],
        [5,6,7,8],
        [9,10,11,12],
        [13,14,15,16]])

print("Matriz\n",A)
#Criar vetor = primeira linha de A
v1 = A[0,0:4:1]
print("1ª linha", v1)
#Criar vetor = ultima coluna de A
v2 = A[::,-1]
print("ultima coluna", v2)
# Criar matriz = com os 4 elementos centrais
M1 = A[1:3:3:1]
print("4 elementos centrais", M1)

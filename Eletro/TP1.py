import numpy as np
I1 = 0.003
I2 = 0.002
V1 = 1
V2 = 2
k = 1000
R1=1*k; R2=2*k; R3=3*k; R4=4*k; R5=5*k;
A=np.array([[1 , 0 , 0] ,
 [-R1 , R1+R2+R5 , -R2] ,
 [0 , 0 , 1] ])
b=np.array([I1 , V1+V2 , -I2])
solucao=np.linalg.solve(A,b)
print('IA = ',solucao[0]*k,' mA')
print('IB = ',solucao[1]*k,' mA')
print('IC = ',solucao[2]*k,' mA')

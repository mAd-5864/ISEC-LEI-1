import numpy as np


v3=4
k=1000
r1=0.5*k
r2=0.1*k
r3=2*k
r4=0.4*k
r5=1*k

SomaR=r1+r2+r3+r4+r5
Vr1=r1*v3/SomaR
Vr2=r2*v3/SomaR
Vr3=r3*v3/SomaR
Vr4=r4*v3/SomaR
Vr5=r5*v3/SomaR

print('VR1 = ',Vr1,'Volts')
print('VR2 = ',Vr2,'Volts')
print('VR3 = ',Vr3,'Volts')
print('VR4 = ',Vr4,'Volts')
print('VR5 = ',Vr5,'Volts')

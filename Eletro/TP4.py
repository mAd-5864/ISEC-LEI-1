from matplotlib import pyplot as plt
from math import pi
import numpy as np

f3=100
f5=50

P=1/f5
PA=P/1000
t=np.arange(0,2*P,PA)


V3=1*np.sin(2*pi*f3*t+pi)
V5=0.5*np.sin(2*pi*f5*t+0.5*pi)

R1=R2=R3=R4=R5=R6= 1000

V1=V2=V4= 1
Vx = 1


vout= R6*(V3+V5)/R3+R6*(-Vx+V5)/R5+V5 

plt.plot(t,V3,'g',t,V5,'k',t,vout,'r')
plt.axis([0,2*P,-6,2])
plt.grid()
plt.show()

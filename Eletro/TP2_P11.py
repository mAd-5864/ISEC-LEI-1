import numpy as np
from matplotlib import pyplot as plt
from math import pi


freq=100		#frequencia
Amplitude=20	
P=1/freq		#periodo (inverso da frequencia)
NPP=10000	#pontos por periodo
PA=P/NPP	#incremento entre pontos
t=np.arange(0,5*P+PA,PA)		

vin=Amplitude*np.sin(2*pi*freq*t)		#onda sinusoidal


vout=vin.copy()


Vd = 0.7 
Rd = 100
V1 = 1              
V2 = 1
R3 = 200
R4 = 1000
		
Req = 100		#resistencias equivalentes a em serie com diodo

for i in range(len(t)):
    if (vin[i] > -V2 - Vd + V1):                  		#Quando o diodo conduz
        vout[i] = V1 + R4 * ((vin[i] + V2 + Vd - V1) / (Req + R3 + Rd + R4))
    else:                               		#Quando o diodo nao conduz
        vout[i] = 1
 

plt.plot(t, vin, label="Vin")
plt.plot(t, vout, label="Vout")
plt.grid()
plt.legend()
plt.show()

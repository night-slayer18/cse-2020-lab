import matplotlib.pyplot as plt
import numpy as np
import math

x = np.arange(0,math.pi*2,0.05)
print(x)
y = np.sin(x)
print(y)
plt.xlabel("angle")
plt.ylabel("sine")
plt.title("sine wave")
plt.plot(x,y)
plt.show()
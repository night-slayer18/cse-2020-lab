from matplotlib import pylab
from numpy import *

x = pylab.linspace(-3, 3,30)
print(x)
y = x**2
pylab.plot(x, y)
pylab.show()
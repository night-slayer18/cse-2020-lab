from matplotlib import pylab
import numpy 

x = pylab.linspace(-3, 3,30)
pylab.plot(x,numpy.sin(x),label="sin(x)")
pylab.plot(x,numpy.cos(x),"r-",label="cos(x)")
pylab.plot(x,numpy.sin(-x),"g-.",label="-sin(x)")
pylab.grid(True)
pylab.xlabel("x")
pylab.ylabel("y")
pylab.title("sin(x) and cos(x)")
pylab.legend(loc="upper left")
pylab.show()

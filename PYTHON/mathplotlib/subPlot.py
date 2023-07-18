from matplotlib.pylab import *
import math
x= np.arange(0,math.pi*2,0.05)
subplot(2,2,1)
plot(x,sin(x),'r--',label='sine')
xlabel('angle')
ylabel('sine')
legend(loc='upper right')
subplot(2,2,2)
plot(x,cos(x),'g--',label='cosine')
xlabel('angle')
ylabel('cosine')
legend(loc='upper right')
subplot(2,2,3)
plot(x,sin(x)+cos(x),'b--',label='sine+cosine')
xlabel('angle')
ylabel('sine+cosine')
legend(loc='upper right')
subplot(2,2,4)
plot(x,sin(x)*cos(x),'y--', label='sine*cosine')
xlabel('angle')
ylabel('sine*cosine')
legend(loc='upper right')
show()
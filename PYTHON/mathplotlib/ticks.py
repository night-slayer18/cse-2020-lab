from matplotlib.pylab import *

x = np.array([1,2,3,4,5,6,7,8])
y = np.array([1,4,5,7,8,3,21,1])
figure(1)
plot(x,y,'b-',label='x/y')
legend(loc='upper right')
stem(x,y,'b-.')
scatter(x,y)
figure(2)
plot(x,y,'r')

xticks(np.arange(1,9,1))
yticks(np.arange(1,22,1))
tick_params(axis='x',colors='red')
stem(x,y)
scatter(x,y)
show()
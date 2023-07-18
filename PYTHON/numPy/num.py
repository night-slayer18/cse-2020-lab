import numpy as np

arr = np.array([1, 2, 3, 4, 5])
print(arr)
arr1 = np.array([[1, 2, 3], [4, 5, 6]],dtype='int64')
print(arr1[1,2])
print(arr1.shape,arr1.size)
print(arr1.sum(),arr1.mean(),arr1.std(),arr1.min(),arr1.max())
print(arr.dtype)
print(arr1.ndim)

# slicing
new = np.array([1, 2, 3, 4, 5,6,7,8,9,2,3,4,5,67,7])
slice = new[1:5]
print(slice)
slice[:] = 0
print(new)

# reshape
newarr = arr1.reshape(3, 2)
print(newarr)


# Iterating Arrays
for x in arr:
    print(x)

#dtype examples

arr = np.array([1, 2, 3, 4], dtype='S1')
arr1 = np.array([1, 2, 3, 4], dtype='i')
arr2 = np.array([1, 2, 3, 4], dtype='f')
arr3 = np.array([1, 2, 3, 4], dtype='c')
arr4 = np.array([1, 2, 3, 4], dtype='U')
arr5 = np.array([True,False], dtype='bool')
arr6 = np.array([1, 2, 3, 4], dtype=complex)
print(arr,arr1,arr2,arr3,arr4,arr5,arr6)
print(arr.dtype,arr1.dtype,arr2.dtype,arr3.dtype,arr4.dtype,arr5.dtype)

#datetime
date1 = np.datetime64('2020-01-01 18:00:00')
date2 = np.datetime64('2020-06-01 06:00:00')
print(date2-date1)

arint = np.arange(1,10,2)
print(arint)

arflo = arint.astype('f')
print(arflo)

a= np.array([[[1,2,3],[4,5,6]],[[7,8,9],[10,11,12]]])
print(a.shape,a.size,a.ndim,a.itemsize,a.nbytes,a.dtype)

zero = np.zeros((2,3))
one = np.ones((2,3))
full = np.full((2,3),5)
eye = np.eye(4)
scaleEye = eye*2**2
arrT = np.array([[1,2],[4,6]])
b= np.linalg.inv(arrT)
c= np.trace(arrT)
d= np.linalg.det(arrT)
print(b)
print(c)
print(d)
print(arrT.T)
print(zero)
print(one)
print(full)
print(eye)
print(scaleEye)

# #random number
rand = np.random.rand(2,2,3)
rand1 = np.random.randint(1,10,(3,4,3))
print(rand)
print(rand1)

#random choice
arr = np.array([1, 2, 3, 4, 5])
print(np.random.choice(arr))
print(np.random.choice(arr,(3, 5)))

#shuffle
np.random.shuffle(arr)
print(arr)

#permutation
print(np.random.permutation(arr))
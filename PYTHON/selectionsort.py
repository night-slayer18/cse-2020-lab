
def selectionsort(arr):

    for start in range(len(arr)):
        minpos = start
        for i in range(start, len(arr)):
            if (arr[i] < arr[minpos]):
                minpos = i

            (arr[start], arr[minpos]) = (arr[minpos], arr[start])


arr = list(map(int, input().split()))
selectionsort(arr)
print(arr)

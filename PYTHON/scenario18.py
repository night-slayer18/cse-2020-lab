def min_sum_of_unique_elements(arr):
    n = len(arr)
    arr.sort()

    for i in range(1, n):
        if arr[i] <= arr[i - 1]:
            arr[i] = arr[i - 1] + 1

    return sum(arr)

# Example usage:
arr = [2, 2, 3]
result = min_sum_of_unique_elements(arr)
print(result)


arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

arr = arr1 + arr2
arr.sort()

n = len(arr)
if n % 2 == 0:
    median = (arr[n//2] + arr[n//2-1]) / 2
else:
    median = arr[n//2]

print(median)

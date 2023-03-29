def quicksort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[-1]
    left_arr = []
    right_arr = []
    for i in range(len(arr) - 1):
        if arr[i] <= pivot:
            left_arr.append(arr[i])
        else:
            right_arr.append(arr[i])
    sorted_left_arr = quicksort(left_arr)
    sorted_right_arr = quicksort(right_arr)
    return sorted_left_arr + [pivot] + sorted_right_arr

def print_divide(pivot, left_arr, right_arr):
    print("Pivot:", pivot)
    print("Left arr:", ' '.join(str(x) for x in left_arr))
    print("Right arr:", ' '.join(str(x) for x in right_arr))
    print()

n = int(input())
arr = list(map(int, input().split()))

def quicksort_and_print(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[-1]
    left_arr = []
    right_arr = []
    for i in range(len(arr) - 1):
        if arr[i] <= pivot:
            left_arr.append(arr[i])
        else:
            right_arr.append(arr[i])
    print_divide(pivot, left_arr, right_arr)
    sorted_left_arr = quicksort_and_print(left_arr)
    sorted_right_arr = quicksort_and_print(right_arr)
    return sorted_left_arr + [pivot] + sorted_right_arr

sorted_arr = quicksort_and_print(arr)
print("Final:", ' '.join(str(x) for x in sorted_arr))

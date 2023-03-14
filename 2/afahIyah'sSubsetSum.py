from bisect import bisect_left

def find_subset_sum(set, target):
    n = len(set)
    half = n // 2
    sum_set1 = []
    for i in range(1 << half):
        s = 0
        for j in range(half):
            if i & (1 << j):
                s += set[j]
        sum_set1.append(s)
    sum_set2 = []
    for i in range(1 << (n - half)):
        s = 0
        for j in range(n - half):
            if i & (1 << j):
                s += set[half + j]
        sum_set2.append(s)
    sum_set2.sort()
    for s in sum_set1:
        i = bisect_left(sum_set2, target - s)
        if i != len(sum_set2) and sum_set2[i] == target - s:
            return True
    return False

set = list(map(int, input().split()))
target = int(input())
if find_subset_sum(set, target):
    print("iyah")
else:
    print("tidak")
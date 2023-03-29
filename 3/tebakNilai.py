n, r = map(int,input().split())
left_part = 1
h = n

for _ in range(r):
    mid = (left_part + h) // 2
    res = input()
    if res == "ABOVE":
        left_part = mid + 1
    else:
        h = mid

if left_part == h:
    print(left_part)
else:
    print("Tidak ditemukan")

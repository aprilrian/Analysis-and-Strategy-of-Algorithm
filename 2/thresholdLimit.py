# Membaca inputan dari pengguna
threshold = list(map(int, input().split()))
suhu = list(map(int, input().split()))

# Menghitung rata-rata suhu kolam
rata_rata = sum(suhu) / len(suhu)

# Memeriksa apakah rata-rata suhu di luar batas wajar
if rata_rata < threshold[0] or rata_rata > threshold[1]:
    print("tidak aman")
else:
    for i in range(0, len(suhu) - 1):
        if suhu[i] < threshold[0] or suhu[i] > threshold[1]:
            print("tidak aman")
            break
        elif i == len(suhu) - 2:
            print("aman")
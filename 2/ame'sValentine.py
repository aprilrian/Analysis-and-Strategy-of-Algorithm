# Meminta input dari pengguna
x = int(input())
y = int(input())

# Menghitung jumlah maksimal teman yang bisa mendapatkan cokelat
jumlah_teman = 0
for i in range(1, min(x, y) + 1):
    if x % i == 0 and y % i == 0:
        jumlah_teman = i

# Menghitung jumlah cokelat untuk setiap teman
cokelat_per_teman_x = x // jumlah_teman
cokelat_per_teman_y = y // jumlah_teman

# Menampilkan hasil
print(jumlah_teman)
print(cokelat_per_teman_x, cokelat_per_teman_y)
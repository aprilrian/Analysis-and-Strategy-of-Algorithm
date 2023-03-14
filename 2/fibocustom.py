def fibonacci(n, a, b):
    if n <= 0:
        return []
    elif n == 1:
        return [a]
    elif n == 2:
        return [a, b]
    else:
        fib = [a, b]
        for i in range(2, n):
            next_fib = fib[i-1] + fib[i-2]
            fib.append(next_fib)
        return fib

# Meminta input dari user
n = int(input())
arr = list(input().split())
a = int(arr[0])
b = int(arr[1])

# Memanggil fungsi fibonacci dan menampilkan hasilnya
hasil = fibonacci(n, a, b)
hasil_str = ' '.join(str(i) for i in hasil)
print(hasil_str)
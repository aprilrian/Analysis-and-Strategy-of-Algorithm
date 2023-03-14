a = str(input())  
n = int(input()) 
repetisi = n // len(a) 
sisa = n % len(a) 
count_a = a.count('a') * repetisi

if sisa > 0:
    count_a += a[:sisa].count('a')

print(count_a)
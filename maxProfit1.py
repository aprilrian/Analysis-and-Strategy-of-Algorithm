def maxProfit(prices):
    n = len(prices)
    if n <= 1:
        return 0
    
    # Matriks dp untuk menyimpan keuntungan maksimum
    dp = [[0] * 2 for _ in range(n)]
    
    # Inisialisasi nilai awal
    dp[0][0] = 0  # Tidak memiliki saham pada awalnya
    dp[0][1] = -prices[0]  # Membeli saham pada hari pertama
    
    # Iterasi untuk menghitung keuntungan maksimum
    for i in range(1, n):
        # Tidak memiliki saham pada hari ini:
        # 1. Tidak membeli saham pada hari sebelumnya dan tetap tidak membeli
        # 2. Menjual saham pada hari sebelumnya
        dp[i][0] = max(dp[i-1][0], dp[i-1][1] + prices[i])
        
        # Mempunyai saham pada hari ini:
        # 1. Tidak menjual saham pada hari sebelumnya dan tetap memegang
        # 2. Membeli saham pada hari sebelumnya atau baru membeli hari ini
        dp[i][1] = max(dp[i-1][1], dp[i-1][0] - prices[i])
    
    return dp[n-1][0]  # Keuntungan maksimum adalah saat tidak memiliki saham pada akhirnya

n = int(input())
prices = list(map(int, input().split()))

maximum_profit = maxProfit(prices)

print(maximum_profit)

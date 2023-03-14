from math import comb

def count_combinations(word):
    vowels = ['a', 'i', 'u', 'e', 'o']
    consonants = [char for char in word if char not in vowels]
    n = len(consonants)
    total_combinations = sum(comb(n, r) for r in range(1, n+1))
    return total_combinations

A = list(input())
print(count_combinations(A))
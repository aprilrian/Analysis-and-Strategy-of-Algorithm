def fake_coin(arr):
    n = len(arr)
    
    if n == 1:
        return arr[0]
    
    mid = n // 2
    left = arr[:mid]
    right = arr[mid:]
    
    if (len(left) < len(right)):
        left_weight = sum(left) + arr[1]
        right_weight = sum(right)
    else:
        left_weight = sum(left)
        right_weight = sum(right)
    
    if left_weight == right_weight:
        print(left)
        return fake_coin(left)
    
    else:
        if left_weight < right_weight:
            print(left)
            return fake_coin(left)
        else:
            print(right)
            return fake_coin(right)
        
arr = list(map(int, input().split()))      
fake_coin(arr)
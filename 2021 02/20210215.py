def f(n):
    num = [1 for _ in range(40)]

    for i in range(2, n): 
        num[i] = num[i-1] + num[i-2]
    for i in range(0, n):
        if i == n - 1:
            print(num[i])

n = int(input())
f(n)
 

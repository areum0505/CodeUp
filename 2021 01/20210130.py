count = 0
k, n = input().split()
k = int(k)
n = int(n)
while k >= n:
  k -= n
  count += 1
  k += 1
print(count)
 

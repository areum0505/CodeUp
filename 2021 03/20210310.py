li = input().split()
n = int(li[0])
m = int(li[1])
cnt = 0

while True:
  if n >= m + 1:
    n -= 1
    n -= m
    cnt += m
  else:
    cnt += n
    break
    
print(cnt)

li = input().split()
k = int(li[0])
n = int(li[1])
m = int(li[2])

result = k * n - m
if result > 0:
  print(result)
else:
  print(0)

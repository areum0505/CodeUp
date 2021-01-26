n = int(input())
a, b = 100, 100
for i in range(n):
  li = input().split()
  if int(li[0]) > int(li[1]):
    b -= int(li[0])
  elif int(li[0]) < int(li[1]):
    a -= int(li[1])
print(a)
print(b)

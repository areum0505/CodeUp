n = int(input())
total = 0

for i in range(n):
  li = input().split()
  a = int(li[0])
  b = int(li[1])
  total += b % a

print(total)

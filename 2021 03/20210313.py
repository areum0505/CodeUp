a = int(input())
b = int(input())
c = int(input())

result = str(a * b * c)

li = [0 for _ in range(10)]

for i in result:
  li[int(i)] += 1

for i in li:
  print(i)

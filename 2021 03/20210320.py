n = int(input())
li = input().split()

result = 1

for i in li:
  result *= int(i)

print(result % 2013)

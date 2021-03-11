n = int(input())
li = input().split()

for i in range(n):
  li[i] = float(li[i])

a = "green"

for i in li:
  if i >= 33:
    a = "yellow"
    if i >= 35:
      a = "red"
      break

print(max(li))
print(a)

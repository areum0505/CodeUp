n = int(input())
count = 0
for i in range(n):
  count = 0
  k = input()
  for j in range(len(k)-1):
    if (k[j] == '6' and k[j+1] == '2'):
      count += 1
  print(count)



a_card = input().split()
b_card = input().split()

a = 0
b = 0
c = 0

for i in range(10):
  if int(a_card[i]) > int(b_card[i]):
    a += 3
    c = 1
  elif int(a_card[i]) < int(b_card[i]):
    b += 3
    c = 2
  else:
    a += 1
    b += 1

print(a, b)
if a > b:
  print("A")
elif a < b:
  print("B")
else:
  if c == 0:
    print("D")
  elif c == 1:
    print("A")
  else:
    print("B")

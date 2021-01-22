a_card = input().split()
b_card = input().split()

a = 0
b = 0

for i in range(10):
  if int(a_card[i]) > int(b_card[i]):
    a += 1
  elif int(a_card[i]) < int(b_card[i]):
    b += 1

if a > b:
  print("A")
elif a < b:
  print("B")
else:
  print("D")


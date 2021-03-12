li = input().split()
a = li[0]
n = int(li[1])
check = False

for i in range(n):
  b = input()

  s_cnt = 0
  b_cnt = 0

  for i in range(0, 3):
    for j in range(0, 3):
      if(b[i] == str(a[j]) and i == j):
        s_cnt += 1
      elif(b[i] == str(a[j]) and i != j):
        b_cnt += 1

  if s_cnt == 3:
    print("3S")
    check = True
    break
  elif b_cnt == 3:
    print("3B")
  elif s_cnt == 0 and b_cnt == 0:
    print("OUT")
  elif s_cnt > 0 and b_cnt == 0:
    print(str(s_cnt) + "S")
  elif s_cnt == 0 and b_cnt > 0:
    print(str(b_cnt) + "B")
  else:
    print(str(s_cnt) + "S" + str(b_cnt) + "B")  

if check:
  print("SUCCESS")
else:
  print("FAIL")

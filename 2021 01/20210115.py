s = input()
s = s[::-1]
li = []
for i in s:
  li.append(bin(ord(i)))
for i in li:
  for j in i[2:]:
    if j == '0':
      print(1, end = '')
    else:
      print(0, end = '')
  print()
 
 

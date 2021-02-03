a = input()
b = '0x' + a
c = bin(int(b, 16))

s = ''

for i in range(len(c) - 1, 1, -1):
  s = c[i] + s

while(len(s) % 4 != 0):
  s = '0' + s

for i in range(len(s)):
  if i % 4 == 0 and i != 0:
    print(' ' + s[i], end = '')
  else:
    print(s[i], end = '')

x1, y1, d1 = map(int, input().split())
x2, y2, d2 = map(int, input().split())

xd = x1 - x2
yd = y1 - y2
sumr = d1 + d2
d = xd * xd + yd * yd

if d < sumr * sumr:
  print("overlapped")
else:
  print("not overlapped")

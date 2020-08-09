an = int(input())
s1 = set(map(int, input().split()))
bn = int(input())
s2 = set(map(int, input().split()))

li1 = list(s1 & s2)
li2 = list(s1 | s2)
li1.sort()
li2.sort()

if not li1:
    print('0', end=' ')
else:
    for i in li1:
        print(i, end=' ')
print()
for i in li2:
    print(i, end=' ')

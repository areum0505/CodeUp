n = int(input())
arr = [[int(i) for i in input().split()] for j in range(n)]
k = int(input())
for i in range(k):
    x, y = map(int, input().split())
    x -= 1; y -= 1
    if x != 0 and y != 0:
        arr[x - 1][y - 1] = 0
    if y != 0:
        arr[x][y - 1] = 0
    if x != n-1 and y != 0:
        arr[x + 1][y - 1] = 0
    if x != 0:
        arr[x - 1][y] = 0
    arr[x][y] = 0
    if x != n-1:
        arr[x + 1][y] = 0
    if x != 0 and y != n-1:
        arr[x - 1][y + 1] = 0
    if y != n-1:
        arr[x][y + 1] = 0
    if x != n-1 and y != n-1:
        arr[x + 1][y + 1] = 0

total = 0

for i in range(n):
    for j in range(n):
        total += arr[i][j]

print(total)

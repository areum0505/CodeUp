arr = [[0] * 5 for i in range(5)]

for i in range(5):
    arr[i] = input().split()

h, v = [], []
for i in range(5):
    a = []
    b = []
    for j in range(5):
        a.append(int(arr[i][j]))
        b.append(int(arr[j][i]))
    h.append(max(a))
    v.append(max(b))

print(abs(sum(h) - sum(v)))

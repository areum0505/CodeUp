li = [0 for _ in range(10000)]
li[0], li[1] = 1, 1
n = int(input())
for i in range(2, n):
    li[i] = li[li[i - 1] - 1] + li[i - li[i - 1]]
print(li[n - 1])

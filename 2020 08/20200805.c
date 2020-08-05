li = [0 for _ in range(10)]
for i in range(9):
    li[i] = int(input())

print(max(li))
print(li.index(max(li)) + 1)

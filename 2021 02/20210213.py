ab = input().split()
a = ab[0]; b = ab[1]
max = 0

for i in range(int(a), int(b) + 1):
    for j in range(int(a), int(b) + 1):
        if i*j == int(str(i*j)[::-1]): 
            if i*j >= max:
                max = i*j

print(max)

from math import gcd

n = int(input())
li = input().split()

result = int(li[0])
for i in li[1:]:
    result = int(result*int(i)/gcd(result, int(i)))

print(result)

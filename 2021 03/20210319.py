n = int(input())

n %= 60

a = n % 10 - 1
b = n % 12 - 1

li1 = [7, 8, 9, 0, 1, 2, 3, 4, 5, 6]
li2 = ["J", "K", "L", "A", "B", "C", "D", "E", "F", "G", "H", "I"]

result = li2[b] + str(li1[a])
print(result)

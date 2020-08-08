radon = int(input())

if 1 <= radon <= 1000:
    if radon < 74:
        print(radon, 'blue', 'recommend')
    elif radon < 100:
        print(radon, 'green', 'possible')
    elif radon < 148:
        print(radon, 'yellow', 'careful')
    else:
        print(radon, 'red', 'stop')
else:
    print(radon, 'data error')

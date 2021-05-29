def gcd(x, y):
    while y != 0:
        r = x%y
        x = y
        y = r
    return x

for _ in range(int(input())):
    n, *a = map(int, input().split())
    s = 0
    for i in range(0, n-1):
        for j in range(i+1, n):
            s += gcd(a[i], a[j])
    print(s)

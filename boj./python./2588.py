a=int(input())
b=int(input())
arrb = [int(_) for _ in str(b)]
arrb.reverse()

for _ in range(len(arrb)):
    print(a*arrb[_])

print(a*b)

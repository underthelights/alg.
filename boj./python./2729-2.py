for _ in range(int(input())):
    n = [int(_,2) for _ in input().split()]
    print(bin(sum(n))[2:])

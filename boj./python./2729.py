# import sys
# sys.stdin = open("input.txt", 'r')

for _ in range(int(input())):

    a,b = map(str, input().split())
    a = "0b" + a
    b = "0b" + b

    print(bin(int(a,2) + int(b,2))[2:])
    

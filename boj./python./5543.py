# import sys
# sys.stdin = open("input.txt", 'r')

n = [int(input()) for _ in range(2)]
b = [int(input()) for _ in range(3)]

print(min(n)+min(b)-50)

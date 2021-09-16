# import sys
# sys.stdin = open("input.txt", 'r')

n = int(input())
b = [int(input()) for _ in range(9)]

print(n-sum(b))

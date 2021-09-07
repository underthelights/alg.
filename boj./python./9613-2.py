

def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b, a%b)


# num = int(input())
# for _ in range(num):
#     N, *arr = map(int, input().split())
for _ in range(int(input())):
    N, *arr = map(int, input().split())
    sum = 0
    k = len(arr)
    for i in range(k):
        for j in range(k):
            if i < j:
                sum += gcd(arr[i], arr[j])

    print(sum)

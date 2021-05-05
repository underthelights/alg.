def factorial_meta(n):
    if not n:
        return 1
    return eval('*'.join(str(i) for i in range(1, n+1)))

print(factorial_meta(int(input())))

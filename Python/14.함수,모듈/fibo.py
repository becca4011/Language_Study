# n-번째 피보나치 수
def nfib(n):
    a, b = 0, 1
    k = 1

    while k <= n:
        a, b = b, a + b
        k = k + 1

    return a

# n-번째 피보나치 수열
def fib(n):
    result = []
    a, b = 0, 1
    k = 1

    while k <= n:
        result.append(b)
        a, b = b, a + b
        k = k + 1

    return result

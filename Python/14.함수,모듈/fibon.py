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

# 모둘 내의 코드가 import 된 것처럼 스크립트 실행
if __name__ == "__main__":
    f = fib(12)
    print(f)

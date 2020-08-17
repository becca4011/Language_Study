""" 무명함수 (lambda) """

# lambda 함수는 여러 개의 매개변수를 가질 수 있음
# 반환은 수식의 형태, 한 개의 값만 반환
# 여러 개의 명령문과 수식 포함 X
"""
dbl = lambda x : x * 2


def dbl(x):
    return x * 2


print(dbl(7))
"""

# 두 수의 곱
"""
mul = lambda arg1, arg2 : arg1 * arg2 # arg1 * arg2 값 반환

print('10 * 20 =', mul(10, 20))
print('37 * 29 =', mul(37, 29))
"""

# 중첩 함수 정의
"""
def nestfunc(n):
    return lambda x : x * n # x : 25, n : 2 / x : 10, n = 3

# dbl = lambda x : x * 2
# tri = lambda x : x * 3

dbl = nestfunc(2)
tri = nestfunc(3)

print(dbl(25))
print(tri(10))
"""

""" 변수의 범위 (scope) """

# 기억장소 참조하여 값을 사용
# 변수 참조
# 변수의 참조 영역(scope) 내에서만 가능 - scope rule

# 지역 변수 (local variable) : 함수 내부 영역에서 사용되는 변소
# 전역 변수 (global variable) : 함수 내외부 영역 모든 곳에서 사용되는 변수


# 지역 변수
"""
def cArea(radius):
    result = 3.14 * radius ** 2
    return result

r = float(input("원의 반지름 : "))

area = cArea(r)
print(result) # result 정의 X, 오류
"""

# 전역 변수
"""
def cArea():
    result = 3.14 * r ** 2 # 지역 변수
    return result

r = float(input("원의 반지름 : ")) # 전역 변수

area = cArea()
print(area)
"""
"""
def cArea(radius):
    area = 3.14 * radius ** 2 # 아래의 area와 다른 area
    return

area = 0
r = float(input("원의 반지름 : "))

cArea(r)

print(area) # area = 0 이므로 0이 출력
"""
"""
def cArea(radius):
    global area # 전역 변수로 변경, 아래의 area와 같음
    area = 3.14 * radius ** 2
    return

area = 0
r = float(input("원의 반지름 : "))

cArea(r)

print(area)
"""

# 예제
"""
# 함수 호출 전에 변수 s를 정의하지 않음 -> 오류 발생
def func():
    print(s)

func()
s = 'Apple'
"""
"""
# 지역 변수를 선언하지 않아 전역 변수 s값을 출력 (정상)
def func():
    print(s)

s = 'Apple'
func()
"""
"""
# 함수 내의 지역 변수 s 값을 할당하기 전에 참조함 -> 오류
def func():
    print(s)
    s = 'Banana'

s = 'Apple'
func()
"""
"""
# 정상
def func():
    s = 'Banana'
    print(s)

func()
"""
"""
def func():
    s = 'Banana'
    print(s)

func() # 지역 변수 참조

s = 'Apple'
print(s) # 전역 변수 참조
"""
"""
def func():
    global s # 전역 변수
    print(s) # Apple

    s = 'Banana' # s가 Banana로 바뀜
    print(s) # Banana
    
s = 'Apple'
func()
print(s) # Banana (전역변수가 Banana로 바뀌었기 때문)
"""
"""
def sub(x, y):
    global a # 전역 변수

    a = 7
    x, y = y, x
    b = 3
    print(a, b, x, y)

a, b, x, y = 1, 2, 3, 4

sub(x, y) # 함수 호출

print(a, b, x, y) # 전역 변수 a의 값만 바뀌고 나머지는 동일
"""


""" 모듈 """

# 함수나 변수들을 모아놓은 파일
# 확장자 .py를 갖는 파일로 저장
# 하나의 모튤에 여러 개의 함수 가질 수 있음
# 모듈 내부의 함수들은 다른 이름

# 모듈 파일은 프로그램 파일과 동일한 디렉터리에 있어야 함
# 코드 재사용

# turtle, random, math는 파이썬 라이브러리에 정의된 모듈

"""
import testModule

tm = testModule.sayHi('길동')
print(tm)
"""

""" 모듈 읽는 방법 """

"""
# <일반적 방법>
import random
print(random.randint(1, 10))

# <사용시 생략할 수 있는 방법>
from random import *
print(randint(1, 10))

# <약어 사용 방법>
import random as r
print(r.randint(1, 10))
"""

# 피보나치 수, 수열
"""
import fibo

print(fibo.nfib(10)) # 10번째 피보나치 수
print(fibo.fib(10)) # 10번째까지의 피보나치 수열

from fibo import *

print(nfib(10))
print(fib(10)) 

import fibo as f

print(f.nfib(10))
print(f.fib(10))
"""

# 연습문제
"""
import turtle

t = turtle.Turtle()

def cir():
    for i in range(1, 4):
        t.circle(50)
        
        t.penup()
        t.goto(100 * i, 0)
        t.pendown()

    for i in range(1, 3):
        if(i == 1):
            t.penup()
            t.goto(50, -50)
            t.pendown()
            
        t.circle(50)

        t.penup()
        t.goto(150, -50)
        t.pendown()

cir()

t.hideturtle()
"""
"""
def divisor(b, a = 1):
    result = []

    for i in range(1, b + 1):
        if(a == 1):
            if(b % i == 0):
                result.append(i)
        elif (a % i == 0 and b % i == 0):
            result.append(i)

    return result

print(divisor(24, 36))
print(divisor(18))
""" 

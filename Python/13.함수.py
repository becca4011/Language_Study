""" 함수 """

# 특별한 일을 수행하는 명령어들의 모음에 이름을 붙인 것
# 코드의 재사용 가능하게 함
# 입력 데이터를 받아서, 필요한 작업을 실행한 후 작업의 결과를 반환

# print(), input(), abs()
# 함수 안의 명령어들을 실행하려면 함수를 호출(call)하면 된다.
"""
value = abs(-100) # 절댓값
print(value)

fruits = ['apple', 'banana', 'cherry', 'grape']
print(len(fruits))
"""
"""
sum = 0

for i in range(1, 11):
    sum = sum + i

print('1 ~ 10 까지의 합 : ', sum)
"""
"""
sum = 0

for i in range(5, 36):
    sum = sum + i

print('5 ~ 35 까지의 합 : ', sum)
"""
"""
def sum(begin, end):
    result = 0

    for i in range(begin, end + 1):
        result = result + i

    return result

print('1 ~ 10 까지의 합 : ', sum(1, 10))
print('5 ~ 35 까지의 합 : ', sum(5, 35))
"""
"""
def listmax(lt):
    max = 0
    
    for i in range(0, len(lt)):
        if lt[i] > max:
            max = lt[i]

    return max

lst = [28, 13, 76, 32, 63]

print(lst, 'max =', listmax(lst))
"""

# 인수 없는 함수
"""
def func():
    n = 100
    # return 문이 없으면 None 반환

print('함수 결과 :', func())
"""
"""
def func():
    n = 100
    return n

print('함수 결과 :', func()) # return 문이 100 반환
"""

# 인수 있는 함수
"""
def func(arg):
    n = arg + 100
    print(n)
    # return 문이 없으면 None 반환

print('함수 결과 :', func(7))
"""
"""
def func(arg):
    n = arg + 100
    print(n)

print('함수 결과 :', func()) # 호출할 때 인수가 없으면 오류
"""
"""
def func(arg):
    n = arg + 100
    return n

print('함수 결과 :', func(7))
"""

# 정의되지 않은 함수 호출
"""
print(func(7)) # 코드를 위에서 아래로 읽기 때문에 아직 선언되지 않음(오류 발생)

def func(arg):
    n = arg + 100
    return n
"""
"""
def main():
    print(power(10, 2)) # 아직 power가 선언되지 않은 상태에서 사용

def power(x, y):
    result = 1

    for i in range(y):
        result = result * x

    return result

main() # main 함수를 마지막에 호출하면 오류 발생 X
"""
"""
def fib(n):
    a, b = 0, 1

    while a < n:
        print(a, end = ' ')
        a, b = b, a + b

    print()

fib(100)
"""
"""
def CtoF(C):
    F = 9 / 5 * C + 32
    return F

deg = eval(input('섭씨 온도 : '))
print('화씨 온도 :', CtoF(deg))
"""
"""
def square(n):
    area = n * n
    return area

print(square(10))
"""
"""
def getPower(a, b):
    power = 1

    for i in range(1, b + 1):
        power *= a

    return power

print(getPower(8, 3))
"""


""" 인수 전달 """

# 인수 : 호출 프로그램에 의하여 함수에 실제로 전달되는 값 (실 매개변수)
# 매개 변수 : 함수에서 이 값을 전달받는 변수 (형식 매개변수)

# def func(a, b) -> a, b : 매개변수
# func(1, 2) -> 1, 2 : 인수

"""
def getGrade(n):
    if n >= 90:
        return 'A'
    elif n >= 80:
        return 'B'
    elif n >= 70:
        return 'C'
    elif n >= 60:
        return 'D'
    else:
        return 'F'

while 1:
    n = eval(input('점수 : '))

    if n < 0 or n > 100:
        print('종료함')
        break
    print(getGrade(n) + ' 학점')
"""
"""
import turtle

t = turtle.Turtle()

def square(length):
    for i in range(4):
        t.forward(length)
        t.left(90)

leng = 50

for n in range(3):
    square(leng)
    leng = leng + 30 # 30씩 늘리기
"""
"""
import turtle

t = turtle.Turtle()

def square(length):
    for i in range(4):
        t.forward(length)
        t.left(90)
 
leng = 50

for n in range(4):
    square(leng)
    t.forward(leng)

for n in range(4):
    square(leng)
    t.left(90)

for n in range(4):
    square(leng)
    t.left(30)
"""
"""
import turtle

t = turtle.Turtle()

def polygon(n, length):
    for i in range(n):
        t.forward(length)
        t.left(360 // n)

for i in range(10):
    polygon(5, 100)
    t.left(360 / 10) # 오각형을 하나 그린 뒤 36도만큼 회전
"""

# 참조 값에 의한 인수 전달

# 함수를 호출할 때, 변수를 전달하는 2가지 방법
#   1. 값에 의한 호출 (call-by-value)
#   2. 참조에 의한 호출 (call-by-reference)


# 인수로 리스트가 전달된 경우 : 인수의 주소 전달
"""
def callByRef(mylist):
    mylist += [1, 2, 3, 4]
    print('Inside Func :', mylist)
    return

mylist = [10, 20, 30]
print('Before Call :', mylist)

callByRef(mylist)
print('After Call :', mylist)
"""

# 주소로 전달된 리스트의 한 원소 값을 변경하는 경우 : 인수의 주소 유지
"""
def callByRef(mylist):
    mylist[0] = 90
    print('Inside Func :', mylist)
    return

mylist = [10, 20, 30]
print('Before Call :', mylist)

callByRef(mylist)
print('After Call :', mylist)
"""

# 인수의 주소가 젼달되지만, 함수 내부에서 새로운 값이 할당되는 경우
# : 함수 내의 mylist는 지역변수로 초기화
"""
def callByVal(mylist):
    mylist = [1, 2, 3, 4] # 새로운 값 할당(기억장소가 달라짐)
    print('Inside Func :', mylist)
    return

mylist = [10, 20, 30]
print('Before Call :', mylist)

callByVal(mylist) # 지역변수 ([10, 20, 30])로 초기화
print('After Call :', mylist)
"""

# 인수가 숫자나 문지인 경우 : 인수의 값이 전달
"""
def modify(n):
    n = n + 1

k = 10
print('k =', k)

modify(k)
print('k =', k)
"""
"""
def modify(msg):
    msg += ' to you '
    print('Inside :', msg)
    return

msg = 'happy birthday'
print('Before :', msg)

modify(msg)
print('After :', msg)
"""


""" 키워드 """

# 함수 호출 시 인수의 순서와 상관없이 인수의 이름을 이용해 값을 전달
"""
def func(name, age):
    print('Name :', name)
    print('age :', age)
    return

func(age = 27, name = 'Tom')
"""

""" 디폴트 인수 """

# 함수의 매개변수가 기본값을 가질 수 있음
"""
def greet(name, msg = '잘 지냈죠?'): # msg가 기본값을 가짐 (디폴트 인수)
    print('안녕', name + ', ' + msg)

greet('영희')
"""
"""
def sayHello(name = 'Everybody'):
    s = 'Hello! ' + name
    return s

print(sayHello())
print(sayHello('John'))
"""

# 키워드 인수와 디폴트 인수 사용
"""
def getSum(end, begin = 1): # 디폴트 인수는 맨 뒤에 와야 함
    result = 0

    for i in range(begin, end + 1):
        result += i

    return result

print('15까지의 합 :', getSum(15)) # end
print('3 ~ 25까지의 합 :', getSum(25, 3)) # end, begin (헷갈림)
print('3 ~ 25까지의 합 :', getSum(begin = 3, end = 25)) # begin, end (키워드 사용)
"""

"""
def func(name, age, sal = 1000):
    print('Name :', name)
    print('Age :', age)
    print('Sal :', sal, '\n')
    return

func(age = 27, name = 'Tom')
func('Kim', 33)
func('John', 39, 1200)
# func(sal = 1100, name = 'Mike') age가 없으므로 오류
# func('Lee') age가 없으므로 오류
# func('Bob', sal = 1300) age가 없으므로 오류
# func(sal = 1400, 31, name = 'Mary') 키워드 인수는 맨 뒤로 와야 함
"""

import turtle

t = turtle.Turtle()

def polygon(n, length = 100):
    for i in range(n):
        t.forward(length)
        t.left(360 // n)

poly = int(input('n각형 : '))

ans = input('길이를 지정하겠습니까? (y, n) : ')

if ans is 'y':
    leng = int(input('길이 : '))
    polygon(poly, leng)
    
else:
    polygon(poly)



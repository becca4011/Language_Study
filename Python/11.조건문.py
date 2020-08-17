# 순차 구조 (sequence) : 명령들이 순차적으로 실행되는 구조
# 선택 구조 (selection) : 둘 중의 하나의 명령을 선택하여 실행되는 구조
# 반복 구조 (iteration) : 동일한 명령이 반복되면서 실행되는 구조

""" 조건문 (선택 구조) """

# 단순 if 문
# if-else 문
# 다중 분기
# 중첩 if 문

""" 단순 if 문 """
"""
temp = int(input('현재 온도는? '))

print('\n오늘은', end = ' ')

# : 이나 들여쓰기가 되어있지 않으면 오류
if temp < 0:
    temp = -temp # 앞에 영하를 붙이기 때문에 '-'를 없애줌
    print('영하', end = ' ')

print(temp, '도 입니다. \n')

"""
"""
# 블록 사용 예
x = int(input('정수 입력 : '))

print('구역 1')

if x >= 0:
    print('구역 2')
    print('구역 3')

y = int(input('정수 입력 : '))

print('구역 1')

if y >= 0:
    print('구역 2')
print('구역 3') # if문 포함 X

"""
"""
n = int(input('정수 입력 : '))

if n % 2 == 0:
    print('2의 배수')

if n % 3 == 0:
    print('2의 배수')
"""
"""
age = int(input('나이는? '))
money = int(input('요금은? '))

if age >= 65:
    print('할인 요금은', int(money / 2), '입니다')

if age < 65:
    print('요금은', money, '입니다')
"""


""" if-else 문 """
"""
x = int(input('정수 입력 : '))

if x % 2 == 0:
    print('\n', x, ': 짝수')
else:
    print('\n', x, ': 홀수')
"""
"""
name = input('이름 : ')
age = int(input('나이 : '))
height = int(input('키 : '))

if age >= 12 and height >= 140:
    print(name, '탐승 가능')
else:
    print(name, '탑승 불가능')
"""
"""
year = int(input('연도 : '))

if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
    print(year, '년은 윤년')
else:
    print(year, '년은 윤년 아님')
"""
"""
n1 = int(input('수1 입력 : '))
n2 = int(input('수2 입력 : '))

if n1 > n2:
    if n2 == 0:
        print('Divide by zero')
    else:
        print(n1, '나누기', n2, '=', n1 // n2, '나머지', n1 % n2)
else:
    if n1 == 0:
        print('Divide by zero')
    else:
        print(n2, '나누기', n1, '=', n2 // n1, '나머지', n2 % n1)
"""


""" random 모듈 """

# 난수가 필요한 경우, random 모듈 import
# 주어진 범위에서 임의의 수 생성

import random

# randint(begin, end) : begin과 end사이의 임의의 정수
"""
a = int(input('1~10 정수 입력 : '))
x = random.randint(1, 10)

if x == a:
    print('x =', x, '성공')
else:
    print('x =', x, '실패')
"""    
# choice(seq) : 주어진 순서열 seq에서 임의의 한 개 선택
"""
x = random.choice('beautiful')
y = random.choice(['cat', 'dog', 'cow'])

print('선택된 문자 :', x, '\n선택된 원소 :', y)
"""
# sample(group, k) : 주어진 집단에서 임의의 다른 k개를 추출하여 리스트 구성
"""
x = random.sample(range(100), 10) # range(100) : 0~99

print(type(x), '\n', 'x =', x)
"""
# random() : 0과 1사이의 임의의 실수 생성
"""
x = random.random()

print(type(x), '\n', 'x =', x)
"""
# randrange(n) : 0에서 n-1 사이의 임의의 정수
"""
coin = random.randrange(2)

if coin == 0:
    print('앞면')
else:
    print('뒷면')
"""
"""
user = int(input('사용자 수 선택 : '))

com = random.randrange(2)

if user % 2 == 0 and com == 1 or user % 2 != 0 and com == 0:
    print('사용자 :', user, '\t컴퓨터 : ', end = '')

    if com == 1:
        print('짝', end = ' ')
    else:
        print('홀', end = ' ')

    print('==> 컴퓨터 승')
else:
    print('사용자 :', user, '\t컴퓨터 : ', end = '')

    if com == 1:
        print('짝', end = ' ')
    else:
        print('홀', end = ' ')

    print('==> 사용자 승')
"""


""" 다중 분기 (if-elif-else) """
"""
score = int(input('성적 : '))

if score >= 90:
    print('A')
elif score >= 80: # 80 <= score ＜ 90
    print('B')
elif score >= 70: # 70 <= score ＜ 80
    print('C')
elif score >= 60: # 60 <= score ＜ 70
    print('D')
else:
    print('F')
"""
"""
num = int(input('정수 입력 : '))

if num > 0:
    print('양수')
elif num == 0:
    print('0')
else:
    print('음수')
"""
"""
weight = int(input('체중 : '))
height = int(input('키 : '))

m = height / 100

BMI = weight / (m * m)

if BMI < 18.5:
    print('저체중')
elif BMI < 25:
    print('정상')
elif BMI < 30:
    print('과체중')
else:
    print('비만')
"""

""" 중첩 if 문 """

a, b, c = eval(input('3개의 정수 입력 : '))

print('입력된 순서 :', a, b, c)

if a > b and a > c:
    if b > c:
        max, mid, min = a, b, c
    else:
        max, mid, min = a, c, b
        
elif b > a and b > c:
    if a > c:
        max, mid, min = b, a, c
    else:
        max, mid, min = b, c, a
        
else:
    if a > b:
        max, mid, min = c, a, b
    else:
        max, mid, min = c, b, a

print('정렬된 순서 :', max, mid, min)

""" 반복문"""


# while : 어떤 조건이 만족되는 동안 반복하는 구조
"""
cnt = 0

while cnt < 5:
    print("Python Programming")
    cnt += 1

print()
"""

# for : 정해진 횟수만큼 반복하는 구조
"""
for i in range(5):
    print("Python Programming")
"""


""" 조건 제어 반복 (while) """
"""
n = 1
sum = 0

while n <= 10:
    sum += n
    n += 1

print("1 ~ 10 까지의 합 : ", sum)
"""
"""
n = 0
sum = 0

while sum <= 500:
    n += 1
    sum += n

print("1 ~ ", n, " 까지의 합 : ", sum)
"""
"""
import random

n = 0

while n != 4:
    n = random.randint(0, 9)
    print(n)
"""
"""
import random

n = 0
cnt = 0
ran = random.randint(1, 100)

print("1 ~ 100 사이의 숫자를 맞추시오")

while n != ran:
    n = int(input("숫자 입력 : "))
    cnt += 1

    if n < ran:
        print("낮음")
    elif n > ran:
        print("높음")

print(cnt, "번 째 ", n, " 찾음")
"""

# 무한루프
"""
n = 1
while 1:
    print(n)
    n += 1

print("루프 탈출") # Ctrl - c로 탈출
"""
"""
n = 1
while 1:
    if n > 10:
        break
    
    print(n, end=' ')
    n += 1

print("루프 탈출")
"""

# break
"""
n = 0

while n < 10:
    n += 1

    if n % 3 == 0:
        break # 반복문 탈출

    print(n, end = ' ')
"""
# continue
"""
n = 0

while n < 10:
    n += 1

    if n % 3 == 0:
        continue # 다음 반복 실행
    
    print(n, end = ' ')
"""

# 정사각형 그리기
"""
import turtle

t = turtle.Turtle()
i = 0

while i < 4:
    t.forward(100)
    t.right(90)
    
    i += 1
"""

# 별 그리기
"""
import turtle

t = turtle.Turtle()
t.shape("turtle")

i = 0

while i < 5:
    t.forward(200)
    t.right(144)
    i += 1
"""
"""
import turtle

t = turtle.Turtle()

while 1:
    cmd = input("명령 입력(l, r, q) : ")

    if(cmd == 'l'):
        t.left(90)
        t.forward(100)
    elif(cmd == 'r'):
        t.right(90)
        t.forward(100)
    elif(cmd == 'q'):
        break
"""
"""
i = 1
n = int(input("수 입력 : "))

print("제 ", n, "단")
print("-----------------------")

while i < 10:
    print(n, "*", i, "=", n * i)
    i += 1
"""


""" for 문 """

# 리스트 활용 : 리스트 항목 수 만큼 반복
"""
for num in ["하나", "둘", "셋", "넷"]:
    print("숫자", num)

for i in [1, 2, 3, 4, 5]:
    print("Python")
"""
"""
mylist = [10, 20, 30]

for i in mylist:
    print(i) # i = 리스트의 원소 값
"""
"""
words = ['dog', 'python', 'programming']

for i in words:
    print(i, len(i))
"""
"""
words = ['happy', 'sunday', 'bay', 'pretty']

c = 0

for id in words:
    if 'ay' in id:
        print(id)
        c += 1

print(len(words), '개의 원소 중', c, '개 발견')
"""

# 문자열 활용
"""
for c in "abcdef":
    print(c, end = ' ')
"""
"""
words = 'King'

for i in words:
    print(i)
"""
"""
word = input('단어 입력 : ')

cnt = 0

for c in word:
    if c not in 'aeiouAEIOU':
        cnt += 1
        print(c, end = ' ')

print('\n' + word + '의 자음 수 :', cnt)
"""

# range() 함수

# range([start,] stop [, step])
# start부터 stop - 1까지 step의 간격으로 정수 생성
# start, step은 생략 가능 (생략되면 start는 0, step은 1로 간주)
# stop만 사용할 경우, 1 ~ stop - 1까지 범위 지정

"""
sum = 0

for x in range(10): # range(0, 10, 1)과 같음
    sum = sum + x # 0 ~ 9 까지 더함

print(sum)
"""
"""
for v in range(3, 9 ,2):
    print(v)

print()

for v in range(5, 1, -1):
    print(v)

print()

for v in range(5):
    print(v)
"""
"""
for i in range(1, 11):
    print(i, end = ' ')

print()

for i in range(10):
    print(i + 1, end = ' ')
"""
"""
n = int(input('정수 입력 : '))

star = '*'
tstar = ''

for i in range(n):
    tstar = tstar + star
    print(tstar)
"""
"""
import random
import turtle

t = turtle.Turtle()

for i in range(10):
    degree = random.randint(1, 360)
    length = random.randint(10, 100)

    t.left(degree)
    t.forward(length)
"""


""" 실습 예제 """
"""
sum = 0

for i in range(1, 101):
    if i % 2 != 0:
        sum += i

print(sum)
"""
"""
sum = 0
avg = 0

p = 0
f = 0

for i in range(10):
    score = int(input("점수 입력 : "))

    if score >= 80:
        p += 1
    else:
        f += 1

    sum += score

avg = sum / 10

print("pass : ", p, "fail : ", f)
print("평균 :", avg)
"""
"""
n = int(input("정수 입력 : "))
cnt = 0

for i in range(2, n):
    if n % i == 0:
        cnt += 1

if cnt != 0:
    print("소수 X")
else:
    print("소수")
"""
"""
import turtle

t = turtle.Turtle()

n = int(turtle.textinput("정다각형", "정수 입력 : "))

for i in range(n):
    t.forward(100)
    t.left(180 - ((180 * (n - 2)) / n))
"""


""" 중첩 루프 """
"""
for x in range(3):
    print('x = ', x)

    for y in range(3):
        print('\t', 'y = ', y)
"""
"""
for i in range(5):
    for j in range(5):
        print(i + 1, end = '')
    print()

for i in range(5):
    for j in range(5):
        print(j + 1, end = '')
    print()
"""
"""
n = int(input('수 입력 : '))

for v in range(n):
    for x in range(n):
        print("*", end = '')
    print()

for v in range(n):
    for x in range(v + 1):
        print("*", end = '')
    print()
"""
"""
n = int(input('수 입력 : '))

for i in range(n):
    for j in range(i + 1):
        print(j + 1, '', end = '')
    print()
"""
"""
cnt = 0

for a in range(1, 51, 1):
    for b in range(a, 51, 1):
        for c in range(b, 51, 1):
            if((a ** 2 + b ** 2) == c ** 2):
                print(a, b, c)
                cnt += 1

print("피타고라스 삼각형 : %d개" %cnt)
"""
"""
import turtle

t = turtle.Turtle()

for i in range(6):
    for j in range(3):
        t.forward(100)
        t.left(120)
    t.penup()
    t.forward(100)
    t.left(60)
    t.pendown()
"""
"""
import turtle

t = turtle.Turtle()

for i in range(10):
    for j in range(5):
        t.forward(100)
        t.left(180 - 108)
    t.penup()
    t.forward(100)
    t.left(36)
    t.pendown()
"""

# 반복문 else

# for 루프의 반복이 성공적으로 완료 -> else 실행
# for 루프가 break에 의해 비정상적으로 종료 -> else 실행 X
"""
for n in range(1, 10):
    for x in range(1, n):
        if n % 2 == 0:
            break
        print(x, end = ' ')
    else:
         print('*')

# 내부 루프에서 n이 짝수인 경우 : 내부 루프 탈출, else 수행 X
# 내부 루프에서 n이 홀수인 경우 : 내부 루프 완료, else 수행
"""
"""
# 소수 출력
for n in range(2, 100): # 2 ~ 99
    for x in range(2, n):
        if n % x == 0:
            # n = 3, x = 2 -> else 샐행
            # n = 4, x = 2 -> else 실행 X
            # n = 5, x = 2, 3, 4 -> else 실행
            break
    else:
        print(n, end = ' ')
"""

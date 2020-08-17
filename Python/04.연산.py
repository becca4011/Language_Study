"""
x = input("첫 번째 정수 : ")
y = input("두 번째 정수 : ")

sum = x + y

print("합 : ", sum) # 기본값은 string이므로 숫자를 더한 값이 아님


width = int(input("밑면 : "))
height = int(input("높이 : "))

area = width * height
perimeter = (width + height) * 2

print("직사각형 면적 : ", area, ", 둘레 : ", perimeter)


width = eval(input("밑면 : ")) # eval : 수식 계산 후 변환
height = eval(input("높이 : "))

area = width * height
perimeter = (width + height) * 2

print("직사각형 면적 : ", area, ", 둘레 : ", perimeter)


name = input("이름 : ")

print("입력한 이름 : ", name)
"""

"""
import turtle

t = turtle.Turtle()

# 사각형
t.circle(50)
t.circle(50, steps = 4) # steps : 몇각형 도형을 그릴지 정함

t.clear()

t.penup()
t.circle(50, extent = 45) # 45도 만큼 웅직임
t.pendown()

t.circle(50)
t.circle(50, steps = 4)

t.penup()
t.home()
t.pendown()

t.clear()

# 삼각형
t.circle(50)
t.circle(50, steps = 3)

t.clear()


t.penup()
t.circle(50, extent = 60)
t.pendown()

t.circle(50)
t.circle(50, steps = 3)

t.penup()
t.home()
t.pendown()

t.clear()

#오각형
t.penup()
t.circle(50, extent = 36)
t.pendown()

t.circle(50)
t.circle(50, steps = 5)
"""

"""
# 동시 할당문
a, b = 20 , 10
c, d = a * b, (a + b) * 2

print("c = ", c)
print("d = ", d)


print(a, b)

a, b = b, a # 두 수 교환
print(a, b)


n1, n2, n3 = eval(input("세 숫자 입력(, 로 구분) : "))

total = n1 + n2 + n3
avg = total / 3

print("합 : ", total, ", 평균 : ", avg)
"""

"""
#산술 연산
x = int(input("정수1 입력 : "))
y = int(input("정수2 입력 : "))

print(x, "+", y, "=", x + y)
print(x, "-", y, "=", x - y)
print(x,"*", y, "=", x * y)
print(x, "/", y, "=", x / y)
print(x, "//", y, "=", x // y) # 몫
print(x, "%", y, "=", x % y)
print(x, "**", y, "=", x ** y) # 지수(xⁿ)

# 나머지 연산자
sec = 1000
min = 1000 // 60
remainder = 1000 % 60
print(min, "분", remainder, "초")
"""

# 논리 연산자
age = 21
height = 161

print(age > 10 and height >= 165)


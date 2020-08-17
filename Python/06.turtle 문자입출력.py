""" Turtle 그래픽의 문자 입출력 방법 """

import turtle

t = turtle.Turtle()

"""
s = turtle.textinput("입력창", "그림 색")
t.write(s, font = ("Arial", 10, "bold")) # 폰트, 글자 크기, 글자 유형

t.write("문자를 출력합니다.")
"""

t.shape('turtle')

s = turtle.textinput("입력창", "그림 색")
t.color(s)

t.penup()
t.goto(-30, 120)
t.pendown()

t.write(s + " 원 그리기")

t.penup()
t.goto(0, 0) # t.home()도 사용 가능
t.pendown()

t.circle(50)

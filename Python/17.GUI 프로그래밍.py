""" tkinter를 이용한 GUI(Grapical  User Interface) 프로그래밍 """

# tkinter : 파이썬에서 그래픽 사용자 인터페이스(GUI)를 개발할 때 필요한 모듈

# 유닉스 계열에서 사용되던 Tcl/Tk 위에 객체 지향 계층을 입힌 것
# Tk는 John Ousterhoust에 의하여 Tcl 스크립팅 언어를 위한 GUI 확장으로 개발


""" tkinter GUI """

# tkinter를 상ㅇ하여 GUI 응용 작성

# tkinter 모듈 import
# CUI 응용 메인 윈도우 생성
# 한 개 이상의 위젯을 GUI 응용에 추가
# 이벤트 루프 진입
"""
import tkinter

top = tkinter.Tk()

# 위젯을 추가하려면 이 곳에 코드 추가

top.mainloop()
"""

""" BMI 계산 """
"""
from tkinter import * # tkinter의 모든 메소드 tkinter를 붙이지 않고 쓰겠다

top = Tk()
top.title("BMI 계산") # 윈도우 타이틀

# BMI 계산 함수
def calc():
    height = float(en1.get())
    weight = float(en2.get())
    bmi = weight / height ** 2
    lb4["text"] = str(bmi)

# label 4개 / 엔트리 2개 / 버튼 1개

# 격자모양 틀 구성
# (0,0) (0,1) (0,2)
# (1,0) (1,1) (1,2)
# (2,0) (2,1) (2,2)

# (0,0) : 키(m) 라벨 / (0,1) : 엔트리(텍스트박스) / (0,2) : BMI 라벨
# (1,0) : 몸무게(kg) 라벨 / (1,1) : 엔트리(텍스트박스) / (1,2) : 결과 출력 라벨
# (2,0) : X / (2,1) : X / (2,2) : 버튼

# label
lb1 = Label(top, text = "키(m)")
lb2 = Label(top, text = "BMI")
lb3 = Label(top, text = "몸무게(kg)")
lb4 = Label(top) # 결과 출력 (아직은 아무것도 출력 X)

# 위치 지정
lb1.grid(row = 0, column = 0)
lb2.grid(row = 0, column = 2)
lb3.grid(row = 1, column = 0)
lb4.grid(row = 1, column = 2)

# entry (텍스트박스)
en1 = Entry(top)
en2 = Entry(top)

# 위치 지정
en1.grid(row = 0, column = 1)
en2.grid(row = 1, column = 1)

# 버튼
# 버튼의 길이, 텍스트, 버튼 클릭 시 계산 수행 (calc 함수 호출)
bt1 = Button(top, width = 10, text = "계산", command = calc)
bt1.grid(row = 2, column = 2)
"""


""" tkinter 위젯 """

# 단순 위젯
# Button, Canvas, Checkbutton, Entry, Label, Message, ...

# 컨테이너 위젯 : 다른 위젯을 안에 포함할 수 있는 위젯
# Frame, Toplevel, LabelFrame, PanedWindow, ...

# Button : 버튼을 표시하기 위해 사용, 이미지 사용 가능
# Canvas : 화면에 직선, 타원, 다각형 등과 같은 모양을 그리기 위해 사용
# Checkbutton : 체크박스처럼 여러가지 값을 표시하기 위해 사용, 한 번에 여러 개 선택 가능
# Entry : 한 줄의 텍스트 값을 입력받는 필드를 표시하기 위해 사용
# Label : 다른 위젯을 위한 한 줄 제목을 제공하기 위해 사용, 이미지 사용 가능
# Listbox : 사용자가 선택 가능한 여러 개의 리스트를 제공하기 위해 사용
# Menubutton : 메뉴들을 표시하기 위해 사용
# Menu : 다양한 명령을 제공하기 위해 사용, Menubutton 내에 포함
# Message : 여러 줄의 텍스트 필드를 표시하기 위해 사용
# Radiobutton : 여러가지 값을 표시하기 위해 사용, 한 번에 한 개만 선택 가능
# Scale : 슬라이더 위젯을 제공하기 위해 사용
# Scrollbar : Listbox와 같은 위젯에 스크롤 기능을 주기 위해 사용
# Text : 여러 줄에 텍스트를 표시하기 위해 사용
# Spinbox : 고정된 수의 값들로부터 선택할 수 있는 표준 Entry 위젯의 변형

# Frame : 다른 위젯들을 구성하기 위한 컨테이너 위젯으로 사용
# Toplevel : 분리된 윈도우 컨테이너를 제공하기 위해 사용
# PanedWindow : 수직, 수평으로 배열된 여러 위젯들을 포함하는 컨테이너 위젯
# LabelFrame : 복합 윈도우 레이아웃을 위한 컨테이너 위젯


""" Label 위젯 """

# 텍스트나 이미지를 출력하기 위해 사용하는 상자현태의 도구
# 텍스트나 이미지는 필요시 수정 가능

# w = Label(master, option = value, ...)
# 첫 번째 매개변수 : 부모 윈도우(master) 내에 라벨 배치
# 두 번째 매개변수 : 다양한 옵션 (키-값 쌍으로 표현)
"""
from tkinter import *

window = Tk() # title을 주지 않으면 기본으로 tk를 title로 사용

label = Label(window, text = "Hello GUI world")
label.pack() # 차례대로 배치

window.mainloop() # 루프를 돌다가 이벤트가 발생하면 실행
"""
# <Label 옵션>
# anchor : 위젯의 공간이 넓을 때 텍스트의 위치 (default : CENTER)
# text : 위젯에 표시하기 위한 텍스트
# image : 위젯에 표시하기 위한 이미지
# width, height : 라벨의 폭, 높이를 나타내기 위한 문자 수 or 이미지 픽셀 수
# relief : 라벨의 테두리 형태 (FLAT(default), GROOVE, RAISED 등)
# borderwidth : 테두리 폭 (default : 0)
# fg : 텍스트 색
# bg : 텍스트 배경색
# font : 텍스트의 글꼴
# justify : 여러 줄의 텍스트 배치 시 문단 정렬 방법 (default : CENTER)
# padx, pady : 위젯 내의 텍스트의 좌우, 상하 공간 추가 (default : 1)
# textvariable : 클래스 StringVar의 변수, 라벨 위젯에 표시되는 텍스트

# 옵션 사용
"""
from tkinter import *

window = Tk()

# 내부에서 옵션 사용

lb = Label(window, text = "Hello GUI world!",
                   width = 20, height = 2,
                   font = '함초롬바탕 14 italic',
                   relief = RAISED)

# 외부에서 옵션 사용
lb = Label(window)
lb["text"] = "Hello GUI world!"
lb["width"] = 20
lb["height"] = 2
lb["font"] = '함초롬바탕 14 italic'
lb["relief"] = RAISED # 테두리가 입체적으로 표시

lb.pack()

window.mainloop()
"""

# 라벨에 이미지 표시
"""
from tkinter import *
top = Tk()

logo = PhotoImage(file = "logo.png")
lbImg = Label(top, image = logo).pack()

top.mainloop()
"""

# 텍스트, 이미지 같이 나타내기
"""
# 라벨 2개
from tkinter import *
top = Tk()

logo = PhotoImage(file = "logo.png")
lb1 = Label(top, image = logo).pack(side = 'left') # 이미지 위치

txt = '''A GUI is a type of user
interface that allows users
to interact with devices
in a graphical way.'''

# lb2 = Label(top, padx = 10, text = txt).pack(side = 'right') # 텍스트 위치
lb2 = Label(top, padx = 10, justify = LEFT, text = txt).pack(side = 'right') # justify = LEFT : 텍스트 왼쪽정렬

top.mainloop()
"""
"""
# 라벨 1개 (compound 옵션 사용 / 이미지, 텍스트 겹쳐서 출력)
from tkinter import *
top = Tk()

logo = PhotoImage(file = "logo.png")

txt = '''A GUI is a type of user
interface that allows users
to interact with devices
in a graphical way.'''

lb = Label(top, padx = 10,
           compound = CENTER,
           text = txt,
           image = logo).pack(side = 'right')

top.mainloop()
"""


""" Button 위젯 """

# w = Button(master, option = value, ...)

# <Button 옵션>
# command : 버튼이 클릭될 때 호출되는 함수 or 메소드
# text : 위젯에 표시하기 위한 텍스트
# image : 위젯에 표시하기 위한 이미지
"""
from tkinter import *
top = Tk()

bt = Button(top, text = "클릭하세요!")
bt.pack()

top.mainloop()
"""
"""
from tkinter import *
top = Tk()

click = PhotoImage(file = 'logo.png')
bt = Button(top, image = click, text = "클릭하세요!", compound = LEFT)
bt.pack()

top.mainloop()
"""

# 클릭 시, 어떠한 동작을 수행하도록 함
# command 옵션 사용 - callback 함수
"""
from tkinter import *
top = Tk()

def ft():
    print("클릭했습니다.") # 버튼을 클릭했을 때 내용 출력

bt = Button(top, text = "클릭하세요!", command = ft)
bt.pack()

top.mainloop()
"""


""" Entry 위젯 """

# 사용자로부터 한 줄의 문자열 입력 시 사용
# w = Entry(parent, option, ...)
"""
from tkinter import *

top = Tk()
top.title("앤트리")

ent = Entry(top)
ent.pack()

top.mainloop()
"""

# 라벨 & 엔트리 표시
"""
from tkinter import *
top = Tk()

lb = Label(top, text = "User Name").pack(side = LEFT)
en = Entry(top, show = '*').pack(side = RIGHT) # show = '*' : 입력 내용 숨김(비번처럼)

top.mainloop()
"""

# <데이터 입출력을 위한 메소드>
# delete(fst, lst) : 위젯의 fst 위치부터 lst 위치 앞 까지의 문자열 지움
#                    lst 없으면 fst 위치의 한 문자만 지움
# get() : 현재 엔트리 내의 텍스트를 문자열로 반환
# insert(index, s) : index 위치의 문자 앞에 문자 s 삽입

# 메소드 get() 활용
"""
from tkinter import *
top = Tk()

def showName():
    print("User Name :", en.get()) # 엔트리에 입력한 값을 가져와서 출력

lb = Label(top, text = "User Name").grid(row = 0)
en = Entry(top)
en.grid(row = 0, column = 1)

bt1 = Button(top, text = 'Show', command = showName)
bt2 = Button(top, text = 'Quit', command = top.quit)
bt1.grid(row = 1, column = 0)
bt2.grid(row = 1, column = 1)

top.mainloop()
"""


""" Text 위젯 """

# 여러 줄의 문자열을 입력할 경우 사용
"""
from tkinter import *
top = Tk()

txt = Text(top, height = 5, width = 60)
txt.insert(END, "텍스트 위젯은 여러 줄의\n텍스트를 표시할 수 있다.") # END(아무것도 없을 때 0)부터 내용을 집어넣음
txt.pack()

mainloop()
"""


""" Checkbutton """

# 사용자가 클릭해서 체크된 상태(on), 체크되지 않은 상태(off) 중의 하나로 만들 수 있는
# 여러 개의 토글 버튼으로 이루어진 위젯
"""
from tkinter import *

top = Tk()
top.title("체크버튼")

def varState():
    print('varl :', v1.get())
    print('var2 :', v2.get())
    print('var3 :', v3.get())

lb = Label(top, text = "선호하는 프로그래밍 언어 모두 선택 : ")
lb.pack(padx = 10)

v1 = IntVar()
v2 = IntVar()
v3 = IntVar()

cb1 = Checkbutton(top, text = "Python", variable = v1)
cb2 = Checkbutton(top, text = "Java", variable = v2)
cb3 = Checkbutton(top, text = "C++", variable = v3)
cb1.pack(padx = 10, anchor = W) # W(west) : 가장 왼쪽에 배치
cb2.pack(padx = 10, anchor = W)
cb3.pack(padx = 10, anchor = W)

bt = Button(top, text = 'Show', command = varState)
bt.pack()

top.mainloop()
"""


""" Radidbutton """

# 하나의 그룹 안에서는 한 개의 버튼만 선택 가능
"""
from tkinter import *

w = Tk()
w.title("라디오버튼")

def show():
    choice = str(v.get()) + '언어 선택함'
    lb2.config(text = choice)

v = StringVar() # StringVar() 때문에 처음 시작할 때 모두 선택된 것처럼 보임

lb1 = Label(w, text = "가장 선호하는 프로그래밍 언어 선택")
lb2 = Label(w)
lb1.pack(padx = 10)

rb1 = Radiobutton(w, text = 'Python', variable = v, value = 'Python', command = show)
rb2 = Radiobutton(w, text = 'Java', variable = v, value = 'Java', command = show)
rb3 = Radiobutton(w, text = 'C++', variable = v, value = 'C++', command = show)

rb1.pack(padx = 20, anchor = W)
rb2.pack(padx = 20, anchor = W)
rb3.pack(padx = 20, anchor = W)

lb2.pack()

mainloop()
"""


""" 배치 관리자 """

# 압축(pack) 배치 관리자
# 격자(grid) 배치 관리자
# 위치(place) 배치 관리자

""" 압축 배치 관리자 """

"""
from tkinter import *

w = Tk()

b1 = Button(w, text = "버튼 1")
b2 = Button(w, text = "버튼 2")
b2.pack() # pack()이 사용된 차례로 배치
b1.pack()

w.mainloop()
"""

# 버튼 배치 맞추기 (fill = X 옵션 / 부모 위젯(window)의 크기에 버튼을 맞춤)
"""
from tkinter import *

w = Tk()

Button(w, text = 'Python').pack(fill = X)
Button(w, text = 'C++').pack(fill = X)
Button(w, text = 'Visual Basic').pack(fill = X)

mainloop()
"""

# 패딩 옵션
"""
from tkinter import *

w = Tk()

Button(w, text = 'Python').pack(fill = X, padx = 10) # 좌우 10px씩 띄움
Button(w, text = 'C++').pack(fill = X, padx = 10)
Button(w, text = 'Visual Basic').pack(fill = X, padx = 10)

mainloop()
"""

# side 옵션 (버튼 가로로 배치)
"""
from tkinter import *

w = Tk()

b1 = Button(w, text = "버튼 1")
b2 = Button(w, text = "버튼 2")
b1.pack(side = LEFT, padx = 10)
b2.pack(side = LEFT, padx = 10)

w.mainloop()
"""
"""
from tkinter import *

w = Tk()

Button(w, text = 'Python').pack(padx = 10, pady = 5, side = LEFT) # 좌우 10px씩 띄움
Button(w, text = 'C++').pack(padx = 10, pady = 5, side = LEFT)
Button(w, text = 'Visual Basic').pack(padx = 10, pady = 5, side = LEFT)

mainloop()
"""

# 버튼 텍스트 변경
"""
from tkinter import *

w = Tk()

b1 = Button(w, text = "버튼 1")
b2 = Button(w, text = "버튼 2")
b1.pack(side = LEFT, padx = 10)
b2.pack(side = LEFT, padx = 10)

b1["text"] = "One"
b2["text"] = "Two"

w.mainloop()
"""
"""
# side = BOTTOM (default : TOP)

from tkinter import *

w = Tk()

Button(w, text = 'Visual Basic').pack(side = BOTTOM)
Button(w, text = 'Python').pack(side = LEFT)
Button(w, text = 'C++').pack(side = LEFT)

w.mainloop()
"""


""" 격자 배치 관리자 """
"""
from tkinter import *

w = Tk()
w.title("grid")

l1 = Label(w, text = "화씨")
l2 = Label(w, text = "섭씨")
l1.grid(row = 0, column = 0)
l2.grid(row = 1, column = 0)

e1 = Entry(w)
e2 = Entry(w)
e1.grid(row = 0, column = 1)
e2.grid(row = 1, column = 1)

b1 = Button(w, text = "화씨 -> 섭씨")
b2 = Button(w, text = "섭씨 -> 화씨")
b1.grid(row = 2, column = 0)
b2.grid(row = 2, column = 1, sticky = W) # W(west / 왼쪽)에 배치

w.mainloop()
"""
"""
from tkinter import *

w = Tk()

Button(w, text = "r0, c0", width = 10).grid(row = 0, column = 0)
Button(w, text = "r0, c1", width = 10).grid(row = 0, column = 1)
Button(w, text = "r0, c2", width = 10).grid(row = 0, column = 2)
Button(w, text = "r1, c0", width = 10).grid(row = 1, column = 0)
Button(w, text = "r1, c1", width = 10).grid(row = 1, column = 1)
Button(w, text = "r1, c2", width = 10).grid(row = 1, column = 2)

w.mainloop()
"""

# rowspan, columnspan 옵션
"""
from tkinter import *

w = Tk()

bt0 = Button(w, text = 'r0', width = 20)
Button(w, text = "r1, c0", width = 10).grid(row = 1, column = 0)
Button(w, text = "r1, c1", width = 10).grid(row = 1, column = 1)
Button(w, text = "r2, c0", width = 10).grid(row = 2, column = 0)
Button(w, text = "r2, c1", width = 10).grid(row = 2, column = 1)
bt0.grid(row = 0, column = 0, columnspan = 2) # column 확장

w.mainloop()
"""
"""
from tkinter import *

w = Tk()

bt0 = Button(w, text = 'c0', width = 10, height = 3)
Button(w, text = "r0, c1", width = 10).grid(row = 0, column = 1)
Button(w, text = "r1, c1", width = 10).grid(row = 1, column = 1)
Button(w, text = "r2, c0", width = 10).grid(row = 2, column = 0)
Button(w, text = "r2, c1", width = 10).grid(row = 2, column = 1)
bt0.grid(row = 0, column = 0, rowspan = 2) # row 확장

w.mainloop()
"""
"""
from tkinter import *

w = Tk()

lbls = [['1', '2', '3'],
        ['4', '5', '6'],
        ['7', '8', '9'],
        ['*', '0', '#']]

for r in range(4):
    for c in range(3):
        lbl = Label(w, relief = RAISED, padx = 10, text = lbls[r][c])
        lbl.grid(row = r, column = c)

w.mainloop()
"""

""" 연습문제 """
"""
from tkinter import *

w = Tk()

Button(w, text = "위쪽", width = 10).grid(row = 0, column = 0, columnspan = 2)
Button(w, text = "왼쪽", width = 10).grid(row = 1, column = 0)
Button(w, text = "오른쪽", width = 10).grid(row = 1, column = 1)
Button(w, text = "아래쪽", width = 10).grid(row = 2, column = 0, columnspan = 2)

w.mainloop()
"""
"""
from tkinter import *

w = Tk()

week = ['Sun', 'Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat']


for i in range(7):
    Label(w, padx = 10, pady = 5, text = week[i]).grid(row = 0, column = i)

for i in range(4):
    for j in range(7):
        Label(w, padx = 10, pady = 5, text = str(j)).grid(row = i + 1, column = j)
        

w.mainloop()
"""


""" 이벤트 기반 프로그래밍 """

# tkinter 프로그램은 이벤트에 기반을 두고 동작
# 각 위젯에 대해, callback 함수나 bind() 메소드를 통해 이벤트 처리


""" 버튼 이벤트 처리 """

# Shell 윈도우에 텍스트 출력
"""
from tkinter import *

top = Tk()

def ft():
    print("클릭")

bt = Button(top, text = "클릭하기", command = ft)
bt.pack()

top.mainloop()
"""

# 라벨에 텍스트 출력
"""
from tkinter import *

top = Tk()

def ft():
    lb["text"] = "클릭"

lb = Label(top)
lb.pack()

bt = Button(top, text = "클릭하기", command = ft)
bt.pack()

top.mainloop()
"""

# 예제
"""
from tkinter import *

top = Tk()
top.title("스톱 워치")

cnt = 0

def StopWatch():
    if running:
        global cnt
        cnt += 1
        lbl.config(text = str(cnt))
    top.after(1000, StopWatch) # 1000ms(1000밀리세컨드 / 1초)에 한 번씩 StopWatch를 호출

def start():
    global running
    running = True # 스톱워치 시작

def stop():
    global running
    running = False # 스톱워치 멈춤

def reset():
    global cnt
    cnt = 0 # 0초로 초기화
    lbl.config(text = str(cnt))

lbl = Label(top, font = ("함초롬바탕", 20), fg = "red")
lbl.pack()

running = False
StopWatch()

btn1 = Button(top, text = 'Start', width = 25, command = start).pack() # start 함수 호출
btn2 = Button(top, text = 'Stop', width = 25, command = stop).pack() # stop 함수 호출
btn3 = Button(top, text = 'Reset', width = 25, command = reset).pack() # reset 함수 호출

top.mainloop()
"""


""" 라디오 버튼 이벤트 처리 """

# 예제
"""
from tkinter import *

window = Tk()
window.title("라디오 버튼")

ch = IntVar()

def Choice():
    s = ch.get()

    if s == 1:
        img = PhotoImage(file = "dog.png")
    elif s == 2:
        img = PhotoImage(file = "cat.png")
    elif s == 3:
        img = PhotoImage(file = "rabbit.png")
    elif s == 4:
        img = PhotoImage(file = "bird.png")

    lb2 = Label(fr, image = img)
    lb2.image = img
    lb2.grid(row = 0, column = 1, rowspan = 10)

lb1 = Label(window, text = "가장 선호하는 동물을 고르시오")
lb1.pack()

fr = Frame(window)
fr.pack(side = LEFT)

rb1 = Radiobutton(fr, text = "개", variable = ch, value = 1, command = Choice)
rb2 = Radiobutton(fr, text = "고양이", variable = ch, value = 2, command = Choice)
rb3 = Radiobutton(fr, text = "토끼", variable = ch, value = 3, command = Choice)
rb4 = Radiobutton(fr, text = "새", variable = ch, value = 4, command = Choice)
rb1.grid(row = 0, column = 0, sticky = W)
rb2.grid(row = 1, column = 0, sticky = W)
rb3.grid(row = 2, column = 0, sticky = W)
rb4.grid(row = 3, column = 0, sticky = W)

window.mainloop()
"""


""" 엔트리 위젯과 이벤트 """

# 예제
"""
from tkinter import *

top = Tk()
top.title("BMI 계산")

def calc():
    height = float(en1.get())
    weight = float(en2.get())
    bmi = weight / height ** 2

    en1.delete(0, END) # 입력한 값을 지움
    en2.delete(0, END)
    en3.insert(0, bmi) # BMI 출력

lb1 = Label(top, text = "키(m)")
lb2 = Label(top, text = "BMI")
lb3 = Label(top, text = "몸무게(kg)")
lb1.grid(row = 0, column = 0)
lb2.grid(row = 0, column = 2)
lb3.grid(row = 1, column = 0)

en1 = Entry(top)
en2 = Entry(top)
en3 = Entry(top)
en1.grid(row = 0, column = 1)
en2.grid(row = 1, column = 1)
en3.grid(row = 1, column = 2)

bt1 = Button(top, width = 10, text = "계산", command = calc)
bt1.grid(row = 2, column = 2)

top.mainloop()
"""

# 엔트리 위젯의 메소드

# get() : 엔트리 내의 문자열 반환
# insert(index, text) : 엔트리의 주어진 위치로 텍스트 입력
# delete(from, to) : 엔트리에서 from ~ to까지 위치해있는 문자열 삭세


""" 색상 """

# bg : 배경
# fg : 전경
# bg, fg로 위젯 및 텍스트 색상 지정
"""
from tkinter import *

w = Tk()

bt = Button(w, text = "클릭하기", fg = "white", bg = "coral") # fg : 텍스트 색 / bg : 버튼 색
bt.pack()
"""
"""
from tkinter import *

w = Tk()

bt = Button(w, text = "클릭하기")
bt.pack()

bt["fg"] = "white"
bt["bg"] = "coral"
"""


""" 폰트 """

# 튜플 지정 : (폰트이름, 폰트 크기, 폰트 스타일)
# 문자열 지정 : lb = Label(w, text = "함초롬바탕", font = "함초롬바탕 16")



""" 예제 프로그램 """
"""
from tkinter import *

w = Tk()

def Fahrenheit():
    f = (float(en1.get()) - 32) * 5 / 9
    en2.delete(0, END)
    en2.insert(0, f)

def Celsius():
    c = (float(en2.get()) * 9 / 5) + 32
    en1.delete(0, END)
    en1.insert(0, c)

lb1 = Label(w, text = "화씨")
lb2 = Label(w, text = "섭씨")
lb1.grid(row = 0, column = 0)
lb2.grid(row = 1, column = 0)

en1 = Entry(w)
en2 = Entry(w)
en1.grid(row = 0, column = 1)
en2.grid(row = 1, column = 1)

bt1 = Button(w, text = "화씨 -> 섭씨", command = Fahrenheit)
bt2 = Button(w, text = "섭씨 -> 화씨", command = Celsius)
bt1.grid(row = 2, column = 0)
bt2.grid(row = 2, column = 1)

w.mainloop()
"""
"""
from tkinter import *
import random

w = Tk()

lbuser = Label(w, text = "사용자")
lbcom = Label(w, text = "컴퓨터")
lbaw = Label(w, text = ">>>>>", font = "함초롬바탕 30")
lbwl = Label(w, text = "승패", font = "함초롬바탕 30", fg = "blue")

lbuser.grid(row = 1, column = 0)
lbcom.grid(row = 1, column = 2)
lbaw.grid(row = 0, column = 1)
lbwl.grid(row = 2, column = 1)

bt1 = Button(w, text = "가위", width = 20, bg = "yellow")
bt2 = Button(w, text = "바위", width = 20, bg = "yellow")
bt3 = Button(w, text = "보", width = 20, bg = "yellow")

bt1.grid(row = 3, column = 0)
bt2.grid(row = 3, column = 1)
bt3.grid(row = 3, column = 2)

w.mainloop()
"""


""" 이벤트 처리 - bind() """


""" 마우스 이벤트 처리 """
"""
from tkinter import *

top = Tk()
top.title("이벤트 처리")

def mleft(event): # 왼쪽 클릭
    print(event.x, event.y, "에서 마우스 클릭")

def mright(event): # 오른쪽 클릭
    print("Right Button, 끝내기")
    import sys;
    sys.exit()

fr = Frame(top, width = 240, height = 100)
fr.bind("<Button-1>", mleft)
fr.bind("<Button-3>", mright)
fr.pack()

top.mainloop()
"""

""" 이벤트 지정자 """

# <Button-1> : 마우스 버튼 1이 Button 위젯 위에서 클릭될 때 (마우스 왼쪽 클릭)
# <B1-Motion> : 마우스 버튼 1이 눌려진 채로 움직일 때
# <ButtonRelease-1> : 마우스 버튼 1에서 손을 땔 때
# <Double-Button-1> : 마우스 버튼 1이 더블 클릭될 때
# <Enter> : 마우스 포인터가 위젯으로 진입하였을 때
# <Leave> : 마우스 포인터가 위젯을 떠났을 때
# <FocusIn> : 키보드 포커스가 현재의 위젯으로 이동
# <FocusOut> : 키보드 포커스가 다른 위젯으로 이동
# <Return> : 사용자가 엔터키 입력
# <Key> : 사용자가 어떤 키라도 누를 때
# a : 사용자가 a(지정한 문자)를 입력하였을 때
# <Shift-Up> : 쉬프트 키를 누른 상태로 위쪽 화살표 키를 누를 때
# <Configure> : 위젯의 크기를 변경하였을 때

# 마우스 이번트 처리
"""
from tkinter import *

def sleft(event):
    print("단일 클릭, 횐쪽 버튼")

def dleft(event):
    print("더블 클릭, 왼쪽 버튼")

bt = Button(None, text = "마우스 클릭")
bt.pack()

bt.bind('<Button-1>', sleft)
bt.bind('<Double-1>', dleft)
"""

# 키보드 이벤트 처리
"""
from tkinter import *

top = Tk()

def key(event):
    print(event.char, "가 눌렸습니다.")

def mouse(event):
    frm.focus_set()
    print("<마우스로 프레임의 포커스 설정함>")

frm = Frame(top, width = 10, height = 100)
frm.pack()

frm.bind("<Key>", key)
frm.bind("<Button-1>", mouse)

top.mainloop()
"""

# 마우스 모션 이벤트 처리
"""
from tkinter import *

top = Tk()

def motion(event):
    print("Mouse position : (", event.x, event.y, ")")
    return

st = '''마우스를 움직이면 마우스의 위치를 출력한다.'''

msg = Message(top, text = st)
msg.config(bg = 'lightgreen', font = ('함초롬바탕', 18))
msg.pack()

msg.bind('<Motion>', motion)

mainloop()
"""

# 예제
"""
from tkinter import *

def calc(event):
    lb.configure(text = "결과 : " + str(eval(ent.get()))) # eval : ent.get()으로 얻은 수식의 결과

top = Tk()

Label(top, text = "파이썬 수식 입력").pack()

ent = Entry(top)
ent.bind("<Return>", calc) # 엔터 키를 눌렀을 때 calc함수 호출
ent.pack()

lb = Label(top, text = "결과 :")
lb.pack()

top.mainloop()
"""


""" 캔버스 위젯 """

# tkinter에서 그림을 그리려면 캔버스(canvas) 위젯 필요
# canvas 위젯을 사용하면 많은 그래픽 기능 사용 가능


# 자유 곡선 그리기
"""
from tkinter import *

top = Tk()

oldx, oldy = 0, 0

def begin(event):
    global oldx, oldy
    oldx, oldy = event.x, event.y

def draw(event):
    global oldx, oldy, cnvs
    newx, newy = event.x, event.y
    cnvs.create_line(oldx, oldy, newx, newy) # 이전 위치와 새로운 위치를 선으로 이음
    oldx, oldy = newx, newy

cnvs = Canvas(top, height = 100, width = 150)
cnvs.pack()

cnvs.bind('<Button-1>', begin)
cnvs.bind('<Button1-Motion>', draw)

mainloop()
"""

""" 캔버스 항목 """

# 호 (arc)
# 비트맵 (bitmap, 내장 파일 or XBM 파일 형식)
# 이미지 (image, BitmapImage or PhotoImage 객체)
# 직선 (line)
# 타원 (oval, 원 or 타원)
# 다각형 (polygon)
# 사각형 (rectangle)
# 텍스트 (text)
# 윈도우 (window)


# 호 그리기
"""
from tkinter import *

top = Tk()

cnvs = Canvas(top, width = 300, height = 200)
cnvs.pack()
cnvs.create_arc(10, 10, 200, 150, extent = 90, style = ARC)
# (10, 10) 위치에서 (200, 150) 사각형 안의 원의 호를 90도(extent = 90)만큼 그려라

top.mainloop()
"""
"""
from tkinter import *

top = Tk()

cnvs = Canvas(top, width = 300, height = 200)
cnvs.pack()
cnvs.create_arc(10, 10, 200, 150, extent = 110, style = PIESLICE)
# (10, 10) 위치에서 (200, 150) 사각형 안의 원의 호를 파이조각처럼, 110도 만큼 그려라

top.mainloop()
"""
"""
from tkinter import *

top = Tk()

cnvs = Canvas(top, width = 300, height = 200)
cnvs.pack()
cnvs.create_arc(10, 10, 200, 150, extent = 90, style = CHORD)
# (10, 10) 위치에서 (200, 150) 사각형 안의 원의 호를 90도만큼 그리고, 양 끝의 점을 이어라

top.mainloop()
"""

# 타원 그리기
"""
from tkinter import *

top = Tk()

cnvs = Canvas(top, width = 300, height = 200)
cnvs.pack()
cnvs.create_oval(10, 10, 200, 150)

top.mainloop()
"""

# 사각형 그리기
"""
from tkinter import *

top = Tk()

cnvs = Canvas(top, width = 300, height = 200)
cnvs.pack()
cnvs.create_rectangle(10, 10, 200, 150)

top.mainloop()
"""

# 다각형 그리기
"""
from tkinter import *

top = Tk()

cnvs = Canvas(top, width = 300, height = 200)
cnvs.pack()
cnvs.create_polygon(10, 10, 150, 110, 250, 20, fill = "blue") # (10, 10), (150, 110), (250, 20)의 점을 가지고 다각형 그림 (삼각형 나옴)

top.mainloop()
"""

# 텍스트 그리기
"""
from tkinter import *

top = Tk()

cnvs = Canvas(top, width = 300, height = 200)
cnvs.pack()
cnvs.create_text(100, 50, text = "텍스트 (text)") # (100, 50)은 텍스트의 가운데, 지정한 좌표는 텍스트의 정가운데에 위치함
cnvs.create_text(100, 100, text = 'X')

top.mainloop()
"""

# 이미지 그리기
"""
from tkinter import *

top = Tk()

cnvs = Canvas(top, width = 700, height = 700)
cnvs.pack()

img = PhotoImage(file = "flower.png")
cnvs.create_image(300, 300, anchor = NW, image = img)
cnvs.create_image(300, 300, image = img)

top.mainloop()
"""

# 타원을 이용한 애니메이션
"""
from tkinter import *
from random import *
import time

top = Tk()

cnvs = Canvas(top, width = 300, height = 200)
cnvs.pack()

ball = cnvs.create_oval(140, 90, 160, 110, fill = "white")

for i in range(100): # 100번 움직임
    x = randint(-10, 10)
    y = randint(-10, 10)
    cnvs.move(ball, x, y)
    top.update()
    time.sleep(0.1)

top.mainloop()
"""

# 캔버스 위젯과 이벤트
"""
from tkinter import *

top = Tk()
top.title("Oval을 이용한 그림판")

penC = "blue"

def paint(event):
    x1, y1 = (event.x - 1), (event.y - 1)
    x2, y2 = (event.x + 1), (event.y + 1)
    cnvs.create_oval(x1, y1, x2, y2, outline = penC, fill = penC)

def redColor():
    global penC
    penC = "red"

def greenColor():
    global penC
    penC = "green"

def blueColor():
    global penC
    penC = "blue"

cnvs = Canvas(top, width = 500, height = 150)
cnvs.pack()
cnvs.bind("<B1-Motion>", paint)

bt1 = Button(top, text = "빨간색", command = redColor)
bt2 = Button(top, text = "초록색", command = greenColor)
bt3 = Button(top, text = "파란색", command = blueColor)
bt1.pack(side = LEFT, ipadx = 50)
bt2.pack(side = LEFT, ipadx = 50)
bt3.pack(side = LEFT, ipadx = 50)

top.mainloop()
"""

# 예제

from tkinter import *

w = Tk()
w.title("체크버튼")

ch1 = IntVar()
ch2 = IntVar()
ch3 = IntVar()

def CreateRect():
    if ch1.get() == 1:
        global rect
        rect = cnv.create_rectangle(10, 10, 300, 150)
    else:
        cnv.delete(rect)
        
def CreateOval():
    if ch2.get() == 1:
        global oval
        oval = cnv.create_oval(10, 10, 300, 150)
    else:
        cnv.delete(oval)

def CreateLine():
    if ch3.get() == 1:
        global line
        line = cnv.create_line(10, 10, 300, 150)
    else:
        cnv.delete(line)

cnv = Canvas(w, width = 400, height = 200, bg = "white")
cnv.pack(anchor = N)

cb1 = Checkbutton(w, text = "직사각형", variable = ch1, command = CreateRect)
cb2 = Checkbutton(w, text = "타 원", variable = ch2, command = CreateOval)
cb3 = Checkbutton(w, text = "직 선", variable = ch3, command = CreateLine)
cb1.pack(side = LEFT)
cb2.pack(side = LEFT)
cb3.pack(side = LEFT)

w.mainloop()

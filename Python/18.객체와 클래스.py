""" 객체 지향 프로그래밍 """

# 객체(object) : 함수와 변수를 하나의 단위로 묶을 수 있는 방법

# 객체지향(object-oriented) 프로그래밍
# 우리가 살고 있는 실제 세계가 객체들로 구성되어 있는 것과 비슷하게, 소프트웨어도 객체로 구성하는 방법

# 객체는 상태와 동작을 가지고 있음
# 객체의 상태(state) : 객체의 속성(attribute)
# 객체의 동작(action) : 객체가 취할 수 있는 동작(method)


""" 객체 """

# 파이썬에서는 모든 데이터가 객체

# 객체의 타입은 클래스에 의해 정의
# - 문자열에 대한 클래스 : str
# - 정수에 대한 클래스 : int
# - 실수에 대한 클래스 : float
# - 리스트에 대한 클래스 : list
"""
s = "Python"
print(type(s))

n = 3
print(type(n))

f = 3.14
print(type(f))

li = [1, 2, 3]
print(type(li))
"""

""" 클래스 정의 """

# 객체에 대한 설계도 : 클래스(class)
# 클래스로부터 만들어지는 각각의 객체를 그 클래스의 인스턴스(instance)라고 함


""" 클래스 정의와 객체 생성 """

# 클래스의 몸체에 pass 문장만 있는 경우
# 두 개의 객체 생성
"""
class Emp:
    pass

x = Emp()
y = Emp()

print(x == y) # 객체 x와 y는 서로 다른 객체
"""

""" 클래스 속성 """

# 일반적으로 속성은 클래스 내부에서 정의
# 존재하는 객체에서 동적으로 속성 생성 가능
"""
class Emp:
    pass

x = Emp() # 상속
y = Emp() # 상속

# 속성 동적 생성
x.name = 'James'
x.age = 37

print('Name :', x.name, '\nAge :', x.age)
print('x.__dict__ :', x.__dict__) # __dict__ : 각 객체가 가지고 있는 사전형 속성과 값
print('y.__dict__ :', y.__dict__)
"""

# 객체는 속성 공유
"""
class Emp:
    pass

x = Emp()
y = Emp()

# dept : 속성
Emp.dept = 'Research' # 클래스 이름으로 속성 설정 : 속성 공유
print('xDept :', x.dept, '\tyDept :', y.dept)

x.dept = 'Accounting' # 객체에서 동적으로 속성 생성
print('xDept :', x.dept, '\tclassDept :', Emp.dept) # x의 속성은 'Accounting'(상속X), y의 속성은 'Research'(상속)

Emp.dept = 'Sales' # 클래스 속성 공유
print('xDept :', x.dept, '\tyDept :', y.dept) # x의 속성은 'Accounting'(상속X), y의 속성은 'Sales'(상속)

print('x.__dict__ :', x.__dict__) # x는 'Accounting'를 가지고 있음
print('y.__dict__ :', y.__dict__) # y는 속성을 가지고 있지 않음
"""

""" 객체 속성 연결 """

# 객체에 속성을 설정하는 것은 파이썬의 특징
# 함수 type : <class 'function'>
# 함수명에도 속성 설정 가능
"""
def f(x):
    return 42

f.x = 47

print(type(f))
print(f(5)) # f() : 함수 호출
print(f.x) # f.x : 함수명의 속성 값
"""

""" 클래스 메소드 """

# 객체를 인수로 하는 함수 intro() 정의
"""
def intro(emp):
    print('My name is', emp.name, '!')

class Emp:
    pass

a = Emp()
a.name = 'John'
intro(a) # 함수 intro()에서 객체 a를 인수로 전달받고, 그 객체의 인스턴스 변수인 속성 name 출력
"""

# 함수 intro()를 클래스 속성인 myIntro에 연결
"""
def intro(emp):
    print('My name is', emp.name, '!')

class Emp:
    myIntro = intro # intro() 함수를 연결

a = Emp()
a.name = 'John'
Emp.myIntro(a) # myIntro = intro
"""

# 함수를 클래스 내부에서 정의 : 메소드
"""
class Emp:
    def myIntro(self): # self를 이용하여 객체 이름 전달
        print('My name is', self.name, '!')

a = Emp()
a.name = 'John'
a.myIntro()
"""

# 클래스를 정의할 때 객체의 동작을 정의하는 메소드 사용
"""
class ClassName:
    def Method1(self, ...):
        ...

    def Method2(self, ...):
        ...
"""

""" 메소드 정의 및 활용 """
"""
class Emp:
    def restart(self):
        self.bonus = 0

    def sale(self):
        self.bonus += 10

a = Emp()
a.name = 'James'

a.restart() # bonus = 0
a.sale() # bonus = 10
print(a.name + '의 보너스는', a.bonus)
"""

""" 클래스 예제 """
"""
class Counter:
    def reset(self):
        self.count = 0

    def increment(self):
        self.count += 1

    def get(self):
        return self.count

a = Counter() # 객체 a 생성

a.reset() # count = 0
a.increment() # count = 1

print('카운터 a의 값은', a.get()) # count 출력
"""

""" 생성자 (constructor) """

# 생성자 : 객체가 생성될 때 객체를 기본값으로 초기화하는 특수한 메소드
# __init__() 메소드를 사용하여 초기화

"""
class Emp:
    def __init__(self):
        print('__init__ 실행')

a = Emp()
"""

# __init__() 메소드 추가
"""
class Emp:
    empTotal = 0
    
    def __init__(self, name, bonus = 100): # 객체가 만들어지면 무조건 실행됨
        self.name = name
        self.bonus = self.base = bonus
        Emp.empTotal += 1
    
    def restart(self):
        self.bonus = self.base
        
    def sale(self):
        self.bonus += 10

a = Emp('Peter', 50)
b = Emp('Austin')

a.sale() # Peter의 bonus가 10 증가

print(a.name + '의 보너스 :', a.bonus)
print(b.name + '의 보너스 :', b.bonus)
print('총 직원 수 :', Emp.empTotal)
"""

""" __str__() 메소드 """
"""
class Emp:
    empCnt = 0

    def __init__(self, name, bonus = 100):
        self.name = name
        self.bonus = self.base = bonus
        Emp.empCnt += 1

    def __str__(self): # 객체를 print()로 출력할 때 자동적으로 호출
        return '이름 : ' + self.name + ' / 보너스 : ' + str(self.bonus)
    
    def restart(self):
        self.bonus = self.base
        
    def sale(self):
        self.bonus += 10

a = Emp('Peter', 50)
a.sale()

print(a)
"""

""" 정보 은닉 """

# 클래스 외부에서 클래스 내부의 내용을 볼 수 없도록 함
"""
class Emp:
    empCnt = 0

    def __init__(self, name, bonus = 100):
        self.name = name
        self.bonus = bonus

a = Emp('Peter')
a.bonus = 150 # 클래스 외부에서 클래스 내부 변수를 마음대로 변경 가능

print(a.bonus)
"""

# private 변수를 이용하여 외부로부터 차단
# 변수 앞에 __ 붙여서 사용
"""
class Emp:
    empCnt = 0

    def __init__(self, name, bonus = 100):
        self.name = name # public
        self.__bonus = bonus # private

a = Emp('Peter')

print('이름 :', a.name)
# print('보너스 :', a.__bonus) # 오류 발생
"""

""" 접근자와 설정자 """

# private 속성인 __bonus는 접근 불가
# 클래스 외부에서 private 변수를 사용하려면 그 값을 반환하는 메소드를 제공해야 함

# 접근자 (getters) : 인스턴스 변수값을 반환
# 설정자 (setters) : 인스턴스 변수값을 설정
"""
class Emp:
    empCnt = 0

    def __init__(self, name, bonus = 100):
        self.__name = name
        self.__bonus = self.__base = bonus
        Emp.empCnt += 1
    
    def restart(self):
        self.__bonus = self.__base
        
    def sale(self):
        self.__bonus += 10

    def getName(self):
        return self.__name

    def getBonus(self):
        return self.__bonus

a = Emp('Peter', 50)
a.sale()

print('이름 :', a.getName(), end = ' / ')
print('보너스 :', a.getBonus())
"""


""" 연습문제 """

class Rectangle:
    def __init__(self, width = 1, height = 1):
        self.__width = width;
        self.__height = height;

    def getArea(self):
        return self.__width * self.__height

    def getPerimeter(self):
        return (self.__width + self.__height) * 2

rect = Rectangle(10, 20)

print("사각형 둘레 :", rect.getPerimeter(), " / 사각형 넓이 :", rect.getArea())

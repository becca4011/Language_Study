""" 순서형 자료구조 """

# 리스트(list) : 여러 개의 데이터가 저장되어 있는 장소, []
# lst = [1, 3, 7, 9]

# 튜플(tuple) : 리스트와 유사한 순서형 구조, ()
# tup = (1, 2, 3, 4, 5)

# 집합(set) : 수학의 집합 개념과 동일, {}
# st = {1, 2, 4}

# 사전(dict) : 키와 값의 쌍으로 저장, {}
# dic = {1 : 'one', 2 : 'two', 4 : 'four'}


""" 튜플 """

# 리스트의 내용을 변경할 필요가 없을 때 사용
# 변경 불가능한 자료형 (추가, 삭제, 변경 X)
# () 사용

# 콤마(,)로 구분된 값을 나열
# 나열값을 () 사이에 배치
# () 생략 가능
"""
tup1 = ("eng", "math", 1982, 2020)
tup2 = (1, 4, 9, 16, 25)
tup3 = 'a','b', 'x', 'y', 'z'

print(tup1)
print(tup2)
print(tup3)


tup4 = () # 빈 튜플
print('tup4 :', tup4)


tup5 = (33) # 정수
tup6 = (33,) # 튜플

print('tup5 :', tup5, type(tup5))
print('tup6 :', tup6, type(tup6))

tup7 = 'hello' # 문자열
tup8 = 'hello', # 튜플

print('tup7 :', tup7, type(tup7))
print('tup8 :', tup8, type(tup8))


tup9 = tuple([1, 2, 3, 4])
tup10 = tuple('Python')

print('tup9 :', tup9)
print('tup10 :', tup10)


tup11 = (19001, 'Tom', 'A')
num, name, grade = tup11

print(name, grade, num)
"""
"""
#정사각형 넓이, 둘레를 튜플로 반환
def square(length):
    area = length * length
    circum = 4 * length
    return (area, circum)

radius = int(input("한 변의 길이 : "))
tupVal = square(radius)

print("넓이 :", tupVal[0], ", 둘레 :", tupVal[1])
"""

""" 튜플 연산 """

# len((1, 2, 3)) : 튜플의 길이
# 3 in (l, 2, 3) : 튜플 내에 3이 존재하는가?
# (1, 2, 3) + (10, 20) : (1, 2, 3, 10, 20) 두 튜플을 연결
# ('Ha!',) * 3 : 'Ha!'를 3번 반복

"""
tup1 =(1, 4, 9, 16, 25)
tup2 = 'a', 'b', 'x', 'y', 'z'

x = tup1[3]

print('tup1[3] :', x)
print('tup2[:3] :', tup2[:3])
"""

# cmp(t1, t2) : 두 튜플의 원소 비교
# len(t) : 튜플 t의 길이 (원소 개수)
# min(t) : 튜플 t의 가장 작은 원소
# max(t) : 튜플 t의 가장 큰 원소
# tuple(seq) : 리스트나 문자열 등을 튜플로 변환

"""
tup1 = (1, 4, 9, 16, 25)
tup1 = 'a', 'b', 'c' # 기존의 튜플에 새로운 튜플 할당은 가능
print(tup1)

del tup1 # 튜플 전체를 지움
print(tup1) # 튜플이 지워져 오류 발생
"""
"""
var1 = (1, 4, 9, 16, 25)
var2 = 'x', 'y', 'z'

var1 = var1 + var2
print(var1)


var3 = (1, 4, 9, 16, 25)
var4 = 'x', 'y', 'z'

var3 = var3, var4
print(var3)


var5 = (1, 4, 9, 16)
var6 = (4, 16, 1, 9)

print(var5 == var6)
print(var5 < var6)


var7 = ('Hello') * 3
var8 = ('Hello',) * 3

print(var7)
print(var8)
"""

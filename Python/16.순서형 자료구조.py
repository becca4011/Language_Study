""" 집합 (set) """

# 수학의 집합에 ㅗ산한 모든 속성 가짐
# 준서 없이 저장, 중복 허용 X
# 수학의 집합연산과 같은 방법으로 표기
# {} 사용
"""
st1 = {"eng", "math", 1982, 2020}
st2 = {1, 1, 2, 3, 5} # 중복된 것은 하나만 저장, 나머지는 제거

print(st1)
print(st2)
"""

# 빈 집합
"""
st3 = {}
print('st3 :', st3, type(st3)) # type이 dict가 됨
st3.add(11) # dict에는 add 연산이 없음 (오류)
"""
"""
st3 = set() # 빈 집합 생성
print('st3 :', st3, type(st3)) # type는 set

st3.add(11) # 집합에 11 추가
print('st3 :', st3) # 11이 추가된 집합 출력
"""

# 리스트, 튜플, 문자열을 집합으로 변환
"""
st4 = set([1, 2, 3, 4])
st5 = set('abracadabra') # 중복된 것은 하나만 출력, 나머지 제거

print('st4 :', st4)
print('st5 :', st5)
"""

""" 집합 연산 """

# 집합에서는 순서 의미 X

# len({1, 1, 2, 3}) : 집합의 길이 / 결과 - 3 (중복 제거)
# 3 in {1, 2, 3} : 3이 집합 안에 있는가? / 결과 - True
# sum{1, 2, 10} : 집합의 원소를 모두 더함 / 결과 - 13
# {1, 2, 3} == {2, 3, 1} : 두 집합이 같은가? / 결과 - True (순서 상관X)

# 비교연산
"""
st6 = {1, 2, 3, 4, 5, 6}
st7 = {1, 3, 5}

print(st6 > st7) # st6에 st7의 원소가 모두 포함되어 있으면 True
"""

# 합집합, 교집합, 차집합
"""
sa = {1, 3, 5}
sb = {1, 2, 4}

print(sa & sb) # 교집합
print(sa.union(sb)) # 합집합
print(sa - sb) # 차집합
"""


""" 집합 삭제 """

# 집합 내의 원소를 지우는 메소드

# discard() : 지우려는 원소가 있으면 삭제, 없으면 아무 일도 없음
# remove() : 지우려는 원소가 있으면 삭제, 없으면 에러
"""
st = {'a', 'b', 'c'}

st.discard('a')
print(st)

st.discard('k') # 아무 일 없음
print(st)

st.remove('b')
print(st)

st.remove('k') # error
print(st)
"""

""" 집합 예제 """
"""
c = input("문자열 입력 : ") # c = abracadabra
st = set(c) # st = {'a', 'b', 'r', 'c', 'd'}

for k in st:
    i = 0
    for n in c:
        if k == n:
            i += 1

    print(k, ":", i, "회") # 문자의 개수 출력 ('a'일 경우, a : 5회)
"""
"""
stmt = '''Time is
 Too Slow for those who Wait
 Too Swift for those who Fear
 Too Long for those who Grieve
 Too Short for those who Rejoice
 But for those who love
 Time is not'''

print('문장:\n', stmt)

words = set()

wordList = stmt.split() # 빈칸을 중심으로 나누는 것

for word in wordList:
    words.add(word.lower()) # word를 소문자로 바꾸어 집합에 넣음

print('\n단어 수 :', len(words))
print(words)
"""


""" 사전 (dict) """

# 사전형 데이터 사용

# 키(key)와 값(value) 쌍으로 저장
# 키를 사용하여 값을 호출
# 키와 값을 콜론(:)으로 연결하여 한 쌍으로 함
# 여러 개의 키는 콤마(,)로 구분
# 전체는 {}로 감싸서 만듦

"""
grade = {"eng": 87, "math": 98} # key : eng, math / value : 87, 98
dcEmpty = {}

print(grade, type(grade))
print(dcEmpty)
"""

# 함수 dict()로 사전 생성 가능
# 키-값 쌍의 리스트나 파라미터 형태로부터 사전 생성

"""
phone = dict([("부산", 51), ("서울", 2)]) # 0을 맨 앞에 붙이면 에러
empno = dict(Tom = 4221, Jack = 3345)

print(phone)
print(empno)
"""

# for문 활용
# 임의의 키, 값을 나타내는 수식으로 사전 생성

"""
numSquare = {x: x ** 2 for x in (3, 5, 7)}
# 3: 3 ** 2(= 9)
# 5: 5 ** 2(= 25)
# 7: 7 ** 2(= 49)
print(numSquare)
"""

""" 사전 검색 """

# dictName[key] : 키에 대한 값 검색
"""
grade = {"eng": 87, "math": 98}

print(grade["math"])
print(grade["sci"]) # 키가 존재하지 않으면 KeyError 오류 발생
"""

""" 사전 추가 """

# dictName[key] = value
"""
grade = {"eng": 87, "math": 98}

grade["sci"] = 95
print(grade)

grade[94] = "sci" # 어떤 타입이 key, value가 되어도 오류 X
print(grade)
"""

""" 사전 갱신 """
"""
grade = {"eng": 87, "math": 98, "sci": 95}

grade["sci"] = 94 # 이 key가 없으면 추가, key와 value가 있다면 value 갱신
print(grade)
"""

""" 사전 삭제 """

# del dictName[key] : key와 value값 삭제(항목 하나 삭제)
"""
grade = {"eng": 87, "math": 98, "sci": 95}

del grade["math"] # 삭제
print(grade)
"""
# clear() 메소드 : 모든 항목 삭제 (전부 지워지는 것 X, 기억 공간에는 남아있음)
"""
grade = {"eng": 87, "math": 98, "sci": 95}

grade.clear()
print(grade)
"""

# 사전 전부 삭제 (기억 공간에 있는 것까지 삭제)
"""
grade = {"eng": 87, "math": 98, "sci": 95}

del grade # 사전 전부 삭제
print(grade) # 전부 삭제하여 오류 (grade가 정의되지 않음)
"""

""" 사전 연산 """

# 기본 연산
# len({"eng": 87, "math": 98}) : 사전 길이(원소 개수) / 결과 - 2
# "eng" in {"eng": 87, "math": 98} : "eng"란 key가 사전 안에 있는가? / 결과 - True
# {1: "o", 2: "t"} == {2: "t", 1: "o"} : 두 사전이 같은가? / 결과 - True (같은 항목이 존재하면 True)

# 사전 객체의 메소드
# dct.clear() : 사전 dct의 모든 항목 제거
# dct.copy() : 사전 dct의 복사본 반환
# dct.keys() : 사전 dct의 key들의 리스트 반환
# dct.values() : 사전 dct의 value들의 리스트 반환
# dct.items() : 사전 dct의 (key, value)쌍 튜플들의 리스트 반환
# dct.update(dct2) : 사전 dct2의 항목들을 사전 dct에 추가
# dct.get(key) : 사전 dct의 key에 대한 value 반환
# dct.pop(key) : 사전 dct의 key에 대한 value를 반한하고 항목 제거
"""
grade = {"eng": 87, "math": 98}

print("key :", grade.keys())
print("value :", tuple(grade.values())) # 리스트 -> 튜플

for k, v in grade.items(): # [("eng", 87), ("math", 98)] -> 1번째 : k = "eng", v = 87 / 2번째 : k = "math", v = 98
    print(k, v)

grd2 = {"kor": 87, "sci": 95}

grade.update(grd2)
print(grade)
"""



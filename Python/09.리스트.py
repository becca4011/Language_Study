""" 리스트 """

# 여러 개의 자료들을 모아서 하나의 묶음으로 저장하는 것
# 가변(언제든지 변할 수 있는) 길이
# [] 안에 , 로 구분

slist = ['영어', '수학', '과학']

print(type(slist))
print(slist[0], slist[1], slist[2])


""" 리스트 생성 """

list1 = [] # 빈 리스트
list2 = [1, 4, 9] # 초기값을 가지는 리스트
list3 = [1, 7.5, 'math'] # 다른 타입의 데이터 저장 가능


""" 리스트 연산 """

# x가 lst의 원소이면 True
lst = [1, 2, 3]
x = 1

print(x in lst)

# x가 lst의 원소이면 False
lst = [1, 2, 3]
x = 4

print(x not in lst)

# lst1과 lst2의 연결
lst1 = ['a', 'b', 'c']
lst2 = [1, 2, 3]

print(lst1 + lst2)

# lst를 n번 복제하여 연결
lst = [1, 2, 3]

print(lst * 2)

# lst에서 첨자 i 위치의 원소
lst = [1, 2, 3, 4, 5 ,6]

print(lst[4])

# lst의 길이 (원소의 개수)
lst = [1, 2, 3, 4, 5, 6]

print(len(lst))

# lst의 가장 작은 원소
lst = ['k', 'j', 'u', 'z']

print(min(lst))

# lst의 가장 큰 원소
lst = ['k', 'j', 'u', 'z']

print(max(lst))

# lst의 원소 합 (str형은 X)
lst = [10, 21, 3, 18, 33]

print(sum(lst))


""" 슬라이싱 연산자 """

# [start:end]를 사용하여 범위 표시
# start ~ end -1 까지

num = [6, 4, 12, 5, 9]
#      0  1  2   3  4

print(num[2:4]) # num[2] ~ num[3]
print(num[:2]) # num[0] ~ num[1]
print(num[3:]) # num[3] ~ num[4]


""" 리스트 원소 값 변경 가능 (문자열은 불가) """

letter = ['a', 'b', 'c', 'd', 'e', 'f']
print(letter)

letter[0] = 'AA'
print(letter)

letter[2:5] = ['C', 'D', 'E']
print(letter)


""" 리스트 원소 값 삭제 가능 """

letter = ['a', 'b', 'c', 'd', 'e', 'f']
print(letter)

letter[2:5] = [] # 부분 삭제
print(letter)

letter[:] = [] # 전체 삭제
print(letter)


""" 중첩 리스트 """

# 리스트가 다른 리스트의 원소가 될 수 있음
# 2차원 배열 의미

m = ['a', 'b', 'c']
n = [1, 2, 3]

x = [m, n]

print(x)
print(x[0])
print(x[0][0])
print(x[1][0])


""" 리스트 메소드 """

# lst의 끝에 원소 x를 추가
lst = [1, 2]

lst.append(3)
print(lst)

# lst에 나타난 원소 x의 개수를 반환
lst = [1, 2, 3, 1, 1]

print(lst.count(1)) # 1이 몇 개가 있는가?

# lst에 나타난 원소 x의 첫 첨자를 반환
lst = [1, 2, 3]
x = 2

print(lst.index(x))

# 원소 x를 lst의 n 위치에 추가
lst = [1, 2, 3, 4, 5, 7]
x = 6

lst.insert(5, x) # lst[5] 자리에 6을 넣음
print(lst)

# lst에서 n위치의 원소를 삭제하고 반환
lst = [1, 3, 4, 5]

print(lst.pop(2)) # lst[2] 자리의 원소 삭제
print(lst)

# lst의 마지막 원소를 삭제하고 반환
lst = [1, 2, 4, 5]

print(lst.pop())
print(lst)

# lst에서 처음 나타나는 원소 x를 삭제
lst = [2, 4, 5, 1, 6, 3, 1, 1]

lst.remove(1)
print(lst)

# lst의 원소 순서를 역순으로 바꿈
lst = [1, 2, 3, 4]

lst.reverse()
print(lst)

# lst의 원소들을 오름차순으로 정렬
lst = [2, 4, 5, 1, 6, 3, 1, 1]

lst.sort()
print(lst)


""" 리스트에 항목을 동적으로 추가 """

# 공백 리스트를 생성한 후, append로 리스트에 값을 추가

list = []

list.append(100)
list.append(200)
list.append(300)

print(list)

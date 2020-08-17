""" 문자열 """

c = 123
print(type(c))

c = 123.5
print(type(c))

c = "happy"
print(type(c))

print("\n")


""" 문자열 비교 """

t = "hello"

print("c == t : ", c == t)
print("c != t : ", c != t)

print("c < t : ", c < t)
print("c > t : ", c > t)

print("\n")


""" 문자열 연결 """

print("happy" "hello") # 2개 이상의 연속 문자열은 자동 합성
print(c + "hello") # 문자열 변수와 문자열 연결은 + 를 사용해야 함(없으면 에러)
print("c + t : ", c + t)
print("c + ' ' + t : ", c + ' ' + t)

print("\n")


""" 100과 "100"의 차이 """

# 정수
a = 100
b = 200

# 문자열
x = '100'
y = '200'

print("100 + 200 = ", a + b)
print("'100' + '200' = ", x + y)

print("\n")


""" 문자열 + 숫자 """

# print("오늘은 " + 17 + "일째") 오류 발생(string과 int를 합칠 수 없어서)
print("오늘은 " + str(17) + "일째") # int형을 string형으로 변환
print("오늘은 %s일째"%17) # ,가 아닌 %를 사용


# ord() 함수, chr() 함수

# C언어에서는 문자와 숫자를 더할 수 있음
# ch = 'A' + 1
# printf("%c", ch)

# Python은 ord(), chr을 사용해 문자와 숫자를 더할 수 있음
# ord() : 문자에 대한 ASCII 코드 값을 정수로 반환
# chr() : 정수의 코드 값을 문자로 반환

ch = chr(ord('A') + 1)
print(ch)

print("\n")

# 예제

word = input("영어 소문자 3자 입력 : ")
print(word + " ==> " + chr(ord(word[0]) - 32) + word[1] + word[2])

print("\n")


""" 문자열 반복 """

print('K' * 5)
print('happy ' * 3)
print(20 * '-')

print("\n")


""" 문자열 연산 """

c1 = "happy"

# x in s : x가 s의 부분 문자열이면 참, 아니면 거짓
print('s' in c1)
print('pp' in c1)

# x not in s : x가 s의 부분 문자열이면 거짓, 아니면 참
print('s' not in c1)
print('pp' not in c1)

# s + t : 문자열 s와 문자열 t의 연결
# s * n, n * s : s를 n번 복제하여 연결(n은 양의 정수)

# s[i] : 문자열 s에서 첨자 i위치의 문
print(c1[0])

# len(s) : 문자열 s의 길이
print(len(c1))

print("\n")


""" 첨자 연산사 [] """

c2 = "python"

#  p  y  t  h  o  n
#  0  1  2  3  4  5 (0 ~ n - 1)
# -6 -5 -4 -3 -2 -1 (-1 ~ -n)

# 범위 벗어나면 오류
# c2[2] = 'T'는 허용하지 않음(문자열 내용 변경 불가)

print(c2[0])
print(c2[5])

print(c2[-1])
print(c2[-2])

print("\n")


""" 슬라이싱 연산자 [start:end] """

# [start:end]를 사용하여 범위 표시
# 결과 : start ~ end - 1까지의 부분 문자열
# 범위 벗어나도 허용됨

print(c2[1:4]) # 1~3까지(yth)
print(c2[0:2]) # 0~1까지(py)

print(c2[:3]) # 0~2까지(pyt)
print(c2[4:]) # 4~5까지(on)
print(c2[-3:]) # -3(3)~5까지(hon)

print(c2[4:12]) # 4~5까지(on)
print(c2[12:]) # 아무것도 출력 안됨(범위를 벗어나서)

print("\n")


""" 큰따옴표 안에 큰따옴표를 사용하면 문법적 오류 """

# print("모두 "안녕" 이라 말했다") X
# print('모두 "안녕" 이라 말했다') O (' "..." ')
# print("모두 '안녕' 이라 말했다") O (" '...' ")
# print("모두 \"안녕\" 이라 말했다") O (" \"...\" ")

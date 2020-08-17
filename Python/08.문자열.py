""" 문자열 메소드 """

address = 'Seoul, Korea' # 문자열형 데이터

print(address)
print(address.upper()) # upper() 함수 : 전용함수(메소드)


""" 문자열 검사 """

# s 내에 숫자나 알파벳 문자만 있으면 True
s = 'a1b2'
print(s.isalnum())

s = 'Happy New Year' # 공백 있으면 False
print(s.isalnum())

# s 내에 알파벳 문자만 있으면 True
s = 'ab'
print(s.isalpha())

# s 내에 숫자만 있으면 True
s = '12'
print(s.isdigit())

# s가 파이썬 식별자(변수로 사용 가능)이면 True
s = '_1st'
print(s.isidentifier())

s = '1st' # 숫자가 처음에 올 수 없음
print(s.isidentifier())

# s 내의 알파벳이 모두 소문자면 True
s = 'ab'
print(s.islower())

# s 내의 알파벳이 모두 대문자면 True
s = 'AB'
print(s.isupper())

# s가 모두 공백문자면 True
s = '  '
print(s.isspace())


""" 부분 문자열(substring) 검사 """

# s가 부분 문자열 s1으로 끝나면 True
s = 'abcdef'
s1 = 'ef'

print(s.endswith(s1))

# s가 부분 문자열 s1으로 시작하면 True
s = 'abcdef'
s1 = 'abc'

print(s.startswith(s1))

# s 내에 있는 첫 s1의 인덱스(위치), 없으면 error
s = 'abcdef'
s1 = 'c'

print(s.index(s1))


# s 내에 있는 첫 s1의 첨자, 없으면 -1
s = 'adsded'
s1 = 'd'

print(s.find(s1))

# s 내에 있는 마지막 s1의 인덱스, 없으면 -1
s = 'adsded'
s1 = 'd'

print(s.rfind(s1))

# s 내에 있는 s1의 빈도 수
s = 'adsded'
s1 = 'd'

print(s.count(s1))

# 에제
address = 'Seoul, Korea'
# Seoul, Korea
# 01234567891011

print(address.count('o'))
print(address.count('o', 5)) # 5 ~ 끝까지 검사 (, Korea)
print(address.count('o', 5, 10)) # 5 ~ 10까지 검사 (, Kore)


em = 'emergency system'
print(em.count('em')) # 'em'ergency syst'em'


""" 문자열 변환 """

# s의 첫 문자만 대문자로 바꿈
s = 'apple'
print(s.capitalize())

# s의 모든 문자를 소문자로
s = 'AppLe'
print(s.lower())

# s의 모든 문자를 대문자로
s = 'AppLe'
print(s.upper())

# s의 각 단어의 첫 문자를 대문자로 (나머지는 소문자로)
s = 'APPLE grape'
print(s.title())

# s의 소문자는 대문자로, 대문자는 소문자로
s = 'AppLe'
print(s.swapcase())

# s의 부분 문자열 old를 new로 대체
s = 'Apple Grape'
print(s.replace('Grape', 'Melon')) # s.replace(old, new)

s = 'mississippi'
print(s.replace('s', 'S', 2)) # 마지막 숫자(2)는 그 숫자의 개수만큼만 바꾸라는 의미

# 문자열의 양쪽을 잘라냄
s = '    abc    '
print(s.strip())

s = 'www.example.com'
print(s.strip('cmowz.')) # www. / .com 지워짐 (example은 cmowz.에 포함되지 않기 때문)

# 문자열의 왼쪽을 잘라냄 (-> 방향)
s = '    abc    '
print(s.lstrip())

s = 'www.example.com'
print(s.lstrip('cmowz.')) # c, m, o, w, z, . 중 하나라도 있으면 지움 (e가 없어서 뒤는 지워지지 않음)

# 문자열의 오른쪽을 잘라냄 (<- 방향)
s = '    abc    '
print(s.rstrip())

s = 'www.example.com'
print(s.rstrip('cmowz.')) # .com만 지워짐 (e가 없어서 다음은 안지워짐)


""" 문자열 분리 """

# 문자열 s1을 기준으로 분리
s = 'Seoul, Korea'
s1 = ','

print(s.split(s1)) # list형 데이터 구조 []

# 문자열 s1을 중심으로 3부분으로 분리
s = 'Seoul, Korea'
s1 = ','

print(s.partition(s1)) # tuple형 데이터 구조 ()

# 예재

s = 'Beautiful Sunday'

print(s.split('u')) # u를 없애고 4조각으로 나눔
print(s.partition('u')) # u를 중심으로 3조각으로 나눔

print(s.split('ful'))
print(s.partition('ful'))

print(s.split('k')) # 나누지 않음
print(s.partition('k')) # null 문자로 이루어진 3조각으로 나눔

print(s.split()) # 공백을 기준으로 나눔
# print(s.partition()) 아무것도 주지 않으면 오류 발생

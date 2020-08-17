""" 파일의 필요성 """

# 데이터 입력 시 : 표준 입력인 input() 명령 사용
# - 프로그램 실행 시 마다 사용자가 데이터 직접 입력

# 결과 출력 시 : 표준 출력인 print() 명령 사용
# - 모니터에 출력되는 결과는 프로그램 종료시 사라짐

# 미리 저장된 파일로부터 데이터를 읽고, 결과를 파일로 저장


""" 파일 처리 과정 """

# 1. 파일을 연다.
# 2. 파일에서 데이터를 읽거나 쓴다.
# 3. 파일과 관련된 작업이 모두 종료되면 파일을 닫는다.

"""
f = open(filename, mode)
readData = f.read()
f.close()
"""


""" 파일 열가 (open) """

"""
파일로부터 데이터를 읽거나, 파일에 데이터를 쓰기 위해서는
open() 함수를 사용하여 파일을 여는 작업을 먼저 해야 함

파일 열기는 파일 객체를 생성하는 것

생성된 파일 객체를 파일 변수(fp)에 할당

파일 열기의 기본 문법
- fp = open(filename, mode)
"""

""" 파일 모드 """

# 'r' (read) : 읽기 전용 / 파일 포인터는 파일의 처음에 위치 / default 모드
# 'r+' : 읽기, 쓰기 용도 / 파일 포인터는 파일의 처음에 위치
# 'w' (write) : 쓰기 전용 / 파일 존재 시, overwrite / 없으면 쓰기용 새 파일 생성
# 'w+' : 읽기, 쓰기 용도 / 파일 존재 시, overwrite / 없으면 새 파일 생성
# 'a' (append) : 추가 전용 / 파일 포인터는 파일의 끝에 위치
# 'a+' : 읽기, 쓰기 용도 / 파일 포인터는 파일의 끝에 위치


""" 파일 객체 """

# 파일 객체 속성
# fp.closed : 파일이 닫혀있다면, True 반환
# fp.mode : 열려있는 파일의 모드 반환
# fp.name : 파일의 이름 반환
"""
fp = open('foo.txt', 'w')

print('Name :', fp.name)
print('Mode :', fp.mode)
print('Closed :', fp.closed)
"""

""" 파일 읽기 """

# <read() 메소드>
# 열린 파일로부터 모든 데이터 읽고, 하나의 문자열로 반환
"""
fp = open('song.txt', 'r')

print('<< song.txt 전부 읽기 >>')

rfile = fp.read()
print(rfile)

print('<< song.txt 부분 읽기 [37:50] >>')
print(rfile[37:50]) # 37 ~ 50까지의 13개 문자 출력

fp.close()
"""

# <read(n) 메소드>
# - n개의 문자를 읽고 문자열로 반환
# - 다음 읽기를 위해 파일 포인터의 위치를 읽은 다음의 위치 설정
"""
fp = open('song.txt', 'r')

print('<< song.txt 일부 읽기 >>')

c15 = fp.read(15) # 15개의 문자 읽기
print(c15)

print('<< song.txt 계속 읽기 >>')
next = fp.read() # 다음부터 쭉 읽기
print(next)

fp.close()
"""

# <readline() 메소드>
# - 파일로부터 '\n'으로 끝나는 한 줄씩만 읽음
"""
fp = open('song.txt', 'r')

line1 = fp.readline()
line2 = fp.readline()

print('<< song.txt 한 줄씩 읽기 >>')
print(line1)
print(line2)

fp.close()
"""

# <readlines() 메소드>
# - 파일로부터 모든 줄을 읽고, 각 줄의 문자열을 항목으로 하는 list로 반환
"""
fp = open('song.txt', 'r')

lines = fp.readlines()
print(lines)

fp.close()
"""

# 복수행 처리 - <readlines() 메소드>
# - list의 각 항목을 나타내기 위해 인덱스 사용
"""
fp = open('song.txt', 'r')

lines = fp.readlines()

print(lines[0]) # '\n'까지 포함되어 있어 출력할 때 한 줄씩 띄어져 있음
print(lines[2])

fp.close()
"""

# open() 함수
# - 존재하지 않는 파일에 대해 읽기 모드로 함수 open() 시행 시, FileNotFoundError 오류 발생
# - 읽기 모드로 함수 open() 시행하기 위해서는 있는 파일로만 해야 함
"""
fp = open('song1.txt', 'r') # 오류

fp.close()
"""

# <한 줄씩 읽기>
# for 문을 이용하여 모든 줄 읽음
# - 한 번에 한 줄씩 처리함
# - rstrip() 이용 -> 줄바꿈 문자(\n) 잘라냄
"""
fp = open('song.txt', 'r')

for line  in fp:
    st = line.rstrip()
    print(st)

fp.close()
"""

# <with 키워드>
# - close() 명령 필요 X
"""
with open('song.txt', 'r') as fp: # with를 사용할 때, as를 사용하여 fp(file point)를 줌
    rfile = fp.read()
    print(rfile)

print('Closed :', fp.closed) # 끝나는 순간 close를 함
"""


""" 파일 쓰기 """

# <write() 메소드>
# - 파일에 문자열을 씀 (w)
# - 문자열 출력 시 한 줄의 끝마다 \n 추가해야 함
"""
fp = open('song1.txt', 'w')

n = fp.write('Yesterday once more\nDust in the wind\n')
print(n, '문자 writing')

fp.close()
"""


""" 파일 추가 """

# <write() 메소드>
# - 기존 파일에 문자열을 추가할 때, 추가 모드 (a) 사용함
"""
fp = open('song1.txt', 'a')

fp.write('Yesterday\nWithout you\n')

fp.close()
"""


""" 파일 활용 """

# <split() 함수> : 문장을 단어 list로 분리
# - 파일로부터 모든 문자열을 읽어서 단어의 리스트로 분할
"""
ifp = open('song.txt', 'r') # 읽기
ofp = open('songWord.txt', 'a') # 추가

for fline in ifp:
    line = fline.strip() # 한 줄을 가져옴
    wordList = line.split() # 문장을 단어 list로 분리

    for word in wordList:
        ofp.write(word + '\n') # songWord.txt에 한 단어씩 추가 후 줄바꿈

ifp.close()
ofp.close()
"""

""" 예제 """
"""
fname = input("파일명 입력 : ")
fp = open(fname, 'r')

line = 0

for stLine in fp:
    line += 1
    print('\n<<< line', line, '>>>', stLine.strip())
    st = set(stLine) # 집합

    for k in st:
        if k == ' ' or k == '\n':
            continue
        
        i = 0

        # 문자의 개수
        for n in stLine:
            if k == n:
                i += 1
                
        print(k + ':' + str(i), end = '; ')

    print()

fp.close()
"""

""" 연습문제 """
"""
ifp = open('student.txt', 'r')
ofp = open('average.txt', 'a')

for fline in ifp:
    line = fline.strip()
    avgList = line.split()

    avg = (((int)(avgList[1]) + (int)(avgList[2]) + (int)(avgList[3])) / 3)
    ofp.write(avgList[0] + ' ' + str(avg) + '\n')

ifp.close()
ofp.close()
"""

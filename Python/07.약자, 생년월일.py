""" 약자 만들기 """

"""
word1 = input("첫 번째 단어 : ")
word2 = input("두 번째 단어 : ")
word3 = input("세 번째 단어 : ")

acronym = word1[0] + word2[0] + word3[0]

print(acronym)
"""


""" 생년월일 출력 """

birth = input("생년월일 6자리 입력 : ")

year = birth[:2]
month = birth[2:4]
day = birth[4:]

print("당신의 출생일은 " + year + "년 " + month + "월 " + day + "일")

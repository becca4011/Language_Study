print(2+2)

num = 235
s = 0

while num > 1:
    d = num % 10
    s = s + d
    num = num // d
    
    print(d, s, num)
    
print(s)

n = 10
sol = 0
i = 1

while i <= n:
    if i % 2 == 0:
        sol = sol + i
    i = i + 1
    
print(sol)
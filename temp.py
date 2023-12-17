ss = input("날짜(연/월/일) 입력 -->")

ssList = ss.split('/')

print("입력한 날짜의 3개월 10일 후 ==> ", end ='')

y = int(ssList[0])
m = int(ssList[1]) + 3
d = int(ssList[2]) + 10

if(m >= 12):
    m -= 12
    y += 1

if(d >= 30):
    d -= 30
    m += 1
print(str(y) + "년", end = '')    
print(str(m) + "월", end = '')
print(str(d) + "일", end = '')

print()
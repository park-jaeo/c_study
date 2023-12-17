aa = []
hap = 0
i = 0

while i < 4 : 
    aa.append(0)
    # str함수는 정수를 문자열로 바꿔주는 함수이다.
    aa[i] = int(input(str(i+1) + "번째 숫자 : "))
    hap += aa[i]
    i+=1


print("합계 : %d" % hap)

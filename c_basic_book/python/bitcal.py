## 변수 선언 부분 ##
num3, num1, num2, answer = 0,0,0,0

num1 = int(input(" *** 첫 번째 숫자를 입력하세요 : "))
num2 = int(input(" *** 마지막 숫자를 입력하세요 : "))
num3 = int(input(" *** 증분 값을 입력하세요 : "))
for i in range(num1, num2+1, num3) :
    answer = answer + i
print("%d + ... + %d는 %d 입니다. " % (num1, num2, answer))


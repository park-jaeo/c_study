tt1 = (10,20,30)
print(tt1)

tt2 = 10,20,30; 
print(tt2)
 # 튜플은 소괄호 생략 가능

tt3 = (10)
print(tt3)

tt4 = 10
print(tt4)

tt5 = (10,) 
print(tt5)

tt6 = 10, 
print(tt6)

# tt[시작값 : 끝값 + 1]
#쉼표가 없으면 튜플이 아니다.

tt1 = (10,20,30,40)
print(tt1[0])
print(tt1[0] + tt1[1] + tt1[2])

print(tt1[1:3])
print(tt1[1:])
print(tt1[:3])

myTuple = (10,20,30)
myList = list(myTuple)
myList.append(40)
myTuple = tuple(myList)
print(myTuple)
print("")

tt1 = (10,20,30,40)
tt2 = ('A', 'B')

print(tt1+tt2)
print(tt2 * 3)



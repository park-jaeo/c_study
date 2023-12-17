aa = []
bb = []
value = 0

for i in range(0,200):
    aa.append(value)
    value+= 3
    
    
for i in range(0,200):
    bb.append(aa[-(i+1)])

# bb[] 배열을 앞에서부터 저장하는데,
# aa[] 배열을 뒤에서부터 참조한다.



print("bb[95 : 100] 출력 : ")
print(bb[95 : 100])
print("")

print("bb[195 :] 출력 : ")
print(bb[195 :])
print("")

print("bb[ : 5] 출력 : ")
print(bb[ : 5])
print("")

# 리스트의 덧셈 / 곱셈
aa = [10,20,30]
bb= [40,50,60]
print("리스트의 덧셈", aa + bb)
print("")

print("리스트의 곱셈", aa * 3)
print("")

# 리스트의 표현
# aa[ 시작점 : 끝점 : 증감값 ]
aa = [10,20,30,40,50,60,70]
print("리스트의 표현", aa[::2], aa[::-2],aa[::-1], sep = '\n')
print("")

# 리스트 값의 변경(리스트의 표현 활용)
aa = [10,20,30]
aa[1:2] = [2,3]
print(aa)
print("")

# 2번째 요소 변경
aa = [10,20,30]
aa[1] = [200,201]
print(aa)
print("")

# 2번째 요소 삭제
aa = [10,20,30]
del(aa[1])
print(aa)
print("")

# 리스트 모든 요소 삭제
aa = [10,20,30,40,50]
aa[1:4] = []
print(aa)
print("")

# 리스트 자체 삭제
aa = [10,20,30]; aa = []; aa # []
aa = [10,20,30]; aa = None; aa # aa 정보 없음
aa = [10,20,30]; del(aa); aa # 오류 발생


dic1 = {1:'a' , 2:'b' , 3 : 'c'}
print(dic1)

dic2 = {'a' : 1 , 'b' : 2 , 'c' : 3}
print(dic2)

# 키와 값은 사용자가 지정하는 것이고, 규정은 없다.
# 딕셔너리에는 순서가 없어, 생성한 순서대로 
# 딕셔너리가 구성되어 있다는 보장은 없다.

student1 = {'학번' : 1000, '이름' : '홍길동', '학과' : '컴퓨터학과'}
print(student1)

# key - value 형태를 딕셔너리에 추가하고 싶으면 다음 형식을 사용
student1['연락처'] = '010-1111-2222'
print(student1)

#수정
student1['학과'] = '파이썬학과'
print(student1)

#제거
del(student1['학과'])
print(student1)

# 키는 마지막 걸로 적용된다.
student1 = {'학번' : 1000, '이름' : '홍길동', '학과' : '컴퓨터학과', '학번' : 2000}
print(student1)

# 키로 값에 접근
student1['학번']
student1['이름']
student1['학과']

#키로 값에 접근
student1.get('이름')
# student1['주소'] -> 오류!
student1.get('별명') # 오류x

# 모든 키값 출력
print(student1.keys())

# 튜플 형태로 출력
items = student1.items()
print(items)

singer = {}

singer['이름'] = '트와이스'
singer['구성원 수'] = 9
singer['데뷔'] = '서바이벌 식스틴'
singer['대표곡'] = 'SIGNAL'

for k in singer.keys():
    print('%s --> %s' % (k, singer[k]))


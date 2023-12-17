list1 = []
list2 = []
value = 0
for i in range(0,4):
    for k in range(0,5):
        list1.append(value)
        value +=3
    #append에 값이 아니라 리스트를 넣으면 이중 리스트가 생성된다.
    list2.append(list1)
    list1 = []
    

for i in range(0,4):
    for k in range(0,5):
        print("%3d" % list2[i][k], end = ' ')
    print("")
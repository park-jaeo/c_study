myList = [30,20,10]
print("mylist : %s" % myList)

myList.append(40)
print("mylist.append(40) : %s" % myList)

myList.pop()
print("mylist.pop() : %s" % myList)

myList.sort()
print("mylist.sort() : %s" % myList)

myList.reverse()
print("mylist.reverse() : %s" % myList)

myList.index(20)
print("mylist.index(20) : %s" % myList)

myList.insert(2,222)
print("mylist.insert(2,222) : %s" % myList)

myList.remove(222)
print("mylist.remove(222) : %s" % myList)

myList.extend([77,88,77])
print("mylist.extend([77,88,77]) : %s" % myList)

print("77값의 개수 : %s" % myList.count(77))


newList = sorted(myList)
print("mylist.sort() : %s" % myList)
print("newList.sort() : %s" % newList)

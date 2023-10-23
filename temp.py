class Unit:
    def __init__(self, name, hp, damage): # 3개의 전달값
        self.name = name # 멤버변수 name
        self.hp = hp # 멤버변수 hp
        self.damage = damage # 멤버변수 damage
        print("{0} 유닛이 생성되었습니다.".format(self.name))
        print("체력 {0}, 공격력 {1}".format(self.hp, self.damage))
     
wraith1 = Unit("레이스", 80, 5)
print("유닛 이름 : {0}, 공격력 : {1}".format(wraith1.name, wraith1.damage))

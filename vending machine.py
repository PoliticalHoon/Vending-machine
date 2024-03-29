P = int(input("상품 가격:"))
H = int(input("투입 액수:"))
J = H-P
F = J//1000
Fr = J%1000
F2 = Fr//500
F2r= Fr % 500
F3 = F2r//100
F3r = F2r%100
F4 = F3r//50
F4r = F3r % 50
print("천원은 {0}개.".format(F))
print("오백원은 {0}개.".format(F2))
print("백원은 {0}개.".format(F3))
print("오십원은 {0}개.".format(F4))

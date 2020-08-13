import math as m

xy1 = [float(n) for n in input().split()]
xy2 = [float(n) for n in input().split()]

d = m.sqrt((xy2[0]-xy1[0])**2 + (xy2[1]-xy1[1])**2)

print("{:.4f}".format(d))
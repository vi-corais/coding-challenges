# -*- coding: utf-8 -*-

point_1 = input().split()
point_2 = input().split()

x1 = float(point_1[0])
y1 = float(point_1[1])

x2 = float(point_2[0])
y2 = float(point_2[1])

distance = ((x2 - x1)**2 + (y2 - y1)**2)**(1/2)

print(f"{distance:.4f}")

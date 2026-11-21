# -*- coding: utf-8 -*-

hours = int(input())
speed = int(input())
km_hours = hours*speed

# Ele quer saber quantos litros foram gastos com base nos km/h, já temos
# km e h, então basta pegar, multiplicar o km pelas horas (assim teremos o km total)
# agora pega esses km total e divide por 12 (para cada 12km, gasta 1 litro)

fuel_spent = km_hours/12

print(f"{fuel_spent:.3f}")

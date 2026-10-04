# Ejercicio propio: operadores
# Determina si un número es par y si está entre 1 y 100.

numero = 42

es_par = numero % 2 == 0
en_rango = numero >= 1 and numero <= 100

print(f"{numero} es par:", es_par)
print(f"{numero} está entre 1 y 100:", en_rango)
print("Cuadrado:", numero ** 2)
print("Mitad entera:", numero // 2)

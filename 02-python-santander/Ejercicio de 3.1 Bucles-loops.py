# Ejercicio propio: bucles
# Tabla de multiplicar y suma de los números del 1 al 10.

numero = 7
for i in range(1, 11):
    print(f"{numero} x {i} = {numero * i}")

total = 0
n = 1
while n <= 10:
    total += n
    n += 1
print("Suma del 1 al 10:", total)

#Ciclos en python
"""
i = 0
while i < 10:
    if i < 5:
        print("El numero",i,"es menor a 5")
    else:
        print("El numero",i,"es mayor a 5")
    i = i + 1

"""
#Cilo for
"""
for x in "David":
    print(x)
"""

#Ciclos infinitos a voluntad
while True:
    print("Escoge una de las siguientes opciones")
    print("1. Saludar")
    print("2. Salir")
    respuesta = int(input())
    if respuesta == 1:
        print("Saludos terricola")
    elif respuesta == 2:
        break
print("Terminadndo programa...")
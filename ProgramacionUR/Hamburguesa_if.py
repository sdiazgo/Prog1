precio_base=15000
precio_carne=5000
precio_bacon=3000
precio_pepinillos=1500
precio_verduras=2000
subtotal=0
total=0

carnes=0
bacon=0
pepinillos=0
verduras=0

choice=0

print("___________________________________")
print("| ¡Bienvenido a McDonald's!")
print("| Por favor ingrese sus adicionales:")
choice=int(input("| ¿Desea añadir carnes extra?:\n| 1. Sí \n| 2. No"))
if(choice==1):
    carnes=int(input("| ¿Cuántas carnes desea añadir?:"))
choice=0
choice=int(input("| ¿Desea añadir tocineta extra?:\n| 1. Sí\n| 2. No"))
if(choice==1):
    bacon=int(input("| ¿Cuánta tocineta desea añadir?:"))
choice=0
choice=int(input("| ¿Desea añadir pepinillos extra?:\n| 1. Sí\n| 2. No"))
if(choice==1):
    pepinillos=int(input("| ¿Cuántas porciones de pepinillos desea añadir?:"))
choice=0
choice=int(input("| ¿Desea añadir verduras extra?:\n| 1. Sí\n| 2. No"))
if(choice==1):
    verduras=int(input("| ¿Cuántas porciones de verduras desea añadir?:"))
choice=0
subtotal=precio_base+(carnes*precio_carne)+(bacon*precio_bacon)+(pepinillos*precio_pepinillos)+(verduras*precio_verduras)
print("| El subtotal de su pedido es: ",subtotal)
total=subtotal*1.19
print("| El total de su pedido es: ",total)

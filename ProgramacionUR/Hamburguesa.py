base=15000
print("_______________________________________________")
print("|Bienvenido a McDonald's")
hambs=int(input("|Por favor ingrese la cantidad de hamburguesas:"))
carnes=int(input("|Por favor ingrese la cantidad de carnes EXTRA (por hamburguesa):"))
queso=int(input("|Por favor ingrese la cantidad de queso (por hamburguesa):"))
bacon=int(input("|Por favor ingrese la cantidad de tocineta (por hamburguesa):"))
pepi=int(input("|Por favor ingrese la cantidad de pepinillos (por hamburguesa):"))
verduras=int(input("|Por favor ingrese la cantidad de verduras (por hamburguesa):"))
subtotal=base+((carnes)*5000)+((queso)*2500)+(bacon*3000)+(pepi*1000)+(verduras*2500);
total=subtotal+(subtotal*0.19);
print("|El subtotal de su pedido es:",subtotal)
print("|El total de su pedido es:",total)
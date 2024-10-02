choice=0
edad=0
promedio=0.0
comida_preferida=0
estudia=False
trabaja=False
tasa_interes=20

print("Bienvenido a OldieBank")
print("Para saber la tasa de interés de su tarjeta de crédito ingrese sus datos personales.")
edad = int(input("Ingresa tu edad"))
if(edad<20):
    tasa_interés+=(-2)
choice=int(input("¿Es estudiante? 1=SÍ, Otro valor=NO")
estudia=(choice==1)
if(estudia):
    promedio=float(input("Ingrese su promedio separado con punto (.)."))
    if(promedio<=3.5):
        tasa_interés+=(-0.5)
    elif(promedio<4.2):
        tasa_interes+=(-0.8)
    else:
        tasa_interes+=(-1.5)
choice=int(input("Ingresa tu comida favorita:\n1.Hamburguesa\n2.Perro Caliente\n3.Pizza\n4.Sushi"))
if(choice==1):
    tasa_interes+=()
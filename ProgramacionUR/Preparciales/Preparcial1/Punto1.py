import random

semilla = 5472
random.seed(semilla)

dado1 = 0
dado2 = 0
suma_dados = 0
tiro_inicial = 0
c=''

print("Ingresa un caracter para tirar los dados")
c=input()
dado1=random.randint(1,6)
dado2=random.randint(1,6)
suma_dados=dado1+dado2;
tiro_inicial=suma_dados
print("Sacaste ",suma_dados)

if(suma_dados==2 or suma_dados==3 or suma_dados==12):
    print("Perdiste!")
elif(suma_dados==7):
    print("Ganaste!")
else:
    print("Fase de tiros secundarios")
    print("Tiro1")
    print("Ingresa un caracter para tirar los dados")
    c=input()
    dado1=random.randint(1,6)
    dado2=random.randint(1,6)
    suma_dados=dado1+dado2
    print("Sacaste ",suma_dados)
    if(suma_dados==7):
        print("Perdiste!")
    elif(suma_dados==tiro_inicial):
        print("Ganaste!")
    else:
        print("Tiro2")
        print("Ingresa un caracter para tirar los dados")
        c=input()
        dado1=random.randint(1,6)
        dado2=random.randint(1,6)
        suma_dados=dado1+dado2
        print("Sacaste ",suma_dados)
        if(suma_dados==7):
            print("Perdiste!")
        elif(suma_dados==tiro_inicial):
            print("Ganaste!")
        else:
            print("Tiro3")
            print("Ingresa un caracter para tirar los dados")
            c=input()
            dado1=random.randint(1,6)
            dado2=random.randint(1,6)
            suma_dados=dado1+dado2
            print("Sacaste ",suma_dados)
            
            if(suma_dados==7):
                print("Perdiste!")
            elif(suma_dados==tiro_inicial):
                print("Ganaste!")
            else:
                print("Tiro4")
                print("Ingresa un caracter para tirar los dados")
                c=input()
                dado1=random.randint(1,6)
                dado2=random.randint(1,6)
                suma_dados=dado1+dado2
                print("Sacaste ",suma_dados)
                
                if(suma_dados==7):
                    print("Perdiste!")
                elif(suma_dados==tiro_inicial):
                    print("Ganaste!")
                else:
                    print("Lanzaste 5 veces en total. Perdiste por w.")
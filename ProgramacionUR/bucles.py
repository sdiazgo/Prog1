#Problema cuenta bancaria
"""
intentos=0
contrasena=1234
cont_ingresada=0

while((cont_ingresada!=contrasena) and (intentos<3)):
    cont_ingresada=int(input("Ingrese la contraseña de su cuenta bancaria"))
    intentos+=1
    if(cont_ingresada!=contrasena):
        print("Clave incorrecta, tiene ",3-intentos," intento(s) más.")

if(cont_ingresada==contrasena):
    print("Bienvenido a su cuenta.")
else:
    print("Su cuenta ha sido bloqueada")"""

#Factorial
n=1
factorial=1
print("Calculadora de n!")
n=int(input("Ingrese el valor de n"))
if(n>1):
    while(n>1):
        factorial=factorial*n
        n=n-1
    print("n!=",factorial)
elif(n>=0):
    print("n!=",factorial)
else:
    print("El factorial no está definido para números negativos")
    
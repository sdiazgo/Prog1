import math
x=0
y=0
z=0
raiz=0
resta=0
    
print("Ingresa el valor de x")
x=float(input())
print("Ingresa el valor de y")
y=float(input())

raiz = math.sqrt(x+(y**2/(3+x)));

resta=(x**2/(y**3+x))-5*(math.sqrt(3*x));
z=raiz-resta;
print("El resultado es: ",z)
import math

numerador_total=0
num_raiz=0
denominador_total=0
denom_num=0
denom_denom=0
z=0
x=0.0
y=0.0
    
x=float(input("Ingrese x:"))
y=float(input("Ingrese y:"))
    
num_raiz=math.sqrt((y**x)+3)/8
numerador_total=math.sqrt((x**y)*num_raiz);
    
denom_num=12*y-2*(x**(2+y))
denom_denom=(32*y-5)/((x*y)**2);
denominador_total=(denom_num/denom_denom)**3;
z=(numerador_total/denominador_total)**3;
print("z: ",z)
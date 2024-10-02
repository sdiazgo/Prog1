import math as m

print("Hola Mundo!")

a = 0
b = 0
c = 0
a=int(input("Inserte el valor de a"))
b=int(input("Inserte el valor de b"))
c=int(input("Inserte el valor de c"))
suma = a+b
resta = a-b
prod =a*b
power = a**b
root = m.sqrt(a)
hipotenusa = m.sqrt((a**2)+(b**2));
f_cuad1= (-b+m.sqrt(b**2-(4*a*c)))/(2*a)
f_cuad2= (-b-m.sqrt(b**2-(4*a*c)))/(2*a)

if(b!=0):
    div = a/b
else:
    div = "No se puede dividir entre 0!!!"

print("a+b=", suma)
print("a-b=", resta)
print("a*b=", prod)
print("a/b=", div)
print("a^b=", power)
print("sqrt(a)=", root)
print("hipotenusa con catetos de longitud a y b=", hipotenusa)
print("Raíces fórmula cuadrática:", f_cuad1, f_cuad2)
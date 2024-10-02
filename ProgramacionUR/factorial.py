def factorial(a):
    fact=1
    for i in range(a):
        fact=fact*(i+1)
    return fact
   
#b=int(input("Ingresa n para calcular su factorial"))
#print(factorial(b))

def combinatoria(n,k):
    comb=factorial(n)/(factorial(k)*factorial(n-k))
    return comb
    
print("Calcular n combinado k")
n = int(input("Ingresa el valor de n"))
k = int(input("Ingresa el valor de k"))
print("nCk= ",int(combinatoria(n,k)))
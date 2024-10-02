import math

def promedio(lista):
    prom=0
    for i in lista:
        prom += i
    return prom/len(lista)
    
def desv_estandar(lista):
    promed=promedio(lista)
    suma=0
    n=len(lista)
    for i in lista:
        suma += (i-promed)**2
    dv_st = math.sqrt(suma/n)
    return dv_st
    
def max_lista(lista):
    max_li=lista[0]
    for i in lista:
        if(i>max_li):
            max_li=i
    return max_li
    
def min_lista(lista):
    min_li=lista[0]
    for i in lista:
        if(i<min_li):
            min_li=i
    return min_li
    
def invertir_vector(lista):
    vect_inv=[]
    n=len(lista)
    for i in range(n):
        vect_inv.append(lista[(n-1)-i])
    return vect_inv

def invertir_vector_kill(lista):
    n=len(lista)
    for i in range(n):
        lista.append(lista[(n-1)-i])
    for i in range(n):
        lista.pop(0)
    
lista_est =[5,5,0,0]
lista_inv=invertir_vector(lista_est)
print(lista_inv,max_lista(lista_est),min_lista(lista_est),promedio(lista_est),desv_estandar(lista_est))
print(lista_est)
invertir_vector_kill(lista_est)
print(lista_est)

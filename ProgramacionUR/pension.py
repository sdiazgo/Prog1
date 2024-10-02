print("Calculadora de semanas de pensión")
choice=0
n_semanas=0
n_hijos=0
choice=int(input("Ingrese su sexo. F=0, M=1"))

if choice == 1:
    n_semanas=1300
    print("Usted necesita ",n_semanas," semanas para pensionarse.")
else:
    choice=int(input("¿Usted tiene hijos? No = 0, Sí = 1"))
    if(choice == 1):
        n_hijos=int(input("¿Cuántos hijos tiene?"))
    n_hijos=min(n_hijos,3)
    n_semanas=1000-(n_hijos*50)
    print("Usted necesita ",n_semanas," semanas para pensionarse.")
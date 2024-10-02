choice=-1
kilometros_viaje=0
puntos=0
estatus= 0
precio_tiquete=0.0
descuento=0.0

print("Bienvenidos a Aerolíneas Nueva Scadta")
kilometros_viaje=int(input("Ingrese la distancia de su vuelo"))
estatus=int(input("Ingrese su estatus: 0: no tiene, 1: Bronce, 2: Plata, 3: Oro"))

if(estatus==0):
    precio_tiquete=(10000*kilometros_viaje)*1.25
    print("El valor de su tiquete es: ",precio_tiquete)
elif(estatus==1):
    puntos=int(input("Ingrese cuántos puntos tiene:"))
    precio_tiquete=(9000*kilometros_viaje)*1.25
    print("El valor actual de su tiquete es: ",precio_tiquete)
    choice=int(input("¿Desea pagar con puntos?: 0:No, 1:Sí"))
    if(choice==1):
        descuento=puntos*2000
        puntos=0
        precio_tiquete=precio_tiquete - descuento
        if(precio_tiquete>0):
            #puntos+=kilometros_viaje;
            print("El valor final de su tiquete es: ",precio_tiquete," y tiene ",puntos," puntos disponibles.")
        else:
            puntos=int((precio_tiquete*-1)/2000)
            precio_tiquete=0
            print("El valor final de su tiquete es: ",precio_tiquete," y tiene ",puntos," puntos disponibles.")
    else:
        puntos+=kilometros_viaje
        print("El valor final de su tiquete es: ",precio_tiquete," y tiene ",puntos," puntos disponibles.")
elif(estatus==2):
    puntos=int(input("Ingrese cuántos puntos tiene:"))
    precio_tiquete=(7500*kilometros_viaje)*1.25
    print("El valor actual de su tiquete es: ",precio_tiquete)
    choice=int(input("¿Desea pagar con puntos?: 0:No, 1:Sí"))
    if(choice==1):
        descuento=puntos*2000
        puntos=0
        precio_tiquete=precio_tiquete - descuento
        if(precio_tiquete>0):
            #puntos+=kilometros_viaje;
            print("El valor final de su tiquete es: ",precio_tiquete," y tiene ",puntos," puntos disponibles.")
        else:
            puntos=int((precio_tiquete*-1)/2000)
            precio_tiquete=0
            print("El valor final de su tiquete es: ",precio_tiquete," y tiene ",puntos," puntos disponibles.")
    else:
        puntos+=kilometros_viaje*2
        print("El valor final de su tiquete es: ",precio_tiquete," y tiene ",puntos," puntos disponibles.")
elif(estatus==3):
    puntos=int(input("Ingrese cuántos puntos tiene:"))
    precio_tiquete=(6000*kilometros_viaje)*1.25
    print("El valor actual de su tiquete es: ",precio_tiquete)
    choice=int(input("¿Desea pagar con puntos?: 0:No, 1:Sí"))
    if(choice==1):
        descuento=puntos*2000
        puntos=0
        precio_tiquete=precio_tiquete - descuento
        if(precio_tiquete>0):
            #puntos+=kilometros_viaje;
            print("El valor final de su tiquete es: ",precio_tiquete," y tiene ",puntos," puntos disponibles.")
        else:
            puntos=int((precio_tiquete*-1)/2000)
            precio_tiquete=0
            print("El valor final de su tiquete es: ",precio_tiquete," y tiene ",puntos," puntos disponibles.")
    else:
        puntos+=kilometros_viaje*4
        print("El valor final de su tiquete es: ",precio_tiquete," y tiene ",puntos," puntos disponibles.")
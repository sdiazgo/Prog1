# Jugador 1 introduce un número de 2 dígitos
numero_jugador1 = input("Jugador 1, introduce un número de 2 dígitos: ")

# Verificar que el número tiene 2 dígitos
if len(numero_jugador1) != 2 or not numero_jugador1.isdigit():
    print("Número inválido. El juego ha terminado.")
else:
    # Jugador 2 tiene 5 oportunidades para adivinar
    intentos_restantes = 5

    # Primer intento
    numero_jugador2 = input(f"Jugador 2, tienes {intentos_restantes} oportunidades. Introduce un número de 2 dígitos: ")
    if len(numero_jugador2) == 2 and numero_jugador2.isdigit():
        if numero_jugador2 == numero_jugador1:
            print("¡Has ganado!")
        else:
            puntos = 0
            fama = 0
            if numero_jugador2[0] == numero_jugador1[0]:
                fama += 1
            elif numero_jugador2[0] == numero_jugador1[1]:
                puntos += 1

            if numero_jugador2[1] == numero_jugador1[1]:
                fama += 1
            elif numero_jugador2[1] == numero_jugador1[0]:
                puntos += 1

            if fama > 0:
                print(f"Tienes {fama} fama{'s' if fama > 1 else ''}.")
            if puntos > 0:
                print(f"Tienes {puntos} punto{'s' if puntos > 1 else ''}.")
            intentos_restantes -= 1
    else:
        print("Número inválido. Pasa al siguiente intento.")
        intentos_restantes -= 1

    # Segundo intento
    if intentos_restantes > 0:
        numero_jugador2 = input(f"Jugador 2, tienes {intentos_restantes} oportunidades. Introduce un número de 2 dígitos: ")
        if len(numero_jugador2) == 2 and numero_jugador2.isdigit():
            if numero_jugador2 == numero_jugador1:
                print("¡Has ganado!")
            else:
                puntos = 0
                fama = 0
                if numero_jugador2[0] == numero_jugador1[0]:
                    fama += 1
                elif numero_jugador2[0] == numero_jugador1[1]:
                    puntos += 1

                if numero_jugador2[1] == numero_jugador1[1]:
                    fama += 1
                elif numero_jugador2[1] == numero_jugador1[0]:
                    puntos += 1

                if fama > 0:
                    print(f"Tienes {fama} fama{'s' if fama > 1 else ''}.")
                if puntos > 0:
                    print(f"Tienes {puntos} punto{'s' if puntos > 1 else ''}.")
                intentos_restantes -= 1
        else:
            print("Número inválido. Pasa al siguiente intento.")
            intentos_restantes -= 1

    # Tercer intento
    if intentos_restantes > 0:
        numero_jugador2 = input(f"Jugador 2, tienes {intentos_restantes} oportunidades. Introduce un número de 2 dígitos: ")
        if len(numero_jugador2) == 2 and numero_jugador2.isdigit():
            if numero_jugador2 == numero_jugador1:
                print("¡Has ganado!")
            else:
                puntos = 0
                fama = 0
                if numero_jugador2[0] == numero_jugador1[0]:
                    fama += 1
                elif numero_jugador2[0] == numero_jugador1[1]:
                    puntos += 1

                if numero_jugador2[1] == numero_jugador1[1]:
                    fama += 1
                elif numero_jugador2[1] == numero_jugador1[0]:
                    puntos += 1

                if fama > 0:
                    print(f"Tienes {fama} fama{'s' if fama > 1 else ''}.")
                if puntos > 0:
                    print(f"Tienes {puntos} punto{'s' if puntos > 1 else ''}.")
                intentos_restantes -= 1
        else:
            print("Número inválido. Pasa al siguiente intento.")
            intentos_restantes -= 1

    # Cuarto intento
    if intentos_restantes > 0:
        numero_jugador2 = input(f"Jugador 2, tienes {intentos_restantes} oportunidades. Introduce un número de 2 dígitos: ")
        if len(numero_jugador2) == 2 and numero_jugador2.isdigit():
            if numero_jugador2 == numero_jugador1:
                print("¡Has ganado!")
            else:
                puntos = 0
                fama = 0
                if numero_jugador2[0] == numero_jugador1[0]:
                    fama += 1
                elif numero_jugador2[0] == numero_jugador1[1]:
                    puntos += 1

                if numero_jugador2[1] == numero_jugador1[1]:
                    fama += 1
                elif numero_jugador2[1] == numero_jugador1[0]:
                    puntos += 1

                if fama > 0:
                    print(f"Tienes {fama} fama{'s' if fama > 1 else ''}.")
                if puntos > 0:
                    print(f"Tienes {puntos} punto{'s' if puntos > 1 else ''}.")
                intentos_restantes -= 1
        else:
            print("Número inválido. Pasa al siguiente intento.")
            intentos_restantes -= 1

    # Quinto intento
    if intentos_restantes > 0:
        numero_jugador2 = input(f"Jugador 2, tienes {intentos_restantes} oportunidades. Introduce un número de 2 dígitos: ")
        if len(numero_jugador2) == 2 and numero_jugador2.isdigit():
            if numero_jugador2 == numero_jugador1:
                print("¡Has ganado!")
            else:
                puntos = 0
                fama = 0
                if numero_jugador2[0] == numero_jugador1[0]:
                    fama += 1
                elif numero_jugador2[0] == numero_jugador1[1]:
                    puntos += 1

                if numero_jugador2[1] == numero_jugador1[1]:
                    fama += 1
                elif numero_jugador2[1] == numero_jugador1[0]:
                    puntos += 1

                if fama > 0:
                    print(f"Tienes {fama} fama{'s' if fama > 1 else ''}.")
                if puntos > 0:
                    print(f"Tienes {puntos} punto{'s' if puntos > 1 else ''}.")
        else:
            print("Número inválido. Pasa al siguiente intento.")
            intentos_restantes -= 1

    # Final del juego
    if intentos_restantes == 0:
        print("Se acabaron los intentos. El juego ha terminado.")
#include <iostream>
#include <string>

using namespace std;

int main() {
    string numero_jugador1;

    // Jugador 1 introduce un número de 2 dígitos
    cout << "Jugador 1, introduce un número de 2 dígitos: ";
    cin >> numero_jugador1;

    // Verificar que el número tiene 2 dígitos
    if (numero_jugador1.length() != 2 || !isdigit(numero_jugador1[0]) || !isdigit(numero_jugador1[1])) {
        cout << "Número inválido. El juego ha terminado." << endl;
    } else {
        int intentos_restantes = 5;

        // Primer intento
        string numero_jugador2;
        cout << "Jugador 2, tienes " << intentos_restantes << " oportunidades. Introduce un número de 2 dígitos: ";
        cin >> numero_jugador2;
        if (numero_jugador2.length() == 2 && isdigit(numero_jugador2[0]) && isdigit(numero_jugador2[1])) {
            if (numero_jugador2 == numero_jugador1) {
                cout << "¡Has ganado!" << endl;
                return 0;
            } else {
                int puntos = (numero_jugador2[0] != numero_jugador1[0] && (numero_jugador2[0] == numero_jugador1[1])) +
                             (numero_jugador2[1] != numero_jugador1[1] && (numero_jugador2[1] == numero_jugador1[0]));
                int fama = (numero_jugador2[0] == numero_jugador1[0]) +
                           (numero_jugador2[1] == numero_jugador1[1]);
                if (fama > 0) {
                    cout << "Tienes " << fama << " fama" << (fama > 1 ? "s" : "") << "." << endl;
                }
                if (puntos > 0) {
                    cout << "Tienes " << puntos << " punto" << (puntos > 1 ? "s" : "") << "." << endl;
                }
                intentos_restantes--;
            }
        } else {
            cout << "Número inválido. Pasa al siguiente intento." << endl;
            intentos_restantes--;
        }

        // Segundo intento
        if (intentos_restantes > 0) {
            cout << "Jugador 2, tienes " << intentos_restantes << " oportunidades. Introduce un número de 2 dígitos: ";
            cin >> numero_jugador2;
            if (numero_jugador2.length() == 2 && isdigit(numero_jugador2[0]) && isdigit(numero_jugador2[1])) {
                if (numero_jugador2 == numero_jugador1) {
                    cout << "¡Has ganado!" << endl;
                    return 0;
                } else {
                    int puntos = (numero_jugador2[0] != numero_jugador1[0] && (numero_jugador2[0] == numero_jugador1[1])) +
                                 (numero_jugador2[1] != numero_jugador1[1] && (numero_jugador2[1] == numero_jugador1[0]));
                    int fama = (numero_jugador2[0] == numero_jugador1[0]) +
                               (numero_jugador2[1] == numero_jugador1[1]);
                    if (fama > 0) {
                        cout << "Tienes " << fama << " fama" << (fama > 1 ? "s" : "") << "." << endl;
                    }
                    if (puntos > 0) {
                        cout << "Tienes " << puntos << " punto" << (puntos > 1 ? "s" : "") << "." << endl;
                    }
                    intentos_restantes--;
                }
            } else {
                cout << "Número inválido. Pasa al siguiente intento." << endl;
                intentos_restantes--;
            }
        }

        // Tercer intento
        if (intentos_restantes > 0) {
            cout << "Jugador 2, tienes " << intentos_restantes << " oportunidades. Introduce un número de 2 dígitos: ";
            cin >> numero_jugador2;
            if (numero_jugador2.length() == 2 && isdigit(numero_jugador2[0]) && isdigit(numero_jugador2[1])) {
                if (numero_jugador2 == numero_jugador1) {
                    cout << "¡Has ganado!" << endl;
                    return 0;
                } else {
                    int puntos = (numero_jugador2[0] != numero_jugador1[0] && (numero_jugador2[0] == numero_jugador1[1])) +
                                 (numero_jugador2[1] != numero_jugador1[1] && (numero_jugador2[1] == numero_jugador1[0]));
                    int fama = (numero_jugador2[0] == numero_jugador1[0]) +
                               (numero_jugador2[1] == numero_jugador1[1]);
                    if (fama > 0) {
                        cout << "Tienes " << fama << " fama" << (fama > 1 ? "s" : "") << "." << endl;
                    }
                    if (puntos > 0) {
                        cout << "Tienes " << puntos << " punto" << (puntos > 1 ? "s" : "") << "." << endl;
                    }
                    intentos_restantes--;
                }
            } else {
                cout << "Número inválido. Pasa al siguiente intento." << endl;
                intentos_restantes--;
            }
        }

        // Cuarto intento
        if (intentos_restantes > 0) {
            cout << "Jugador 2, tienes " << intentos_restantes << " oportunidades. Introduce un número de 2 dígitos: ";
            cin >> numero_jugador2;
            if (numero_jugador2.length() == 2 && isdigit(numero_jugador2[0]) && isdigit(numero_jugador2[1])) {
                if (numero_jugador2 == numero_jugador1) {
                    cout << "¡Has ganado!" << endl;
                    return 0;
                } else {
                    int puntos = (numero_jugador2[0] != numero_jugador1[0] && (numero_jugador2[0] == numero_jugador1[1])) +
                                 (numero_jugador2[1] != numero_jugador1[1] && (numero_jugador2[1] == numero_jugador1[0]));
                    int fama = (numero_jugador2[0] == numero_jugador1[0]) +
                               (numero_jugador2[1] == numero_jugador1[1]);
                    if (fama > 0) {
                        cout << "Tienes " << fama << " fama" << (fama > 1 ? "s" : "") << "." << endl;
                    }
                    if (puntos > 0) {
                        cout << "Tienes " << puntos << " punto" << (puntos > 1 ? "s" : "") << "." << endl;
                    }
                    intentos_restantes--;
                }
            } else {
                cout << "Número inválido. Pasa al siguiente intento." << endl;
                intentos_restantes--;
            }
        }

        // Quinto intento
        if (intentos_restantes > 0) {
            cout << "Jugador 2, tienes " << intentos_restantes << " oportunidades. Introduce un número de 2 dígitos: ";
            cin >> numero_jugador2;
            if (numero_jugador2.length() == 2 && isdigit(numero_jugador2[0]) && isdigit(numero_jugador2[1])) {
                if (numero_jugador2 == numero_jugador1) {
                    cout << "¡Has ganado!" << endl;
                } else {
                    int puntos = (numero_jugador2[0] != numero_jugador1[0] && (numero_jugador2[0] == numero_jugador1[1])) +
                                 (numero_jugador2[1] != numero_jugador1[1] && (numero_jugador2[1] == numero_jugador1[0]));
                    int fama = (numero_jugador2[0] == numero_jugador1[0]) +
                               (numero_jugador2[1] == numero_jugador1[1]);
                    if (fama > 0) {
                        cout << "Tienes " << fama << " fama" << (fama > 1 ? "s" : "") << "." << endl;
                    }
                    if (puntos > 0) {
                        cout << "Tienes " << puntos << " punto" << (puntos > 1 ? "s" : "") << "." << endl;
                    }
                }
            } else {
                cout << "Número inválido. Pasa al siguiente intento." << endl;
            }
        }

        // Final del juego
        if (intentos_restantes == 0) {
            cout << "Se acabaron los intentos. El juego ha terminado." << endl;
        }
    }

    return 0;
}
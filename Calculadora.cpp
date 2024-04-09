#include <iostream>

using namespace std;

int main() {
    char operador;
    float num1, num2;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingrese dos números: ";
    cin >> num1 >> num2;

    switch(operador) {
        case '+':
            cout << "El resultado es: " << num1 + num2;
            break;
        case '-':
            cout << "El resultado es: " << num1 - num2;
            break;
        case '*':
            cout << "El resultado es: " << num1 * num2;
            break;
        case '/':
            if(num2 != 0.0)
                cout << "El resultado es: " << num1 / num2;
            else
                cout << "División por cero.";
            break;
        default:
            cout << "Operador no válido";
            break;
    }

    return 0;
}

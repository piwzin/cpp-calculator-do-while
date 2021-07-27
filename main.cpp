#include <iostream>
using namespace std;

bool validarOperador (char operador) {

  while (operador == '+' || operador == '-' ) {
     return true;
  }

  while (operador == '*' || operador == '/'){
    return true;
  }

  return false;
}

int main() {
  char operador;
  bool operacaoValida;
  float operando1, operando2, resultado;

  do {
    cin >> operando1 >> operador >> operando2;
    operacaoValida = validarOperador (operador);

    if (operacaoValida == true){
      if (operador =='+'){
        resultado = (operando1 + operando2);
        cout << resultado << endl;
      }
          if (operador =='-'){
        resultado = (operando1 - operando2);
        cout << resultado << endl;
      }
              if (operador =='*'){
        resultado = (operando1 * operando2);
        cout << resultado << endl;
      }
              if (operador =='/'){
        resultado = (operando1 / operando2);
        cout << resultado << endl;
      }
    }
     
  } while (operacaoValida);

  return 0;
}

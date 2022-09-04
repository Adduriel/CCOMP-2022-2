#include <iostream>
using namespace std;

int main() {
  int numero, millon, milmilmil, milmil, mil, centena, decena, unidad;
  cout << "Ingresa un numero de 0 a 9999999" << endl;
  cin >> numero;

  if (numero >= 0 && numero <= 9999999) {
    unidad = numero % 10;
    numero = numero / 10;
    decena = numero % 10;
    numero = numero / 10;
    centena = numero % 10;
    numero = numero / 10;
    mil = numero % 10;
    numero = numero / 10;
    milmil = numero % 10;
    numero = numero / 10;
    milmilmil = numero % 10;
    numero = numero / 10;
    millon = numero % 10;
    numero = numero / 10;

    switch (millon) {
    case 0:
      cout << "";
      break;
    case 1:
      cout << "un millon ";
      break;
    case 2:
      cout << "dos millones ";
      break;
    case 3:
      cout << "tres millones ";
      break;
    case 4:
      cout << "cuatro millones ";
      break;
    case 5:
      cout << "cinco millones ";
      break;
    case 6:
      cout << "seis millones ";
      break;
    case 7:
      cout << "siete millones ";
      break;
    case 8:
      cout << "ocho millones ";
      break;
    case 9:
      cout << "nueve millones ";
      break;
    }
    switch (milmilmil) {
    case 0:
      cout << "";
      break;
    case 1:
      if (milmil == 0 && mil == 0 && decena == 0 && unidad == 0) {
        cout << "cien mil";
      } else {
        cout << "ciento ";
      }
      break;
    case 2:
      cout << "doscientos ";
      break;
    case 3:
      cout << "trescientos ";
      break;
    case 4:
      cout << "cuatrocientos ";
      break;
    case 5:
      cout << "quinientos ";
      break;
    case 6:
      cout << "seiscientos ";
      break;
    case 7:
      cout << "setecientos ";
      break;
    case 8:
      cout << "ochocientos ";
      break;
    case 9:
      cout << "novecientos ";
      break;
    }
    switch (milmil) {
    case 0:
      cout << "";
      break;
    case 1:
      switch (mil) {
      case 1:
        cout << "once ";
        break;
      case 2:
        cout << "doce ";
        break;
      case 3:
        cout << "trece ";
        break;
      case 4:
        cout << "catorce ";
        break;
      case 5:
        cout << "quince ";
        break;
      case 6:
        cout << "dieciseis ";
        break;
      case 7:
        cout << "diecisiete ";
        break;
      case 8:
        cout << "dieciocho ";
        break;
      case 9:
        cout << "diecinueve ";
        break;
      }
      break;
    case 2:
      if (mil == 0 && centena == 0 && decena == 0 && unidad == 0) {
        cout << "veinte mil";
      } else {
        cout << "veinti";
      }
      break;
    case 3:
      if (mil == 0 && centena == 0 && decena == 0 && unidad == 0) {
        cout << "treinta mil";
      } else {
        cout << "treinta y ";
      }
      break;
    case 4:
      if (mil == 0 && centena == 0 && decena == 0 && unidad == 0) {
        cout << "cuarenta mil";
      } else {
        cout << "cuarenta y ";
      }
      break;
    case 5:
      if (mil == 0 && centena == 0 && decena == 0 && unidad == 0) {
        cout << "cincuenta mil";
      } else {
        cout << "cincuenta y ";
      }
      break;
    case 6:
      if (mil == 0 && centena == 0 && decena == 0 && unidad == 0) {
        cout << "sesenta mil";
      } else {
        cout << "sesenta y ";
      }
      break;
    case 7:
      if (mil == 0 && centena == 0 && decena == 0 && unidad == 0) {
        cout << "setenta mil";
      } else {
        cout << "setenta y ";
      }
      break;
    case 8:
      if (mil == 0 && centena == 0 && decena == 0 && unidad == 0) {
        cout << "ochenta mil";
      } else {
        cout << "ochenta y ";
      }
      break;
    case 9:
      if (mil == 0 && centena == 0 && decena == 0 && unidad == 0) {
        cout << "noventa mil";
      } else {
        cout << "noventa y ";
      }
      break;
    }
    switch (mil) {
    case 0:
      cout << "";
      break;
    case 1:
      cout << "mil ";
      break;
    case 2:
      cout << "dos mil ";
      break;
    case 3:
      cout << "tres mil ";
      break;
    case 4:
      cout << "cuatro mil ";
      break;
    case 5:
      cout << "cinco mil ";
      break;
    case 6:
      cout << "seis mil ";
      break;
    case 7:
      cout << "siete mil ";
      break;
    case 8:
      cout << "ocho mil ";
      break;
    case 9:
      cout << "nueve mil ";
      break;
    }
    switch (centena) {
    case 0:
      cout << "";
      break;
    case 1:
      if (decena == 0 && unidad == 0) {
        cout << "cien ";
      } else {
        cout << "ciento ";
      }
      break;
    case 2:
      cout << "doscientos ";
      break;
    case 3:
      cout << "trescientos ";
      break;
    case 4:
      cout << "cuatrocientos ";
      break;
    case 5:
      cout << "quinientos ";
      break;
    case 6:
      cout << "seiscientos ";
      break;
    case 7:
      cout << "setecientos ";
      break;
    case 8:
      cout << "ochocientos ";
      break;
    case 9:
      cout << "novecientos ";
      break;
    }
    switch (decena) {
    case 0:
      cout << "";
      break;
    case 1:
      switch (unidad) {
      case 0:
        cout << "diez ";
        break;
      case 1:
        cout << "once ";
        break;
      case 2:
        cout << "doce ";
        break;
      case 3:
        cout << "trece ";
        break;
      case 4:
        cout << "catorce ";
        break;
      case 5:
        cout << "quince ";
        break;
      case 6:
        cout << "dieciseis ";
        break;
      case 7:
        cout << "diecisiete ";
        break;
      case 8:
        cout << "dieciocho ";
        break;
      case 9:
        cout << "diecinueve ";
        break;
      }
      break;
    case 2:
      if (unidad == 0) {
        cout << "veinte";
      } else {
        cout << "veinti";
      }
      break;
    case 3:
      if (unidad == 0) {
        cout << "treinta";
      } else {
        cout << "treinta y ";
      }
      break;
    case 4:
      if (unidad == 0) {
        cout << "cuarenta";
      } else {
        cout << "cuarenta y ";
      }
      break;
    case 5:
      if (unidad == 0) {
        cout << "cincuenta";
      } else {
        cout << "cincuenta y ";
      }
      break;
    case 6:
      if (unidad == 0) {
        cout << "sesenta";
      } else {
        cout << "sesenta y ";
      }
      break;
    case 7:
      if (unidad == 0) {
        cout << "setenta";
      } else {
        cout << "setenta y ";
      }
      break;
    case 8:
      if (unidad == 0) {
        cout << "ochenta";
      } else {
        cout << "ochenta y ";
      }
      break;
    case 9:
      if (unidad == 0) {
        cout << "noventa";
      } else {
        cout << "noventa y ";
      }
      break;
    }
    switch (unidad) {
    case 0:
      if (mil == 0 && centena == 0 && decena == 0) {
        cout << "cero";
      } else {
        cout << "";
      }
      break;
    case 1:
      if (mil == 0 && centena == 0 && decena == 0) {
        cout << "uno";
      } else if (mil == 0 && centena == 0 && decena >= 1) {
        cout << "uno";
      } else if (mil == 0 && centena >= 1 && decena >= 1 || decena == 0) {
        cout << "uno";
      } else if (mil >= 1 && centena >= 0 && decena >= 1 || decena == 0) {
        cout << "uno";
      } else {
        cout << "";
      }
      break;
    case 2:
      if (mil == 0 && centena == 0 && decena == 0) {
        cout << "dos";
      } else if (mil == 0 && centena == 0 && decena >= 1) {
        cout << "dos";
      } else if (mil == 0 && centena >= 1 && decena >= 1 || decena == 0) {
        cout << "dos";
      } else if (mil >= 1 && centena >= 0 && decena >= 1 || decena == 0) {
        cout << "dos";
      } else {
        cout << "";
      }
      break;
    case 3:
      if (mil == 0 && centena == 0 && decena == 0) {
        cout << "tres";
      } else if (mil == 0 && centena == 0 && decena >= 1) {
        cout << "tres";
      } else if (mil == 0 && centena >= 1 && decena >= 1 || decena == 0) {
        cout << "tres";
      } else if (mil >= 1 && centena >= 0 && decena >= 1 || decena == 0) {
        cout << "tres";
      } else {
        cout << "";
      }
      break;
    case 4:
      if (mil == 0 && centena == 0 && decena == 0) {
        cout << "cuatro";
      } else if (mil == 0 && centena == 0 && decena >= 1) {
        cout << "cuatro";
      } else if (mil == 0 && centena >= 1 && decena >= 1 || decena == 0) {
        cout << "cuatro";
      } else if (mil >= 1 && centena >= 0 && decena >= 1 || decena == 0) {
        cout << "cuatro";
      } else {
        cout << "";
      }
      break;
    case 5:
      if (mil == 0 && centena == 0 && decena == 0) {
        cout << "cinco";
      } else if (mil == 0 && centena == 0 && decena >= 1) {
        cout << "cinco";
      } else if (mil == 0 && centena >= 1 && decena >= 1 || decena == 0) {
        cout << "cinco";
      } else if (mil >= 1 && centena >= 0 && decena >= 1 || decena == 0) {
        cout << "cinco";
      } else {
        cout << "";
      }
      break;
    case 6:
      if (mil == 0 && centena == 0 && decena == 0) {
        cout << "seis";
      } else if (mil == 0 && centena == 0 && decena >= 1) {
        cout << "seis";
      } else if (mil == 0 && centena >= 1 && decena >= 1 || decena == 0) {
        cout << "seis";
      } else if (mil >= 1 && centena >= 0 && decena >= 1 || decena == 0) {
        cout << "seis";
      } else {
        cout << "";
      }
      break;
    case 7:
      if (mil == 0 && centena == 0 && decena == 0) {
        cout << "siete";
      } else if (mil == 0 && centena == 0 && decena >= 1) {
        cout << "siete";
      } else if (mil == 0 && centena >= 1 && decena >= 1 || decena == 0) {
        cout << "siete";
      } else if (mil >= 1 && centena >= 0 && decena >= 1 || decena == 0) {
        cout << "siete";
      } else {
        cout << "";
      }
      break;
    case 8:
      if (mil == 0 && centena == 0 && decena == 0) {
        cout << "ocho";
      } else if (mil == 0 && centena == 0 && decena >= 1) {
        cout << "ocho";
      } else if (mil == 0 && centena >= 1 && decena >= 1 || decena == 0) {
        cout << "ocho";
      } else if (mil >= 1 && centena >= 0 && decena >= 1 || decena == 0) {
        cout << "ocho";
      } else {
        cout << "";
      }
      break;
    case 9:
      if (mil == 0 && centena == 0 && decena == 0) {
        cout << "nueve";
      } else if (mil == 0 && centena == 0 && decena >= 1) {
        cout << "nueve";
      } else if (mil == 0 && centena >= 1 && decena >= 1 || decena == 0) {
        cout << "nueve";
      } else if (mil >= 1 && centena >= 0 && decena >= 1 || decena == 0) {
        cout << "nueve";
      } else {
        cout << "";
      }
      break;
    }
  } else {
    cout << "ingrese un numero valido";
  }

  return 0;
}
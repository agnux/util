#include <iostream>
// #include <vector>
#include <string>
#include <algorithm>
/** 
    simples conversor de número natural para o sistema binário. 17/11/2024
    alexandr_mc2
**/


using namespace std;
  /** 
       p  |  r
          ------
       d     q
    **/


string naturalTo2( int entrada ) {
  string saida = "";
  string aux;
  int p, r,d, q;
  
  p = entrada;
  r = 2;
  
  do  {
    q = (int)  p / r ;
    d = (p % r);
    aux = to_string( d );
    cout << "aux: " << aux << "\n";
    saida.append(aux) ;
    p = q;
  } while (p >= r);
  saida.append( to_string( q ) ); 
  reverse(saida.begin(), saida.end());
  return saida;
}

int main(void){
  int natural;
  string binario;
  cout << "Entre com número natural\n";
  cin >> natural;
  cout << "numero é:" << natural <<"\n";
  
  binario = naturalTo2( natural );
  cout << binario;
  cout << "o número natural: " << natural << " corresponde a " << binario << " no sistema binário\n";
  return 0;
}

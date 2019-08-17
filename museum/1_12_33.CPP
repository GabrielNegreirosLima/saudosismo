#include <constream.h>
#include <math.h>

void main (){

  float soma=0;
  int num, den=1, exp=25, sinal=1;

  clrscr();
  cout << "\n\tDigite o valor de X (numerador) para o somatorio: ";
  cin >> num;

  for(int i=25; i>=1; i--){
    soma+=sinal*((pow(num, exp))/den);
    sinal*=-1;
    exp--;
    den++;
  }

  cout << "\n\tA soma e: " << soma;
  getch();
}
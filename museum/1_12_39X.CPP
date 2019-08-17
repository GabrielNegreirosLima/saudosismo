#include <constream.h>
#include <math.h>

void main () {

  int den=3, x, exp, sinal=1, fat;
  float soma=0.0;

  clrscr();
  cout << "\n\tDigite um valor para X: ";
  cin >> x;

  for(exp=0; exp<40; exp+=2){

    fat=den;
    for(int aux=den-1; aux>=1; aux--)
      fat*=aux;

    if(exp==0)
     soma+=x;
    else{
      sinal*=-1;
      soma+=(float)sinal*(pow(x, exp)/fat);
    }

    den+=2;
  }

  cout << "\n\tA soma e : " << soma;
  getch();
}
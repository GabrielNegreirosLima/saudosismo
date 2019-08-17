#include <constream.h>
#include <math.h>

void main() {

  const int exp=3, num=1;
  const float indice=1/3;
  float soma=0, pi=0, param;
  int den=1, i=0, sinal=1;

  clrscr();
  while(i<510){

    soma+=(float)sinal*(num/(pow(den, exp)));
    sinal*=-1;
    den+=2;
    i++;
  }
  soma=soma*32;
  pi=(float)pow(soma, 1.0/3.0);

  cout << "\n\tO valor de PI e : " << pi;
  getch();
}

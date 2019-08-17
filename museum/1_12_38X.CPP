#include <constream.h>
#include <math.h>

void main() {

  int x, expo=1, den=2, qtd=1;
  double  fat;
  float soma=0.0, param=0.0;

  cout << "\n\tDigite o X para a somatoria: ";
  cin >> x;

  param=exp(x);

  while((soma+0.0001)!=param || (soma-0.0001)!=param){

    fat=den;
    for(int i=fat-1; i>=1; i--)
      fat*=i;

    if(soma==0.0)
      soma+=1+(pow(x, expo));
    else
      soma+=(pow(x, expo))/fat;

    qtd++;
    expo++;
    den++;
  }

  cout << "\n\tO valor de X e: " << x;
  cout << "\n\tO valor dado pela serie e: " << soma;
  cout << "\n\tO valor dado pela funcao exp e: " << exp(x);
  cout << "\n\tO numero de termos usado foi " << qtd;
  getch();
}


#include <constream.h>

void main () {

  char sexo;
  int qtdm=0, qtdf=0;
  float menorh=3.00, maiorh=1.00, alt, altf=0, mediaf;

  for(int i=0; i<5; i++) {

    cout << "\n\tDigite o sexo, m(masculino), f(feminino): ";
    cin >> sexo;

    cout << "\n\tDigite a altura: ";
    cin >> alt;

    if(alt<menorh)
      menorh=alt;

    if(alt>maiorh)
      maiorh=alt;

    if(sexo=='f'){

      altf+=alt;
      qtdf++;
    }

    if(sexo=='m')
      qtdm++;
  }

  mediaf=(float)(altf)/(qtdf);

  cout << "\n\tA maior altura e: " << maiorh;
  cout << "\n\tA menor altura e: " << menorh;
  cout << "\n\tA media da altura de mulheres e: " << mediaf;
  cout << "\n\tA quantidade de homens e: " << qtdm;
  getch();

}


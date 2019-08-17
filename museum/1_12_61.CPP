#include <constream.h>
#include <math.h>

void main() {

  int aux, t1=0;
  float potencia=0, t2=0;

  clrscr();
  cout << "\n\tEste programa pesquisa os numeros com quatro algarismos";
  cout << "\n\tque possuem a peculiar caracteristica de ter seus dois primeiros";
  cout << "\n\tquando somados aos dois ultimos, resultar na potencia deste numero.";
  getch();

  clrscr();
  for(aux=1000; aux<9999; aux++){

    potencia=sqrt(aux);
    t1=aux/100;
    t2=(((float)aux/100)-t1)*(100);

    if(t1+t2==potencia){
      cout << "\n\tO numero " << aux << " possui tais caracteristicas.";
      getch();
    }
  }

  cout << "\n\n\tPesquisa concluida!";
  getch();
}
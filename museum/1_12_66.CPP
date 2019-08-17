#include <constream.h>
#include <math.h>

void main(){


  int aux, t2=0,t20=0, t30=0;
  float t1=0.0, t3=0.0, t4=0.0, x1=0.0, x2=0.0, raiz;

  clrscr();
  for(aux=0; aux<10000; aux++){

    raiz=sqrt(aux);

    if((aux==((int)raiz*raiz))){

      if(aux<=99){
	x1=aux/10;
	x2=(((float)aux/10)-x1)*10;

	if(x1==x2){
	  cout << "\n\tO numero " << aux << " possui estas caracteristicas.";
	  getch();
	}
      }

      if(aux>=100 && aux<=999){
	t1=aux/100;
	t2=(((float)aux/100)-t1)*10;
	t3=(((((float)aux/100)-t1)*10)-t2)*10;

	if(t1==t3){
	  cout << "\n\tO numero " << aux << " possui estas caracteristicas.";
	  getch();
	}
      }

      if(aux>=1000 && aux<= 9999) {
	t1=aux/1000;
	t20=(((float)aux/1000)-t1)*10;
	t30=(((((float)aux/1000)-t1)*10)-t20)*10;
	t4=(((((((float)aux/1000)-t1)*10)-t20)*10)-t30)*10;

	if(t1==t4 && t20==t30){
	  cout << "\n\tO numero " << aux << " possui estas caracteristicas.";
	  getch();
	}
      }
    }
  }

  cout << "\n\tPesquisa concluida!";
  getch();
}



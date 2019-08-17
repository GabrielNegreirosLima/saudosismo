#include <constream.h>


void main() {

    int aux, i=1, p=0;

    clrscr();
    for(aux=5000; aux<7000; aux++){

      for(i=1; i<=aux; i++){
	if(aux%i==0)
	  p+=1;
      }

      if(p==2){
	cout << "\n\tO numero " << aux << " e primo.";
	getch();
      }
      p=0;

    }

    cout << "\n\n\tPesquisa concluida!";
    getch();
}


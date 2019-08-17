#include <constream.h>

void main (){

  int aux, soma;

  clrscr();
  for(aux=1; aux<100; aux++){
    for(int i=1; i<aux; i++){

      if(aux%i==0)
	soma+=i;

      }
    if(soma==aux){
      cout << "\n\tO numero " << aux << " e um numero perfeito.";
      getch();
    }
    i=1;
    soma=0;
  }

  cout << "\n\tPesquisa concluida!";
  getch();
}
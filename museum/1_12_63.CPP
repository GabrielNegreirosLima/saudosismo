#include <constream.h>

void main(){

  int qtd=0, divisores[400];

  clrscr();
  for(int aux=9; aux<=100; aux++){

    cout << "\n\tO numero: " << aux << " possui os divisores: ";
    getch();
    for(int i=1; i<=aux; i++){

      if(aux%i==0){
	cout << "\n" << i;
	qtd++;
      }

    }
    cout << "\n\t\t\tQuantidade de termos: " << qtd;
    getch();
    qtd=0;
 }

  cout << "\n\tPesquisa completa!";
  getch();
}



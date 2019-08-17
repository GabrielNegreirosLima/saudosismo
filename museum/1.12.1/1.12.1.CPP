#include <constream.h>

void main() {

  int idade, idadet=0,qtd=0, aux;
  float media;

  clrscr();

  cout << "\n\t\tINICIAR PROGRAMA 1(S) - 0(N): ";
  cin >> aux;

  while(aux!=0){

      cout << "\n\tDigite a idade: ";
      cin >> idade;

      idadet+=idade;
      qtd++;
      cout << "\n\t\tDeseja continuar? 1(S) - 0(N): ";
      cin >> aux;

    }

    media=(idadet)/(qtd);

    cout << "\n\n\t\tA media e: " << media;
    getch();


}

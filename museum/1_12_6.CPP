#include  <constrean.h>

void main() {

  float massai, massaf;
  int segundos=0, min, hrs;

  clrscr();

  cout << "\n\tDigite a massa inicial: ";
  cin >> massai;

  massaf=massai;

  while(massaf>0.5){

    massaf=(massaf/2);
    segundos+=50;
  }

  min=(segundos/60);
  hrs=(min/60);
  segundos=(segundos%60);

  cout << "\n\tMassa inicial = " << massai;
  cout << "\n\tMassa final = " << massaf;
  cout << "\n\tTempo decorrido foi de " << hrs << " horas, " << min << " minutos, e " << segundos << " segundos.";

  getch();

}

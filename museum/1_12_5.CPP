#include <constream.h>

void main() {

  float pa=90000000, pb=200000000, taxaA, taxaB;
  int anos=0;

  taxaA=1.03;
  taxaB=1.015;

  clrscr();
  while(pa<pb){

    pa*=taxaA;
    pb*=taxaB;
    anos++;
  }

  cout << "\n\n\tForam precisos de " << anos << " anos para que o pais A ultrapassace o pais B.";
  getch();
}
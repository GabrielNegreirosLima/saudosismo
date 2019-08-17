#include <constream.h>

void main() {

  int s=0, den=1, num=37;

  clrscr();
  while(den<=37){

    s+=(num*(num+1))/den;
    num--;
    den++;
  }

  cout << "\n\tA soma e : " << s;
  getch();

}
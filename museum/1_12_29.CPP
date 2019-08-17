#include <constream.h>

void main() {

  int num=480, den=10, sinal=1;
  float s=0;

  clrscr();
  for(int i=0; i<4; i++){
    s+=(float)sinal*(num/den);
    sinal*=-1;
    num-=5;
    den++;
  }

  cout << "\n\tA soma e: " << s;
  getch();
}
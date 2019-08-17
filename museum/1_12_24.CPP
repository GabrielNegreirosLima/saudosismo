#include <constream.h>

void main() {

  int num=1, den=1;
  float s=0;

  clrscr();
  while(num<=99){
    s+=(float)(num/den);
    num+=2;
    den++;
  }

  cout << "\n\tA soma e: " << s;
  getch();
}


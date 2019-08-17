#include <constrean.h>

void main () {

  float c;
  int f;

  clrscr();
  for(f=50; f<=150; f++){

    c=(float)5/9*(f-32);
    cout << f<< " farenheit em C = " << c << '\n';
    getch();
  }
}
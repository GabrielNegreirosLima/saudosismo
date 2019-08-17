#include <constream.h>
#include <math.h>
#include <process.h>

void main() {

  float x=0, y;

  clrscr();
  while(x>=0){

    cout << "\n\n\tDigite o valor de X: ";
    cin >> x;

    if(x<0)
      exit(0);

    y=2.5*(cos(x/2));


    cout << "\n\tO valor de X e: "  << x;
    cout << "\n\tO valor de Y e: "  << y;
    getch();
  }
}
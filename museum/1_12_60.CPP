#include <constream.h>



void main() {

  int x, y, z,mdc=2;


  for(int i=0; i<=25; i++){
     clrscr();
     cout << "\n\tDigite os numeros para a operacao : ";
     cin >> x >> y >> z;

     while(x%mdc!=0 && y%mdc!=0 && z%mdc!=0)
       mdc++;

     cout << "\n\tX= " << x << " Y= " << y << " Z= " << z;
     cout << "\n\tO MDC entre esses numeros e: " << mdc;
     getch();
  }
}

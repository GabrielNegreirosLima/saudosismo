#include <constream.h>

void main(){

  int n=1, h, f, k, i=0;
  float x[255], y[255], y1;

  y[0]=1;

  clrscr();
  while(i<=1){
    while(n<=11){
      h=(x[n]-x[0])/n;

      y[n+1]=y[n]+(h*f*(x[n], y[n]));
      n++;
    }
    i++;
  }
  y1=x[n]*y[n];
  cout << "\n\tO valor da equacao e: " << y1;
  getch();
}
#include <constream.h>
#include <math.h>

/**************************************************************
 *							      *
 * Caro Gilmar, como nao consegui entender o enunciado e como *
 * nao tenho conhecimento de somatorio (procurei a materia na *
 * internet, mas mesmo assim nao consegui entender a logica), *
 * deixo aqui entao a logica e as equacoes que eu pude inter- *
 * pretar do programa, obrigado pela compreensao.             *
 *							      *
 **************************************************************/

void main(){

  float y, a, x, b, somatx, somaty, somatxy, somatx2, dr1, dr2, r, n;

  somatx=;
  somaty=;
  somatxy=;
  somatx2=;
  somaty2=;

  a=((n*somatxy)-(somatx*somaty))/(n*somatx2)-(pow(somatx, 2));
  b=((somaty*somatx2)-(somatx2*somatxy))/(n*somatx2)-(pow(somatx,2));

  dr1=n*somatx20-(pow(somatx));
  dr2=(n*somaty2)-pow(somaty);
  r=(n*somatxy)-(somatx*somaty)/(sqrt(dr1))*(sqrt(dr2));

  cout << "\n\tOs pares de pontos sao (" << x << ", " << y << ")";
  cout << "\n\tValor de A: " << a << " e o valor de B: " << b;
  cout << "\n\tA variacao R e: " << r;
  getch();
}





#include <constrean.h>

void main () {

 int flag, l10=0, l10a20=0, l20=0;
 float pc, pv, lucro, pct=0, pvt=0, lucrot=0;
 char produto[80];


 clrscr();
 cout << "\n\t\t\tDESEJA INICIAR 1(S) - 0(N)";
 cin >> flag;

 while(flag!=0){

   cout << "\n\n\tDigite o nome do produto: ";
   cin >> produto;


   cout << "\n\tDigite o preco de compra: ";
   cin >> pc;

   cout << "\n\tDigite o preco de venda: ";
   cin >> pv;

   lucro=pv-pc;

   if(lucro<(pc*0.1))
     l10++;

   if((lucro>=(pc*0.1))&& lucro<=(pc*0.2))
     l10a20++;

   if(lucro>(pc*0.2))
     l20++;

   pct+=pc;
   pvt+=pv;
   lucrot+=lucro;

   cout << "\n\t\t\tIncluir mais um produto? 1(S) - 0(N)";
   cin >> flag;

   }

   cout << "\n\n\tO preco total de compra e: " << pct;
   cout << "\n\n\tO preco total de venda e: " << pvt;
   cout << "\n\n\tO lucro total e: " << lucrot;
   getch();
}
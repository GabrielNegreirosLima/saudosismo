#include <constream.h>

void main(){

  char turma, pr;

  int a=0, alunos, porc_mais5=0, num_mat;

  float porc_a;

  for(int t=0; t<2; t++){

    clrscr();
    cout << "Digite a id da turma: ";
    cin >> turma;
    cout << "Digite o numero de alunos matriculados: ";
    cin >> alunos;

    for(int i=0; i<alunos; i++){

      cout << "\n\tDigite o numero de matricula: ";
      cin >> num_mat;
      cout << "\tDigite A ou P para ausente ou presente: ";
      cin >> pr;

      if(pr=='A')
	a++;
    }

    if (alunos==0)
      alunos=1;

    porc_a = (float) (100*a)/alunos;

    if (porc_a > alunos*0.05)
      porc_mais5++;

    cout << "Turma: " << turma << endl;
    cout << "A porcentagem de ausencia foi: " << porc_a << endl;
    getch();
  }
  cout << "A quantidade de turmas que tiveram porc_a superior a 5: " << porc_mais5 << endl;
  getch();
}
#include <constrean.h>

void main () {

  int matr[100], freq[100], notaf[100], aux=0, maiorn=0, menorn=100, reprov=0, mediat;
  float nota1, nota2, nota3, notat=0, porcen;

  clrscr();
  for(int i=0; i<100; i++){

    cout << "\n\n\n\tDigite o numero de matricula do aluno: ";
    cin >> matr[aux];

    cout << "\n\n\tDigite a 1 nota: ";
    cin >> nota1;

    cout << "\n\tDigite a 2 nota: ";
    cin >> nota2;

    cout << "\n\tDigite a 3 nota: ";
    cin >> nota3;

    cout << "\n\n\tDigite a frequencia: ";
    cin >> freq[aux];


    notaf[aux]=(float)(nota1+nota2+nota3)/3;

    if(notaf[aux]<menorn)
      menorn=notaf[aux];

    if(notaf[aux]>maiorn)
      maiorn=notaf[aux];

    notat+=notaf[aux];

    if((notaf[aux]<60)  && (freq[aux]<40))
      reprov++;

    aux++;
  }

  mediat=(notat)/100;
  porcen=(100*reprov)/100;

  for(int x=0; x<aux; x++){
    clrscr();
    cout << "\n\tAluno: " << matr[x];
    cout << "\nFrequencia: " << freq[x];
    cout << "\nNota : " <<(float) notaf[x];

    if((notaf[x]<60)  && (freq[x]<40))
      cout << "\nAluno Reprovado!";

    if((notaf[x]>=60) && (freq[x]>=40))
      cout << "\nAluno Aprovado!";

    getch();
  }

  cout << "\n\n\tA media da turma foi : " << mediat;
  getch();

  cout << "\n\n\tA menor nota foi : " << menorn;
  cout << "\n\tA maior nota foi : " << maiorn;
  getch();

  cout << "\n\n\tO total de alunos reprovados foi: " << reprov;
  cout << "\n\tA porcentagem de alunos reprovados por frequencia e: " << porcen << " por cento";
  getch();
}


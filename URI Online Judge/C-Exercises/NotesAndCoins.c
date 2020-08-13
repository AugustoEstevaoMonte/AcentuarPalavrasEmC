#include <stdio.h>
#define ERROR "The data inserted is invalid, please try again...\n"
double readValidMoney();
int main()
{
double money;
int notasDe100,notasDe50,notasDe20,notasDe10,notasDe5,notasDe2,restoDasNotas=0;
int restoDasMoedas=0,moedasDe1,moedasDe50,moedasDe25,moedasDe005,moedasDe001,moedasDe10,moedas=money,A;
money=readValidMoney();
notasDe100=money/100;
restoDasNotas=(money-notasDe100*100);
notasDe50=restoDasNotas/50;
restoDasNotas-=notasDe50*50;
notasDe20=restoDasNotas/20;
restoDasNotas-=notasDe20*20;
notasDe10=restoDasNotas/10;
restoDasNotas-=notasDe10*10;
notasDe5=restoDasNotas/5;
restoDasNotas-=notasDe5*5;
notasDe2=restoDasNotas/2;
restoDasNotas=-notasDe2*2;
printf("NOTAS:\n");
printf("%i nota(s) de R$ 100.00\n",notasDe100);
printf("%i nota(s) de R$ 50.00\n",notasDe50);
printf("%i nota(s) de R$ 20.00\n",notasDe20);
printf("%i nota(s) de R$ 10.00\n",notasDe10);
printf("%i nota(s) de R$ 5.00\n",notasDe5);
printf("%i nota(s) de R$ 2.00\n",notasDe2);
A = money * 100;

  restoDasMoedas = A % 100;
  moedasDe50 = restoDasMoedas / 50;
  printf("MOEDAS: \n");
  printf("%i moeda(s) de R$ 1.00\n",restoDasMoedas/100);
  printf("%i moeda(s) de R$ 0.50\n", moedasDe50);
  moedasDe25 = ((restoDasMoedas - (moedasDe50 * 50)) / 25);
  printf("%i moeda(s) de R$ 0.25\n", moedasDe25);
  moedasDe10 = ((restoDasMoedas - (moedasDe50 * 50) - (25 * moedasDe25)) / 10);
  printf("%i moeda(s) de R$ 0.10\n", moedasDe10);
  moedasDe005 = ((restoDasMoedas - (moedasDe50 * 50) - (25 * moedasDe25) - (10 * moedasDe10)) / 5);
  printf("%i moeda(s) de R$ 0.05\n", moedasDe005);
  moedasDe001 = ((restoDasMoedas - (moedasDe50 * 50) - (25 * moedasDe25) - (10 * moedasDe10) - (moedasDe005 * 5)) / 1);
  printf("%i moeda(s) de R$ 0.01\n", moedasDe001);



    return 0;
}

double readValidMoney()
{
    double money;
    do
    {

        printf("Digite aqui a quantia em reais: \n");
        scanf("%lf", &money);
        if (money < 0)
        {
            printf(ERROR);
        }
    } while (money < 0);
    return money;
}
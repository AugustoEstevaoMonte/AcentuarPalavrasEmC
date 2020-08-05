#include <stdio.h>
 
int main() {
 
int age,year,month,days;
scanf("%i",&age);
year=age/365;
month=(age%365)/30;
days=(age%365)%30;
printf("%i ano(s)\n",year);
printf("%i mes(es)\n",month);
printf("%i dia(s)\n",days);



    return 0;
}
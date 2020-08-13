#include <stdio.h>
 
int main() {
 
int x,cont,primeiraRep=0;
scanf("%i",&x);
if(x%2==0){
    primeiraRep=x+1;
    printf("%i\n",primeiraRep);
} else {
    primeiraRep=x;
    printf("%i\n",x);
}
for(cont=1; cont<=5 ; cont++){
    if(x%2==0){
        primeiraRep+=2;
        printf("%i\n",primeiraRep);
    } else if(x%2==1){
        primeiraRep+=2;
        printf("%i\n",primeiraRep);
    }
}
    return 0;
}
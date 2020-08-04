main(){
int cont,fibo,fibo2,resul;
fibo=1;
fibo2=1;
for(cont=3; cont<=20; cont++){
resul=fibo+fibo2;
fibo=fibo2;
fibo2=resul;
printf("O fibo %i\n",fibo);
	
}
	
	
	
	
	
	
	
	
	return 0;
}

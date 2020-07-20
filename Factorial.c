#define ERROR "The value insert is invalid, please try again...\n"
int readValidNumbersFactorial();
int calculateFactorial(int ValueFactorial);

main() {
	int factorial,ValueFactorial,count;
	ValueFactorial=readValidNumbersFactorial();
	factorial=calculateFactorial(ValueFactorial);
	system("cls");
	printf("%i!= %i\n",ValueFactorial,factorial);


	return 0;
}

int readValidNumbersFactorial() {
	int ValueFactorial;
	do {

		printf("Enter here one number to calculate a fatorial: \n");
		scanf("%i",&ValueFactorial);
		if(ValueFactorial<0) {
			printf(ERROR);
		}
	} while(ValueFactorial<0);
	return ValueFactorial;
}
int calculateFactorial(int ValueFactorial) {
	int factorial,count;
	factorial=1;
	for(count=1; count<=ValueFactorial; count++) {
		factorial=factorial*count;
	}
	return factorial;
}

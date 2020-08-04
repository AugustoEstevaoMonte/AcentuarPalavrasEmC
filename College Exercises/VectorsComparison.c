//Made by Augusto Estevão Monte
float readValidSalary(float salary[],int ind);
float classifyBiggerSalary(float salary[],int ind,float *bigger);
float classifySmallerSalary(float salary[], int ind, float *smaller);
#define LIM 100
#define ERROR "The data insert is invalid, please try again...\n"
main() {

	int matricula[LIM],ind;
	float salary[LIM],bigger,smaller;

	for(ind=0; ind<10; ind++) {
		matricula[ind]=leValidaMat(matricula,ind);
	}
	for(ind=0; ind<10; ind++) {
		salary[ind]=readValidSalary(salary,ind);
		bigger=classifyBiggerSalary(salary,ind,&bigger);
		smaller=classifySmallerSalary(salary,ind,&smaller);
	}
	system("cls");
	printf("============================================\n");
	printf("The bigger salary in the company:  %0.2f\n",bigger);
	printf("============================================\n");
	printf("The smaller salary in the company:  %0.2f\n",smaller);
	printf("============================================\n");





	return 0;
}

int leValidaMat(int matricula[],int ind) {
	int mat,ind2,flagValida;
	{
		do {
			flagValida=0;
			printf("Enter here the registration: %c%i: \n",248,ind+1);
			scanf("%i",&mat);
			if(mat<0) {
				printf(ERROR);
				flagValida=1;
			} else {
				for(ind2=0; ind2<ind; ind2++) {
					if(mat==matricula[ind2]) {
						printf(ERROR);
						flagValida=1;
						break;
					}
				}
			}
		} while(mat<0 || flagValida==1);
		return(mat);
	}
}

float readValidSalary(float salary[],int ind) {
	float sala;
	do {

		printf("Enter here your salary n%c%i: \n",248,ind+1);
		scanf("%f",&sala);
		if(sala<0) {
			printf(ERROR);
		}
	} while(sala<0);
	return(sala);


}

float classifyBiggerSalary(float salary[],int ind,float *bigger) {
	*bigger=salary[0];
	if(salary[ind]>*bigger) {
		*bigger=salary[ind];
	}
	return(*bigger);


}

float classifySmallerSalary(float salary[], int ind, float *smaller) {

	*smaller=salary[0];

	if(*smaller>salary[ind]) {
		*smaller=salary[ind];
	}

	return(*smaller);
}

#define MAX 20
#define LI 20
#define ERROR "The given away insert is invalid, please try again...\n"
void readValidLinesAndColumns(int *line1, int *line2, int *column1, int *column2);
void readValidMatrixA(float matrizA[MAX][LI], int line1, int column1);
void readValidMatrixB(float matrizB[MAX][LI], int line2, int column2);
int typeOfOperation();
void resultOfMatrix(float matrizA[MAX][LI], float matrizB[MAX][LI], float matrizC[MAX][LI], int line1, int column2, int receiveOperation);
void showResultOfMatrix(float matrizC[MAX][LI], int line1, int column2);
main()
{
	int line1, line2, column1, column2, receiveOperation;
	float matrizA[MAX][LI], matrizB[MAX][LI], matrizC[MAX][LI];
	readValidLinesAndColumns(&line1, &line2, &column1, &column2);
	system("cls");
	readValidMatrixA(matrizA, line1, column1);
	system("cls");
	readValidMatrixB(matrizB, line2, column2);
	system("cls");
	receiveOperation = typeOfOperation();
	system("cls");
	resultOfMatrix(matrizA, matrizB, matrizC, line1, column2, receiveOperation);
	showResultOfMatrix(matrizC,line1,column2);

	return 0;
}
void readValidLinesAndColumns(int *line1, int *line2, int *column1, int *column2)
{
	do
	{

		printf("how many lines is there Matrix A: \n");
		scanf("%i", line1);
		if (*line1 < 0)
		{
			printf(ERROR);
		}
	} while (*line1 < 0);
	do
	{

		printf("how many columns is there Matriz A: \n");
		scanf("%i", column1);
		if (*column1 < 0)
		{
			printf(ERROR);
		}
	} while (*column1 < 0);
	do
	{

		printf("how many lines is there Matriz B: \n");
		scanf("%i", line2);
		if (*line2 < 0)
		{
			printf(ERROR);
		}
	} while (*line2 < 0);
	do
	{

		printf("how many columns is there matriz B: \n");
		scanf("%i", column2);
		if (*column2 < 0)
		{
			printf(ERROR);
		}
	} while (*column2 < 0);
}

void readValidMatrixA(float matrizA[MAX][LI], int line1, int column1)
{
	int linhaMatrizA, colunaMatrizA;
	for (linhaMatrizA = 0; linhaMatrizA < line1; linhaMatrizA++) //repeat for each line entered...
	{
		for (colunaMatrizA = 0; colunaMatrizA < column1; colunaMatrizA++) //repeat for each columns entered...
		{
			printf("Digite aqui a matriz A [%d][%d]: \n ", linhaMatrizA + 1, colunaMatrizA + 1);
			scanf("%f", &matrizA[linhaMatrizA][colunaMatrizA]);
		}
	}
}

void readValidMatrixB(float matrizB[MAX][LI], int line2, int column2)
{
	int linhaMatrizB, colunaMatrizB;
	for (linhaMatrizB = 0; linhaMatrizB < line2; linhaMatrizB++)
	{
		for (colunaMatrizB = 0; colunaMatrizB < column2; colunaMatrizB++)
		{
			printf("Digite aqui a matriz B [%d][%d]: \n ", linhaMatrizB + 1, colunaMatrizB + 1);
			scanf("%f", &matrizB[linhaMatrizB][colunaMatrizB]);
		}
	}
}
int typeOfOperation()
{
	int operation;
	do
	{

		printf("Enter here the operation of Matrix....\n");
		printf("======================================\n");
		printf("[1]-Sum\n");
		printf("[2]-Subtraction\n");
		printf("======================================\n");
		scanf("%i", &operation);
		if (operation < 0 || operation > 2)
		{
			printf(ERROR);
		}
	} while (operation < 0 || operation > 2);
	return operation;
}

void resultOfMatrix(float matrizA[MAX][LI], float matrizB[MAX][LI], float matrizC[MAX][LI], int line1, int column2, int receiveOperation)
{
	if (receiveOperation == 1)
	{

		int linhaMatrizC, colunaMatrizC;
		for (linhaMatrizC = 0; linhaMatrizC < line1; linhaMatrizC++)
		{
			for (colunaMatrizC = 0; colunaMatrizC < column2; colunaMatrizC++)
			{
				matrizC[linhaMatrizC][colunaMatrizC] = matrizA[linhaMatrizC][colunaMatrizC] + matrizB[linhaMatrizC][colunaMatrizC];
			}
		}
	}
	if (receiveOperation == 2)
	{
		int linhaMatrizC, colunaMatrizC;
		for (linhaMatrizC = 0; linhaMatrizC < line1; linhaMatrizC++)
		{
			for (colunaMatrizC = 0; colunaMatrizC < column2; colunaMatrizC++)
			{
				matrizC[linhaMatrizC][colunaMatrizC] = matrizA[linhaMatrizC][colunaMatrizC] - matrizB[linhaMatrizC][colunaMatrizC];
			}
		}
	}
}

void showResultOfMatrix(float matrizC[MAX][LI], int line1, int column2)
{
	int lineResult, columnsResult;
	for (lineResult = 0; lineResult < line1; lineResult++)
	{
		for (columnsResult = 0; columnsResult < column2; columnsResult++)
		{
			printf("%0.1f", matrizC[lineResult][columnsResult]);  //Show the result of Matrix
			
		}
		printf("\n\n");
	}
}
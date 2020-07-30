#define MAX 20
#define LI 20
#define ERROR "The given away insert is invalid, please try again...\n"
void leValidaLinhasEcolunas(int *linha1, int *linha2, int *coluna1, int *coluna2);
void leValidaMatrizA(float matrizA[MAX][LI], int linha1, int coluna1);
void leValidaMatrizB(float matrizB[MAX][LI], int linha2, int coluna2);
int typeOfOperation();
main()
{
	int linha1, linha2, coluna1, coluna2,receiveOperation;
	float matrizA[MAX][LI], matrizB[MAX][LI], matrizC[MAX][LI];
	leValidaLinhasEcolunas(&linha1, &linha2, &coluna1, &coluna2);
	leValidaMatrizA(matrizA, linha1, coluna1);
	leValidaMatrizB(matrizB, linha2, coluna2);
    receiveOperation=typeOfOperation();
	return 0;
}
void leValidaLinhasEcolunas(int *linha1, int *linha2, int *coluna1, int *coluna2)
{
	do
	{

		printf("Digite aqui a primeira linha da Matriz A: \n");
		scanf("%i", linha1);
		if (*linha1 < 0)
		{
			printf(ERROR);
		}
	} while (*linha1 < 0);
	do
	{

		printf("Digite aqui a primeira coluna da Matriz A: \n");
		scanf("%i", coluna1);
		if (*coluna1 < 0)
		{
			printf(ERROR);
		}
	} while (*coluna1 < 0);
	do
	{

		printf("Digite aqui a primeira linha da Matriz B: \n");
		scanf("%i", linha2);
		if (*linha2 < 0)
		{
			printf(ERROR);
		}
	} while (*linha2 < 0);
	do
	{

		printf("Digite aqui a primeira coluna da matriz B: \n");
		scanf("%i", coluna2);
		if (*coluna2 < 0)
		{
			printf(ERROR);
		}
	} while (*coluna2 < 0);
}

void leValidaMatrizA(float matrizA[MAX][LI], int linha1, int coluna1)
{
	int linhaMatrizA, colunaMatrizA;
	for (linhaMatrizA = 0; linhaMatrizA < linha1; linhaMatrizA++)
	{
		for (colunaMatrizA = 0; colunaMatrizA < coluna1; colunaMatrizA++)
		{
			printf("Digite aqui a matriz A [%d][%d]:\n ", linhaMatrizA + 1, colunaMatrizA + 1);
			scanf("%f", &matrizA[linhaMatrizA][colunaMatrizA]);
		}
	}
}

void leValidaMatrizB(float matrizB[MAX][LI], int linha2, int coluna2)
{
	int linhaMatrizB, colunaMatrizB;
	for (linhaMatrizB = 0; linhaMatrizB < linha2; linhaMatrizB++)
	{
		for (colunaMatrizB = 0; colunaMatrizB < coluna2; colunaMatrizB++)
		{
			printf("Digite aqui a matriz B [%d][%d]:\n ", linhaMatrizB + 1, colunaMatrizB + 1);
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
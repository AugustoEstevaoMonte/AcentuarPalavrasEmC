//Algoritmo criado em C por Augusto Estevão Monte
#define MAX 20
#define LI 20
#define ERROR "The data insert is invalid, please try again...\n"
main()
{
	int A[MAX][LI], line3, column3, B[MAX][LI], C[MAX][LI],line1, columns1, line2, columns2;

	do
	{
		printf("Enter here the lines of matrix A: \n");
		scanf("%i", &line1);
		if (line1 < 0)
		{
			printf(ERROR);
		}
	} while (line1 < 0);
	do
	{

		printf("Enter here the columns of matrix A: \n");
		scanf("%i", &columns1);
		if (columns1 < 0)
		{
			printf(ERROR);
		}
	} while (columns1 < 0);
	do
	{
		printf("Enter here the lines of matrix B: \n");
		scanf("%i", &line2);
		if (line2 < 0)
		{
			printf(ERROR);
		}
	} while (line2 < 0);
	do
	{
		printf("Enter here the columns of matrix B: \n");
		scanf("%i", &columns2);
		if (columns2 < 0)
		{
			printf(ERROR);
		}
	} while (columns2 < 0);

	
	for (line3 = 0; line3 < 3; line3++)
	{
		for (column3 = 0; column3 < 3; column3++)
		{
			printf("%d ", C[line3][column3]);
		}
		printf("\n\n");
	}

	return 0;
}

void readValidMatrixA(int A[3][3], int line1, int column1)
{
	for (line1 = 0; line1 < 3; line++)
	{
		for (column = 0; column < 3; column++)
		{
			printf("Enter here the Matrix A [%d][%d]\n: ", line, column);
			scanf("%i", &A[line][column]);
		}
	}
}

void readValidMatrixB(int B[3][3], int line, int column)
{
	for (line = 0; line < 3; line++)
	{
		for (column = 0; column < 3; column++)
		{
			printf("Enter here the matrix  B [%d][%d]\n: ", line, column);
			scanf("%i", &B[line][column]);
		}
	}
}

void somaMatAeB(int A[3][3], int B[3][3], int C[3][3], int line, int column)
{
	for (line = 0; line < 3; line++)
	{
		for (column = 0; column < 3; column++)
		{
			C[line][column] = A[line][column] - B[line][column];
		}
	}
}

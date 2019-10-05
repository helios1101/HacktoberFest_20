#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{

	int A[4][4] = {{0,1,0,1}, {1,0,1,1}, {0,0,0,1}, {1,0,1,0}};
	int P[4][4] = {0};

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if(A[i][j] == 0)
				P[i][j] = 0;
			else 
				P[i][j] = 1;
		}
		
	}

	for (int k = 0; k < 4; ++k)
	{
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				P[i][j] = P[i][j] || (P[i][k] && P[k][j]);


			}
		}
		
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%d  ", P[i][j] );
		}
		printf("\n");
		
	}


	return 0;
}
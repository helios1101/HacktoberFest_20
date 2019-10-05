#include<stdio.h>
#include<stdlib.h>

int minimum(int a, int b)
{
	if(a < b)
		return a;
	else 
		return b;
}
int main(int argc, char const *argv[])
{

	int W[4][4] = {{7,5,0,0}, {7,0,0,2}, {0,3,0,0}, {4,0,1,0}};
	int Q[4][4] = {0};

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if(W[i][j] == 0)
				Q[i][j] = 10000000;
			else 
				Q[i][j] = W[i][j];
		}
		
	}

	for (int k = 0; k < 4; ++k)
	{
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				Q[i][j] = minimum(Q[i][j] , (Q[i][k] + Q[k][j]) );


			}
		}
		
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%d  ", Q[i][j] );
		}
		printf("\n");
		
	}


	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int partition(int arr[], int low, int up){

	int temp = 0, i = 0, j = 0, pivot = 0;

	i = low + 1;
	j = up;
	pivot = arr[low];

	while(i <= j){

		while(arr[i] < pivot && i < up) i++;

		while(arr[j] > pivot) j--;

		if(i < j){

			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;

			i++;
			j--;
		}

		else i++;


	}

	arr[low] = arr[j];
	arr[j] = pivot;

	return j;

}

void quick(int arr[], int low, int up){

	int pivotloc = 0;

	if(low >= up ) return;

	pivotloc = partition(arr, low, up);

	quick(arr, low, pivotloc - 1);
	quick(arr, pivotloc + 1, up);

}

int main(int argc, char const *argv[])
{
	int n = 0;
	printf("Enter the number of elements:\n");
	scanf("%d", &n);
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d", &arr[i]);
	}

	quick(arr, 0, n - 1);

	for (int i = 0; i < n; ++i)
	{
		printf(" %d ", arr[i] );
		/* code */
	}
	return 0;
}
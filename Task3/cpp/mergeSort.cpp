Q. Merge Sort
Sol.
#include <bits/stdc++.h> //Header File that contains all Header Files
using namespace std;
#define ll long long
void mergeFunction(ll array[],ll beginOfTheArray, ll mid, ll endOfTheArray){
	ll newArray[endOfTheArray - beginOfTheArray + 1];
	ll indexForTheNewArray = 0;
	ll copyBegin = beginOfTheArray, copyMid = mid + 1;
	for(ll i = beginOfTheArray; i <= endOfTheArray; i++){
		if (copyBegin > mid){
			newArray[indexForTheNewArray++] = array[copyMid++];
		}
		else if(copyMid > endOfTheArray){
			newArray[indexForTheNewArray++] = array[copyBegin++];
		}
		else if (array[copyBegin] < array[copyMid]){
			newArray[indexForTheNewArray++] = array[copyBegin++];
		}
		else{
			newArray[indexForTheNewArray++] = array[copyMid++];
		}
	}
	for(ll i= 0; i < indexForTheNewArray; i++){
		array[beginOfTheArray++] = newArray[i];
	}
}

void mergeSort(ll array[],ll beginOfTheArray,ll endOfTheArray){
	if(beginOfTheArray<endOfTheArray){
		ll mid = (endOfTheArray - beginOfTheArray)/2 + beginOfTheArray;
		mergeSort(array, beginOfTheArray,mid);  //Sort the left part of the array in Ascending Order
		mergeSort(array,mid+1,endOfTheArray);   //Sort the Right part of the array in Ascending Order
		mergeFunction(array,beginOfTheArray,mid,endOfTheArray); //Merge both the sorted parts of the array
	}
}
//Main Function - From here the execution of the program begins
int main(){
	ll sizeOfTheArray;
	cout<<"Enter number of elements to be sorted:\n";
	cin>>sizeOfTheArray;
	ll array[sizeOfTheArray];
	cout<<"Enter elements one by one:\n";
	for(ll i = 0 ; i < sizeOfTheArray ; i++){
		cin>>array[i];
	}
	mergeSort(array,0,sizeOfTheArray-1);
	cout<<"Sorting is done.\n";
	cout<<"------------------------------------------------------\n";
	cout<<"After Sorting:\n";
	for(ll i=0 ; i < sizeOfTheArray ; i++){
		cout<<array[i]<<" ";
	}
	cout<<"\n";
	return 0;
}

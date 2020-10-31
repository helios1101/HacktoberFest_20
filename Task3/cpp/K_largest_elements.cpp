#include <bits/stdc++.h>

using namespace std;
class Solution{

public:
    void swap(int* a,int* b)
    {
        int temp = *a;
        *a=*b;
        *b=temp;
    }

public:
    void max_heapify(int a[],int n,int i){
        int largest=i;
        int l=2*i+1;
        int r=2*i+2;

        if(l<n&&a[l]>a[largest])
        largest=l;

        if(r<n&&a[r]>a[largest])
        largest=r;

        if(i!=largest){
            swap(&a[i],&a[largest]);
            max_heapify(a,n,largest);
        }
    }
public:
	vector<int> kLargest(int arr[], int n, int k) {

	   for(int i=n/2-1;i>=0;i--)
	        max_heapify(arr,n,i);

	   vector<int>kl;

	   for(int i=n-1;i>=n-k;i--)
	   {
	       kl.push_back(arr[0]);
	       swap(&arr[0],&arr[i]);
	       max_heapify(arr,i,0);
	   }
	  return kl;
	}

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

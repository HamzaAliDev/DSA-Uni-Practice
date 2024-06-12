#include <iostream>
using namespace std;
int main (){
	int n;
	cout<<"Enter the length of Array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter values in Array: ";
	for(int m=0; m<n; m++){
		cin>>arr[m];
	}
	
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[i]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout<<"Sorting array by Selection Sort: "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

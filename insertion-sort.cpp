#include <iostream>
using namespace std;
int main(){
	int n ;
	cout<<"Enter length of array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter values in Array: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
//	Insertion sort
	for(int i=1; i<n; i++){
		int current = arr[i];
		int j = i-1;
		while(arr[j] > current && j>=0){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = current;
	}
	
	cout<<"Sorting array by insertion sort: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

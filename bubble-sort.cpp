#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter length of array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter values in Array: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
//	bubble sort
	int count = 1;
	int temp;
	while(count < n){
		for(int i=0; i< n-count; i++){
			if(arr[i] > arr[i + 1])
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
		count++;
	}
	
	cout<<"Array sorted by Bubble sort: ";
	for(int i= 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

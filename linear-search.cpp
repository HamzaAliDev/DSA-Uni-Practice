#include <iostream>
using namespace std;

int linearSearch(int arrayLength, int arr[], int key){
	for(int i=0; i<arrayLength; i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}

int main(){
	int arrayLength;
	cout<<"Enter length of array: ";
	cin>>arrayLength;
	
	int arr[arrayLength];
	cout<<"Enter values in Array";
	for(int i=0; i< arrayLength; i++){
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter Value you Want to Search in Array: ";
	cin>>key;
	
	int result = linearSearch(arrayLength, arr, key);
	cout<<"By Linear Search the location is: "<<result;
	
	return 0;
}

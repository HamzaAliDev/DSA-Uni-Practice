#include <iostream>
using namespace std;

int binarySearch(int length, int arr[], int key){
	int start = 0;
	int end = length;
	while(start <= end){
		int mid = (start + end)/2;
		if(arr[mid] == key){
			return mid;
		}else if(arr[mid] > key){
			end = mid - 1;
		}else{
			start = mid + 1;
		}
	}
	return -1;
}

int main(){
	int arrayLength;
	cout<<"Enter length of array: ";
	cin>>arrayLength;
	
	cout<<"Enter values in array but is sorted form: ";
	int arr[arrayLength];
	for(int i=0; i<arrayLength; i++){
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter number you want to search: ";
	cin>>key;
	
	int result = binarySearch(arrayLength, arr, key);
	cout<<"By using Binary Search the location of number is: "<< result;
	
	return 0;
}

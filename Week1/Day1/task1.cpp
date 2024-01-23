#include <iostream>
using namespace std;
int main(){

	const size_t size=5;
	int arr[size];

	for(int i=0;i<size;++i){
		cin >> arr[i];
	}
	int min = arr[0];

	for(int i =1;i<size;++i){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<< min;
	return 0;
}

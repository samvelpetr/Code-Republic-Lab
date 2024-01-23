#include <iostream>

using namespace std;

int main() {
	const size_t size =5;
	int arr[size];
	int  max,min;

	for(int i=0;i<size;++i){
		cin>>arr[i];
	}

	max =0;
	min=0;
	for(int i = 1; i < size; ++i){
		if(arr[i] > arr[max]){
			max=i;
		}
		if(arr[i]<arr[min]){
			min=i;
		}	
	}


	cout << max <<endl;
	cout << min;
	return 0;
}

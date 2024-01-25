#include <iostream>

int main(){
	const size_t size = 6;
	int arr[size];
	int minIndex = 0; 
	int maxIndex = 0;

	for(int i = 0; i < size; ++i){

		std::cin >> arr[i];
		if(arr[i] >= arr[maxIndex]){
			maxIndex = i;
		}
		if(arr[i] <= arr[minIndex]){
			minIndex = i;
		}

	}
	std::cout << maxIndex- minIndex;
	return 0;
}

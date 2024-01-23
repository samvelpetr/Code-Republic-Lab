#include <iostream>

using namespace std;

int main() {
	const size_t size =6;
	int arr[size],min,max;

	for(int i =0;i < size; ++i){
		cin >>arr[i];
	}

	min=arr[0];
	max=arr[0];

	for(int i=1;i<size;++i){
		if(arr[i] > max){
			max =arr[i];
		}
		if (arr[i] <min){
			min =arr[i];
		}
	}
	cout << min+max;
	return 0;


}

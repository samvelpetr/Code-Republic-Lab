#include <iostream>

using namespace std;

int main(){
	const size_t size =5;
	int arr1[size];
	int arr2[size];
	int sumArr[size];

	for(int i =0;i<size;++i){
		cin >> arr1[i];
	}

	for(int i =0; i<size; ++i){
		cin >>arr2[i];
	}

	for(int i =0;i<size;++i){
		sumArr[i]= arr1[i] *arr2[i];
		cout << sumArr[i] << endl;
	}
	return 0;
}

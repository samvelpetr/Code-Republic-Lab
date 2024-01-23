#include <iostream>

using namespace std;

int main(){
	const size_t size=5;
	int arr[size];

	for(int i =0;i<size;++i){
		cin >> arr[i];
	}

	for(int i= size - 1; i >= 0;--i){
		cout <<arr[i];
	}
	return 0;
}

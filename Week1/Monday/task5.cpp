#include <iostream>

using namespace std;

int main() {
	const size_t size =5;
	int arr[size];

	for(int i =0;i<size;++i){
		cin >> arr[i];
		arr[i]/= size;
	}
	
	for(int i =0;i < size; ++i){
		cout << arr[i];
}

}

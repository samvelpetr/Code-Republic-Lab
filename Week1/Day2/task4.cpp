#include <iostream>

using namespace std;

int main() {
	
	const size_t size = 10;
	char arr[size];
	cin >> arr;
	
	for(int i = 0; arr[i] != '\0'; ++i){
		if( arr[i] >= '0' && arr[i] <= '9'){
			cout << arr[i];
		}
	}
	return 0;
}

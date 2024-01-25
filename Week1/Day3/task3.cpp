#include <iostream>

int main(){
	const size_t size =10;

	char arr[size];

	std::cin >> arr;
	for(int i =0; arr[i] != '\0';++i){

		if(arr[i] >='a' && arr[i] <='z'){
			arr[i]= arr[i]-32;
}
	}
	std::cout << arr;
	return 0;
}

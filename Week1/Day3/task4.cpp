#include <iostream>

int main(){
	const size_t size =10;
	char arr[size];
	std::cin >>arr;
	int value=0;
	for(int i =0; arr[i] != '\0';++i){
		++value;
	}
	std::cout << value;
	for(int i =0; i < (value/2);++i){
		char temp = arr[i];
		arr[i]= arr[value-i-1];
		arr[value-i-1]= temp;
	}
	std::cout << arr;
	return 0;
}

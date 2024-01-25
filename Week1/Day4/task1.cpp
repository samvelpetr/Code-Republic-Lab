#include <iostream>

void func1(int num){
	for (int i =0; i<num;++i){
		std::cout << i;
	}
}

int main(){
	int num =0;

	std::cin >> num;
	
	func1(num);

	return 0;
}

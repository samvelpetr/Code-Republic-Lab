#include <iostream>

	
int foo(int num){
	if(num == 0){
		return num;

	}
	
	return num %10 + foo(num/10);
}


int main(){
	int num = 0;
	std::cin >> num;

	std::cout << foo(num);
}

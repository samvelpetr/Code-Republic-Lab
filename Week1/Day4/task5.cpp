#include <iostream>

int foo(int num){
	int sum =1;

	for(int i = 1; i<= num; ++i){
		sum *= i;
	}
	return sum;
}

int main(){
	int num =0;
	std::cin >>num;
	std::cout << foo(num);

}

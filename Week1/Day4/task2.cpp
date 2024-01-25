#include <iostream>

int fib(int num){
	int value1 = 0;
	int value2 = 1;
	for(int i =0; i <=  num-1; ++i){
		value1+= value2;
		int temp = value2;
		value2 =value1;
		value1 =temp;
	}
	return value1;
}


int main(){
	int num =0;
	std::cin >> num;
	std::cout << fib(num);
}

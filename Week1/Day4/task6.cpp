#include <iostream>

int foo(int num){

	int sum = 0;

	while(num !=0){
		sum += num % 10;
		num = num /10;
		
	} 
	return sum;
}


int main(){
	int num =0;
	std::cin >> num;
	std::cout << foo(num);
}

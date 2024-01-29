#include <iostream>


void  foo(int n){

	if(n == 0){
		std::cout << n;
		return ;
	}
	std::cout << n;
	foo(n-1);
	
}

int main(){
	int num = 10;
	foo(num);

}

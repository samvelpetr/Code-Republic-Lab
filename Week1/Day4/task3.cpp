#include <iostream>

void foo(int num){

	for (int i = 0; i<10; ++i){
		std::cout << i << " * "<< num <<" = " << i*num <<std::endl ;
	}
	

}

int main(){
	int num =0;

	std::cin >>num;
	foo(num);	


}

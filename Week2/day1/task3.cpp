#include <iostream>

int foo(int num1, int num2){
	
	if(num1==0){
		return num2;
	}
	else if(num2 == 0){
		return num1;
	}
	else if(num1 >num2){
		return foo(num1 % num2,num2);
	}	
	else {
		return foo(num1, num2 % num1);
	}



}



int main(){
	int num1 = 20;
	int num2 =40;
	
	std::cout<<foo(num1, num2);
}

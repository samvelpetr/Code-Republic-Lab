#include <iostream>


bool foo(int num){
	bool parz =true;
	if(num == 1){
		return false;
	}
	for(int i =2; i<num; ++i){
		if(num % i ==0){
			parz = false;
		}
	}
	
	return parz;

}

int foo2(int value){

	for(int i =1;i < value/2; ++i){
		if(foo(i) && foo(value-i)){
			return 1;
		}
	}
 	return 0;
}




int main(){
	int num =0;

	std::cin >> num;
	 std::cout <<  foo2(num);

}

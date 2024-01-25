#include <iostream>

int main(){
	const size_t size =5;
	int arr[size];
	int sum=0;
	
	for(int i =0;i<size;++i){
		std::cin >> arr[i];

		if(arr[i] %2 !=0){
			sum+= arr[i];
		}
		
	}
	std::cout <<sum;

}

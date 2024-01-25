#include <iostream>

int main(){
	const size_t size= 7;
	int arr[size];
	
	for(int i = 0; i< size; ++i){
	std::cin >> arr[i];
	}

	for(int i = 0; i< size; ++i){
		for(int j =i+1; j< size; ++j){
			if(arr[i] %2 !=0 && arr[j]%2 ==0 ){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;		
			}	
		}
		 
	}


	for(int i =0; i< size;++i){
		std::cout << arr[i];
	}
	return 0;
}

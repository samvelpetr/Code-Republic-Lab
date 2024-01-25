#include <iostream>

int main(){
	const size_t size=5;
	int arr[size];

	int value= 0;
	for(int i = 0; i< size; ++i){
		std::cin >> arr[i];
		if(arr[i]%2 !=0){
			++value;
}		
	}
	std::cout << value;
	return 0;
}

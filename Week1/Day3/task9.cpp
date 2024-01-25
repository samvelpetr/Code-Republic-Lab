#include <iostream> 

int main(){
	const size_t size1 = 5;
	int arr1[size1];
	const size_t size2 = 4;
	int arr2[size2];

	for(int i = 0; i < size1; ++i){
		std::cin >> arr1[i];

	} 
	for (int i = 0; i < size2; ++i){
		std::cin >> arr2[i];
	}
	bool arajin = false;
	for (int i = size1 -1;i >= 0; --i){
		if (!arajin){
			std::cout << arr1[i];
		}
		if(i == 0 && !arajin){
			i = size2;
			arajin =true;
			continue;
		}
		if(arajin){
			std::cout << arr2[i];
		}
	}
	return 0;
}

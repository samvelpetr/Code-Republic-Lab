#include <iostream>

int main(){
	int arr1[] = {1,2,3};
	int arr2[] = {4,5,6};
	bool arajin = false;

	for(int i = 0; i < 3; ++i){
		if(!arajin){
			std::cout << arr1[i];
		}
		if(i ==2 && !arajin){
			arajin = true;
			i=0;		
		}
		if(arajin){
			std::cout << arr2[i];
			if(i==2){
				break;
			}
		}
	
	}
	std::cout << static_cast<char>(1) << "\t";
}

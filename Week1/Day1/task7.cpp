#include <iostream>

using namespace std;

int main() {
	const size_t size=5;

	int arr[size];

	bool parze=false;

	for(int i =0;i< size;++i){
		cin >>arr[i];
	
	}
	for(int i=0;i<size;i++){
	for(int j=2;j<arr[i];j++){
			if(arr[i] %j ==0){
				parze= true;
			}

		}
		if(!parze){
			cout <<arr[i];
		}else{
		parze=false;
}
	}
	
	return 0;
}

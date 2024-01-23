#include <iostream>

using namespace std;

int main(){
	const size_t size =5;
	int num1;
	int arr[size];
	bool isInArr=false;
	cin >> num1;

	for(int i =0; i < size; ++i){
		cin >> arr[i];	
	}
	for(int i = 0; i < size; ++i){
		if(arr[i]==num1){
			isInArr=true;
			break;	
		}
	}
	if(isInArr){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
	return 0;
}

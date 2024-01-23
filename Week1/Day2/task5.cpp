#include <iostream>

using namespace std;

int main(){
	const size_t size =20;
	char arr[size];
	cin >> arr;
	
	for(int i = 0; arr[i] != '\0'; ++i){
		for(int j = i+1;j != '\0'; ++i){
			if(arr[i] == arr[j]){
				arr[j]=arr[j+1];
			}

		}
	
	}
	cout <<arr;
	return 0;
}

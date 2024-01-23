#include <iostream>

using namespace std;

int main(){
	const size_t size =5;
	int arr[size];
	int sum=0;

	for(int i = 0; i < size; ++i){
		cin >> arr[i];
		sum+=arr[i];
	}
	cout << sum/size;
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	const size_t size =5;
	int sum1=0;
	int sum2=1;
	int arr[size];

	for(int i =0; i <size; ++i){

		cin >>arr[i];
		sum1 += arr[i];
		sum2 *= arr[i];

}
	cout << "Sum1 = "<< sum1 << "Sum2 =" <<sum2;

	return 0;
}

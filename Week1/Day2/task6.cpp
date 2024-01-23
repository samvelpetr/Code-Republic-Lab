#include  <iostream>
using  namespace std;
int main(){
    const size_t size =15;
    char arr[size];
    cin >> arr;
    cout << sizeof(arr);
    for(size_t i =0; arr[i] != '\0';++i){
        int value=0;
        for(size_t j =i+1; arr[j] != '\0'; ++j){
            if(arr[i] == arr[j]){
                arr[j]= ' ';
                ++value;
            }
        }
        if(value!=0){
            arr[i]= ' ';
        }
    }
    for(size_t i = 0; arr[i] != '\0';++i){
         
        if(arr[i] == ' '){
            for(size_t j = i + 1; arr[j] != '\0'; ++j){
                if(arr[j] != ' '){
               
                arr[i]= arr[j];
                arr[j] = ' ';
                break;
                }
            }
        cout << arr << "\n";

        }
    }
    return 0;
}

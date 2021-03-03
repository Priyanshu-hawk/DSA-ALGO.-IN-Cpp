#include <iostream>
using namespace std;
int main() {
    int arr[] = {2,5,1,6,3,8,9};
    int len_arr = sizeof(arr)/sizeof(arr[0]);
    for(int j = 0; j<len_arr-1;j++){
        for(int i = 0 ; i<len_arr-1-i; i++){
            int trd = 0;
            if (arr[i]>arr[i+1]){
                trd = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = trd;
            }
        }
    }
    for(int i = 0; i<len_arr; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}

#include <iostream>
using namespace std;
// like in this expample we are going to remove 55 from array:
int main(){
    int arr[] = {20, 5, 7, 44, 55, 65, 84, 32, 56};
    // x = 55;
    int actual_deletion_place = 5; // deletion place
    int deletion_place = actual_deletion_place - 1;
    int len_arr = 9; // also, sizeof(arr)/sizeof(int or arr[0])
    for(int i = 0; i<len_arr; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int new_arr[len_arr - 1];
    for (int j = 0; j<deletion_place; j++){
        new_arr[j] = arr[j];
    }

    for (int k = deletion_place+1; k<len_arr; k++){
        new_arr[k-1] = arr[k];
    }

    for(int i = 0; i<(len_arr-1); i++){
        cout<<new_arr[i]<<" ";
    }
}

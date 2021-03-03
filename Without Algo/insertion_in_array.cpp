#include <iostream>
using namespace std;

int main(){
    // start indexing from zero
    int arr[] = {20, 5, 7, 44, 55, 65, 84, 32, 56};
    int x = 45; // value to insert
    int insertion_place = 5; // place to insert
    int len_arr = 9;
    for(int i = 0; i<len_arr; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int new_arr[len_arr + 1];
    for (int j = 0; j<=insertion_place; j++){
        new_arr[j] = arr[j];
    }
    new_arr[insertion_place] = x;

    for(int k = insertion_place+1; k<len_arr+1; k++){
        new_arr[k] = arr[k-1];
    }

    for(int i = 0; i<len_arr+1; i++){
        cout<<new_arr[i]<<" ";
    }
}

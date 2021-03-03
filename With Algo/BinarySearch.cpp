#include <iostream>
using namespace std;
int main(){
    //remember in binary search array is sorted!!
    int arr[] = {1,4,9,16,25,36,49,64};
    int len_arr = sizeof(arr)/sizeof(arr[0]);
    int k = 32;
    int l = 0;
    int h = len_arr-1;

    while(l<=h){
        int mid = (l+h)/2;
        if (arr[mid] == k){
            cout<<mid+1;
            break;
        }
        else if(arr[mid] < k ){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return -1;
}

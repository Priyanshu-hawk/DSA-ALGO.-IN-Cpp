#include <iostream>
using namespace std;

int main()
{
    int arr[] = {20, 5, 7, 44, 55};
    int x = 44;
    for(int i = 0 ; i<=5 ; i++){
        if (arr[i]==x){
            cout<<"[+] Attempt "<<i+1<<" ";
            cout<<"Got the value "<<x;
            break;
        }
    }
    return 0;
}


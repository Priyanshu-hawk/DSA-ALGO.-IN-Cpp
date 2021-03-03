#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {2,5,6,8,5,6,9};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n);//we have to assign pointer to sort array // if i want it in descending order, so i can use ""sort(arr,arr+n,greater<int>());""

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    return 0;
}

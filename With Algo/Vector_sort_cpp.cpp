#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vect = {40,90,70,10,30,50,100};
    sort(vect.begin(),vect.end()); // in ascending order
    for(int x: vect) // new method of for loop: so here "x" represents the particular element in an vector.
        cout<< x<< " ";
    cout<<endl;
    sort(vect.begin(),vect.end(),greater<int>()); // in decending order
    for(int x : vect)
        cout<< x <<" ";
    return 0;
}

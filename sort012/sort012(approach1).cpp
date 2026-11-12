#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr={2,0,2,1,1,0,2,0,0};
    sort(arr.begin(),arr.end());
    for(int x: arr){
        cout<< x<< " ";
    }
}
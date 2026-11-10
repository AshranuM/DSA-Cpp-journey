
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check whether allocation is possible
void bubblesort(vector<int>& arr) {
int n= arr.size();
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }

    }
}
}
int main() {

    vector<int> arr = {5,3,1,8,6};
    bubblesort(arr);
    for(int x:arr){
        cout<<x<<" ";
    }

    return 0;
}

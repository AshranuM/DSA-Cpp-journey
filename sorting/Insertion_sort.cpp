#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertionsort(vector<int>& arr) {
int n= arr.size();
for(int i=1;i<n-1;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
       arr[j+1]=arr[j];
       j--;
        }
        arr[j+1]=key;
        }

    }
 
int main() {

    vector<int> arr = {5,3,1,8,7,6};
    insertionsort(arr);
    for(int x:arr){
        cout<<x<<" ";
    }

    return 0;
}

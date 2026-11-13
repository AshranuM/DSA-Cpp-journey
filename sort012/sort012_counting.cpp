#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort012(vector<int> arr){
    int count0=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            count0++;}
        else if(arr[i]==1){
            count1++;
        }
        else {
            count2++;

        }
        
    }
    int index=0;
    while(count0--){
        arr[index++]=0;
    }
    while(count1--){
        arr[index++]=1;              
    }
    while(count2--){
        arr[index++]=2;
    }
}
int main(){
    vector<int> arr={2,0,2,1,1,0,2,0,0};
    sort(arr.begin(),arr.end());
    for(int x: arr){
        cout<< x<< " ";
    }
}
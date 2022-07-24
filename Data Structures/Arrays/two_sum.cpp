#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] = {2,3,4,9,1,0,6,10,23,5,76};
    int n = 11;
    int target = 7;
    unordered_map<int,int> seen;
    for(int i=0;i<n;i++){
        seen[arr[i]]++;
    }
    for(int i = 0;i<n;i++){
        int k = target-arr[i];
        if(seen.count(k)==1){
            cout<<"Ans: "<<arr[i]<<" "<<k<<endl;
            break;
        }
    }
    return 0;
}
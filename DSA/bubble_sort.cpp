//use case for bubble sort: place the i^th position eleemnt to it right position in i^th round

#include<iostream>
#include<vector>
using namespace std; 
void bubble_sort(vector<int>&arr){
    int n=arr.size();
    for(int i=1;i<n-1;i++){//for number of rounds 1 to n-1
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }



    }

}





int main(){
    vector<int>nums={6,5,3,7,9,2,1,4,8};
    bubble_sort(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
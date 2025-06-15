#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
//find k in an array and return its index(using linear search)
int search1(vector<int>&arr, int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==target)return i;
    }
    return -1;
    //time complexity:O(n)

}
//array`is sorted and find element and return its index(Binary search)
int binary(vector<int>&arr,int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        return -1;
        //time complexity=O(logn) cause har comparison me divide by two karege
        //mid=l+(h-l/2) to prevent heap buffer overflow
    }
}







int main(){
    vector<int>nums={10,20,5,7,6};
    return 0;
    search1()
}
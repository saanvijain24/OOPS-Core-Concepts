#include <iostream>
#include <vector>
using namespace std;
// merge sort
void merge(vector<int> &arr, int start, int mid, int end)
{
    int l1 = mid - start + 1;
    int l2 = end - mid;
    int *first = new int[l1];
    int *second = new int[l2];
    //copy values in first and second
    for (int i = 0; i < l1; i++)
    {
        first[i] = arr[start+i];
        
    }
    for (int i = 0; i < l2; i++)
    {
        second[i] = arr[mid + 1+i];
        
    }
    //merge first and second in sorted manner
    int index1=0,index2=0,main=start;
    while(index1<l1 && index2<l2){
        if(first[index1]<second[index2]){
            arr[main++]=first[index1++];
            
        }
        else{
            arr[main++]=second[index2++];
            
        }

    }
    while(index1<l1){
        arr[main++]=first[index1++];
        
        
    }
    while(index2<l2){
        arr[main++]=second[index2++];
        
    }
    delete[] first;
    delete[] second;






}

void merge_sort(vector<int> &arr, int start, int end)
{

    
    // base case
    if (start >=end)
    {
        return;
    }
    int mid = (start + end) / 2;
    // sorting left part
    merge_sort(arr, start, mid);
    // sorting right part
    merge_sort(arr, mid + 1, end);
    // merge both the sorted part
    merge(arr, start, mid, end);
}
int main()
{
    vector<int> nums = {8, 7, 5, 4, 1, 3, 2};
    merge_sort(nums, 0, nums.size() - 1);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"  ";
    }

    return 0;
}
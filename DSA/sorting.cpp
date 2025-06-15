// sorting:arrange elements of an array in ascending order
#include <iostream>
#include <vector>
using namespace std;
// bubble sort: compare adjecent elements and swap if not sorted and place largest element at last
/// n passes and n-1 swaps: for loop and one more for loop to compare all the elements in the array
void bubble(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    { // for number of passes
        for (int j = 0; j < n - 1; j++)
        { // to compare individual elemnts and if they are out of order we will swap them
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubble2(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    { // for number of passes
        for (int j = 0; j < n - 1; j++)
        { // to compare individual elemnts and if they are out of order we will swap them
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                // time complexity=O(n^2)
            }
        }
    }
}
void bubble3(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    { // for number of passes
        for (int j = 0; j < n - 1 - i; j++)
        { // to compare individual elemnts and if they are out of order we will swap them
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                // time complexity=O(n^2)
            }
        }
    }
}
// optimized buble sort
void bubble4(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    { // for number of passes
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        { // to compare individual elemnts and if they are out of order we will swap them
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
                // time complexity=O(n^2)
            }
        }
        if (flag == true)
            break;
        // jab array unsorted hai tab  loop break nahi krre cause false condition run hori hai which is avg/worst case i.eO(n^2) if agar sorted hai toh loop se bahar aaker true hokr break ho jayega which makes its time complexityO(n)(best case)

        // it is inplace algo id stable
    }
}

// selection sort:array me sabse chota elemnt dhundte ho and usko sabse pehle rakh deta hai by travesing whole array and finding smallest element and swap it with first element (in first pass and so on)
// no. of swap required:1
void select(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        // find smallest element and swap with 0th element
        int min_index = i; // assume
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
            swap(arr[i], arr[min_index]);
        }
    }

    // time complexity=O(n^2) cannot be optimized as such
    // selection sort in inplace and unstable
    // real life me selection is better since swap 1 baar hi krre ho and whenever you do swap you utilize memory writing and in bubble sort best case scenario anna one in a million chance hai and number of swap zyada hai
}
// insertion sort:it divides our array in three part first paart is sorted and second part is key and third part is unsorted  we try to put key in sorted array to its rightful position hence its called insertion sort
void insertion(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    { // first element is always sorted
        int key = arr[i];
        int j = i - 1;
        // right shift till key<element we are on j>=0
        while (j >= 0 & arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        // insertion sort is inplace and is stable algo
        // time complexity : O(n^2) in all cases
    }
}
// merge sort
// merge 2 sorted array
void merge_sorted_arrays(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < n & j < m)
    {
        if (arr1[i] > arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n)
    { // to push leftover elements
        ans.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        ans.push_back(arr2[j]);
        j++;
    }
}

// merge sort
// elements are sorted from mid to mid and mid to high
void merge(vector<int> &arr, int low, int mid, int high)
{
    int n1 = mid - low + 1; // size of left array
    int n2 = high - mid;    // size of right array
    int left[n1];
    int right[n2];
    // orginal array me se left ko alaga karna aur right ko alag krna
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[low + i]; // left elements ko left array me daldo
        // left[0]=arr[0+2=2]arr 2 ki value ko left wali jo nayi array hai usme rakhdo
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[mid + 1 + 1]; // right array ke  elements ko right array me daalna
    }
    int i = 0, j = 0, k = low; // i will mover over left array and j will move on right array and k will move over final array jaha value copy krni hai
    // merging and sorting both the arrays
    while (i < n1 & j < n2)
    {
        if (left[i] <= right[j])
        { // left me chota element hai
            arr[k] = left[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right[j]; // right me chota element hai
            j++;
            k++;
        }
    }
    // bache huye elements ko add krna
    while (i < n1)
    { // left wale ke elements bache hai
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    { // right wale me elements bache hai
        arr[k] = right[j];
        j++;
        k++;
    }
    // time complexity:O(n)
}

// merge sort
void mergesort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergesort(arr, low, mid);      // left array ke elements ko alag krna
        mergesort(arr, mid + 1, high); // right array ke elements ko alag karna
        // fir saare alag kre huye elements ko sort krke merge karna
        merge(arr, low, mid, high); // sort and merge both the array
        // length of tree/no.of levels:logn as its getting divided
        // calling of merge(whose tc is O(n))
        //******************total timecomplexity:O(nlogn)in all cases**********
    }
}

int main()
{
    vector<int> nums = {5, 4, 3, 2, 1};
    select(nums);
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << "  ";
    }
    return 0;
}
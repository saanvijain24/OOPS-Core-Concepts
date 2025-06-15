#include<algorithm>
#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<vector>


using namespace std;
class solution{
void integer(vector<int>&nums,int n, int m){
    int n=nums.size();
}




};



int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(10);// will allow no duplication
    s.erase(10);
    if(s.find(10)!=s.end()){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }



    return 0;
}
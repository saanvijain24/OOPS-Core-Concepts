#include<iostream>
#include<vector>
using namespace std;
//graph is created by the help of adjancency matrix and and adjancecy list representation 


//graph creation




int main(){
//user ill tell you total number of vertexand number of edge and connection between the vertexes using edge
int V;
cout<<"enter vertices"<<endl;
cin>>V;
vector<vector<int>>mat(V,vector<int>(V,0));
int e;
cin>>e;
for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
    mat[u][v]=1;
    mat[v][u]=1;

}
    return 0;
}

int main(){
    int Ver;
    cin>>Ver;
    vector<int> adj[Ver];
    int e;
    cin>>e;
    for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
    adj[u].pushback_back(v);
    adj[v].pushback_back(u);
}
return 0;
}
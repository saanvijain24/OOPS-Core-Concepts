#include <iostream>
#include <vector>
using namespace std;
class node{
    public:
    int data;
    node  *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

//traversing 
void print(node*head){
if(head==NULL)return;
cout<<head->data<<" ";
node *curr=head->next;
while(curr!=head){
    cout<<curr->data<<" ";

}


}




int main(){
     // creating random boxes in memory
     node *head = new node(10); // new creates a new box in memory which has data as value and null as address and the address of this b ox is stored in head
     node *temp1 = new node(20);
     node *temp2 = new node(30);head->next=temp1;
     temp1->next=temp2;
     temp2->next=head;

    return 0;
}
// linked list:array has continuous memory allocations and linkedin is a linear data structure in which data is stored in form of nodes each nodes contains data(valueof node) and pointer(address to the next node in the sequence)
// unlike array linked list are dynamic and can grow and shrink at runtime without memory wastage
// drawback: singly list can not move backward and there are no random indexing u have to go at first then second and then third
// best use case: memory utilization is good and better memory utilization than array

#include <iostream>
#include <vector>
using namespace std;

// creation of nodes

class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

// traversing the linked list
void print(node *head)
{
    node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}
// left hand side me ->next likhne ka matlab connection bana rahe ho and right hand side me likhne ka matlab hai ki next ki value pr jaa rhe ho

node *insertAThead(node *head, int x)
{
    // will return the address of new head
    node *temp = new node(x); // new ka ka kaam hai naya box banakr uska address return krna
    temp->next = head;        // giving head value to temp
    return temp;
    // this code will work on only 1 element and 0 elements
}
node *deletefrombegin(node *head)
{
    if (head == NULL)
        return NULL; // edge case
    node *temp = head;
    head = head->next;
    delete temp;
    //delete head;
}

node *insert_at_end(node *head, int x)
{

    node *temp = new node(x);
    if (head == NULL)
        return temp;   // edge case
    node *curr = head; // for traversing
    while (curr != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

node *delete_at_end(node *head, int x)
{
    if (head->next == NULL || head == NULL)
        return NULL; // edge case
    node *curr = head;

    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = NULL;
    return head;
}
// insert from certain position and delete from certain position

node *insert_at_certain(node *head, int position, int value)
{
    if (position == 1)
    {
        return insertAThead(head, value);
    }
    node *temp = new node(value);
    node *curr = head;
    for (int i = 0; i < position - 2; i++)
    {
        curr = curr->next; // only moving current
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

//delete element from certain position
node *delete_from_position(node *head,int position ){
    if(position==1){
        return deletefrombegin(head);//edge case
    }
    node *curr=head;
    for(int i=0;i<position-2;i++){
        curr=curr->next;
    }
    curr->next=curr->next->next;
    return head;
}
node *find_middle_node(node *head){//in a given linked list find the middle node and if the linked list has even number of nodes then return 2nd middle node
    
        node* slow=head;
         node* fast=head;
         while(fast && fast->next){//in case to find first mid in even wee put (fast && fast->next and fast->next_>next) in the condition for while loop
           slow =slow->next;
           fast=fast->next->next;
         }
   return slow;
}

bool if_loop_exists(node *head){//
    node* curr=head;
    node *temp=new node(10);
    while(curr){
        if(curr->next==temp) return true;
        node* next=curr->next;
        curr->next=temp;
        curr=next;
    }


}



//floyd's algorithm(effectively detects cycts in linked list) also called tortoise ad hare algorithm with time complexity O(n)
bool hasCycle(node *head) {
    //floyd algo
    node* slow=head;
    node*  fast=head;
    while(fast!=NULL && fast->next!=NULL){
     slow=slow->next;
     fast=fast->next->next;
     if(slow==fast)return true;
    }
    return false;
 
 }

 //return the first node of the cyclr if cycle exists
 







int main()
{
    // creating random boxes in memory
    node *head = new node(10); // new creates a new box in memory which has data as value and null as address and the address of this b ox is stored in head
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    // liknking the list by storing address of next box in current box
    head->next = temp1; // head ke next me temp1 ki value save karwana
    temp1->next = temp2;
    // head is important as its a starting element storing address of next element

    // traversing the link list and printing the values
    print(head);

    // inserting/changing value at head
    head = insertAThead(head, 100);
    // delete first changed element
    deletefrombegin(head);
    cout<<if_loop_exists(head);

    return 0;
}
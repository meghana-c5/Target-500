/*

Initially take two pointers, fast and slow. Fast pointer takes two steps ahead while slow pointer will take single step ahead for each iteration.
We know that if a cycle exists, fast and slow pointers will collide.
If cycle does not exists, fast pointer will move to NULL
Else, when both slow and fast pointer collides, it detects a cycle exists.
Take another pointer, say entry. Point to the very first of the linked list.
Move the slow and the entry pointer ahead by single steps until they collide. 
Once they collide we get the starting Node of the linked list

*/



#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};


void insert(Node* &head)
{
    int ch = 1;
        Node *temp;
        do{
            cout<<"Enter Node data : ";
            int n; cin>>n;
            if(!head)
            {
                head = new Node(n);
                temp = head;
            }
            else
            {
                temp -> next = new Node(n);
                temp = temp -> next;
            }
    
            cout<<"choice : ";
            cin>>ch;
    
        }while(ch);
    
}

void print(Node* &head){
    Node *temp = head;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    
        cout<<endl;
}

void createCycle(Node* &head,int pos) {
    Node* ptr = head;
    Node* temp = head;
    int cnt = 0;
    while(temp->next != NULL) {
        if(cnt != pos) {
            ++cnt;
            ptr = ptr->next;
        } 
        temp = temp->next;
    }
    temp->next = ptr;
}
int main() 
{

        Node *head = NULL;
        insert(head);
        print(head);
        
    createCycle(head,2);
    
        Node* fast = head;
        Node* slow = head;
        Node* start = head;

        bool found = false;
            
        while(fast->next != NULL && fast->next->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;

            if(fast == slow)
            {
                found = true;
                while(slow != start) {
                slow = slow->next;
                start = start->next;
                }
            }
        }

        if(found)
            cout<<"cycle starts at : "<<start->data;
        else
            cout<<"cycle not found";
        
 
return 0;
   
}
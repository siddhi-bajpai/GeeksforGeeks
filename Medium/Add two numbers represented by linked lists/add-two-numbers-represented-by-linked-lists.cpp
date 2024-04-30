//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverse(struct Node* head)
    {
        Node* prev=NULL;
        Node* current=head;
        Node* Next=NULL;
        
        while(current!=NULL){
            Next=current->next;
            current->next=prev;
            prev=current;
            current=Next;
        }
        head=prev;
        return head;
    }
    
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        Node* DummyNode=new Node(-1);
        
        num1=reverse(num1);
        num2=reverse(num2);
        
        int carry=0;
        
        Node* curr=DummyNode;
        while(num1!=NULL || num2!=NULL || carry){
            int sum=carry;
            if(num1){sum+=num1->data;
                num1=num1->next;
            }
            if(num2){sum+=num2->data;
                num2=num2->next;
            }
            
            carry=sum/10;
            Node* Newnode=new Node(sum%10);
            curr->next=Newnode;
            curr=Newnode;
        }
        DummyNode->next=reverse(DummyNode->next);
        Node* p= DummyNode->next;
        
        while(p!=NULL && p->data==0){
            p=p->next;
        }
        return p==NULL?new Node(0):p;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
     // Function to reverse a linked list

    Node* reverse(Node* &head){
        Node* pre = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while(curr != NULL){
            forward = curr->next;
            curr->next = pre;
            pre = curr;
            curr = forward;
        }
        return pre;
    }
    
    Node* addOne(Node *head) 
    {
        // Reverse the linked list


        head = reverse(head);
        

  // Dummy node for the result
        Node* curr = new Node(-1);  

// Pointer to the head of the result
        Node* newHead = curr;        
   

   // Pointer to the original reversed list 
        Node* temp = head;    
        int carry = 1;
       
       // Iterate through the reversed list to perform addition


          while(temp != NULL){
           
                int sum = carry + temp->data;
                int digit = sum % 10;
                carry = sum / 10;
                
                Node* newNode = new Node(digit);
                curr->next = newNode;
                curr = newNode;
            
            
            temp = temp->next;
        }
        
        // if  any remaining carry is present


        while(carry){
            int sum = carry;
            int digit = sum % 10;
            carry = sum / 10;
            
            Node* newNode = new Node(digit);                
            curr->next = newNode;
            curr = newNode;
        }
        
         // Reverse the result to get the final answer


        Node* anshead = reverse(newHead->next);
        
        return anshead;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends
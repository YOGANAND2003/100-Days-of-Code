//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* inputList(int size)
{
    if (size == 0) return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}


// } Driver Code Ends
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        int c1=0;
        int c2=0;
        Node *temp1=head1;
        Node *temp2=head2;
        while(temp1!=NULL)
        {
            c1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            c2++;
            temp2=temp2->next;
        }
        temp1=head1;
        temp2=head2;
        int df=(c1-c2);
        if(df<0)
        {
            df=-df;
        }
        if(c1>c2)
        {
            for(int i=0;i<df;i++)
            {
                temp1=temp1->next;
            }
        }
        else
        {
            for(int i=0;i<df;i++)
            {
                temp2=temp2->next;
            }
        }
        while(temp1!=temp2)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(temp1)
        {
            return(temp1->data);
        }
        else
        {
            return(-1);
        }
    }
};



//{ Driver Code Starts.


/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);

        Node* temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;
        
        Solution ob;
        cout << ob.intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends
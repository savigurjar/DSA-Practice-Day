#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data=value;
        next = NULL;
        prev = NULL;
    }
};
Node* arrToDDL(int arr[],int n)
{
    Node *head = NULL;

    for(int i=0;i<n;i++)
    {
        Node *temp = new Node(arr[i]);
        temp->next = head;

        if(head != NULL)
        {
            head->prev = temp;
        }
        head = temp;
    }
    return head;
}
void printDDl(Node *head)

{
  Node *temp = head;
  while(temp)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    Node *head = arrToDDL(arr,5);

    printDDl(head);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#include "ll.cpp"
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}
int main()
{
    // Statically

    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    n1.next = &n2;
    Node n3(3);
    n2.next = &n3;
    Node n4(4);
    n3.next = &n4;
    Node n5(5);
    n4.next = &n5;
    print(head);

    // Dynamically
    // Node *n3= new Node(10);
    // Node *head2  = n3;
    // Node *n4 = new Node(20);
    // n3->next = n4;
}
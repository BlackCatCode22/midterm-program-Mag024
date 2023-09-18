/* Miguel Gomez

CIT-66-16270 September 18, 2023 Monday

Zoo Animals Midterm

*/

#include <iostream>

using namespace std;

class Node {
public:
    string name;
    Node* Next;

};

void printList(Node*n){
    while (n!=NULL){
        cout << n->name << endl;
        n = n->Next;
    }
}
int main()
{
    //try and show animals in a linked list add datat later
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* last  = new Node();

    // adding name to specific nodes for easier ID
    head->name = "Bears";
    head->Next = second;

    second->name = "Hyenas";
    second->Next = third;

    third->name = "Lions";
    third->Next = last;

    last->name = "Tigers";
    last->Next = NULL;

    printList(head);

    cout << "Hello world!" << endl;
    return 0;
}

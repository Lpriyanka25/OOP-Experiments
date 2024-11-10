#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}  // Constructor to initialize node
};

// Linked List class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}  // Constructor to initialize head to nullptr

    // Function to insert a new node at the end
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {        // If list is empty, set new node as head
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) { // Traverse to the end of the list
                temp = temp->next;
            }
            temp->next = newNode;    // Link new node at the end
        }
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Function to delete a node by value
    void deleteNode(int value) {
        if (head == nullptr) return;  // If list is empty, nothing to delete

        // If the head node is to be deleted
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Search for the node to be deleted
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }

        // If node with value found, delete it
        if (temp->next != nullptr) {
            Node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
        }
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Linked List: ";
    list.display();

    cout << "Deleting node with value 20" << endl;
    list.deleteNode(20);

    cout << "Linked List after deletion: ";
    list.display();

    return 0;
}

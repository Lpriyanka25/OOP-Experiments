//example 1
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
//example 2
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;        // Data to store
    Node* next;      // Pointer to the next node
};

// Linked List class
class LinkedList {
private:
    Node* head;      // Pointer to the first node in the list

public:
    // Constructor
    LinkedList() : head(nullptr) {}

    // Function to insert at the end
    void append(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (!head) { // If the list is empty
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) { // Traverse to the end of the list
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to display the linked list
    void display() {
        if (!head) {
            cout << "The list is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* temp = head;
        while (temp) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main() {
    LinkedList list;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add an element to the list\n";
        cout << "2. Display the list\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a value to add: ";
                cin >> value;
                list.append(value);
                cout << "Value added successfully!" << endl;
                break;

            case 2:
                cout << "The current linked list is: ";
                list.display();
                break;

            case 3:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}

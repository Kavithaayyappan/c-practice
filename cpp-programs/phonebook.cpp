#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name, phone, email, category, dob;
    Node* next;
    Node* prev;
};

class PhoneBook {
private:
    Node* head;

    int getPriority(string category) {
        if (category == "Family") return 1;
        if (category == "Friend") return 2;
        if (category == "Work") return 3;
        return 4;
    }

public:
    PhoneBook() {
        head = NULL;
    }

    void addContact(string name, string phone, string email,
                    string category, string dob) {

        if (category == "family") category = "Family";
        if (category == "friend") category = "Friend";
        if (category == "work") category = "Work";

        Node* newNode = new Node();
        newNode->name = name;
        newNode->phone = phone;
        newNode->email = email;
        newNode->category = category;
        newNode->dob = dob;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        int newPriority = getPriority(category);

        if (newPriority < getPriority(head->category) ||
           (newPriority == getPriority(head->category) && name < head->name)) {

            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            return;
        }

        while (temp->next != NULL) {
            int tempPriority = getPriority(temp->next->category);

            if (newPriority < tempPriority ||
               (newPriority == tempPriority && name < temp->next->name)) {
                break;
            }

            temp = temp->next;
        }

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }

        temp->next = newNode;
    }

    void display() {
        Node* temp = head;

        if (temp == NULL) {
            cout << "Phonebook is empty\n";
            return;
        }

        cout << "\nPhonebook:\n";
        while (temp != NULL) {
            cout << "Name: " << temp->name << endl;
            cout << "Category: " << temp->category << endl;
            cout << "Phone: " << temp->phone << endl;
            cout << "Email: " << temp->email << endl;
            cout << "DOB: " << temp->dob << endl;
            cout << "---------------------\n";
            temp = temp->next;
        }
    }

    void search(string name) {
        Node* temp = head;

        while (temp != NULL) {
            if (temp->name == name) {
                cout << "\nFound\n";
                cout << "Name: " << temp->name << endl;
                cout << "Phone: " << temp->phone << endl;
                cout << "Email: " << temp->email << endl;
                return;
            }
            temp = temp->next;
        }

        cout << "Not found\n";
    }
};

int main() {
    PhoneBook pb;
    int choice;

    string name, phone, email, category, dob;

    do {
        cout << "\n1. Add\n2. Display\n3. Search\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter name: ";
                getline(cin, name);

                cout << "Enter phone: ";
                getline(cin, phone);

                cout << "Enter email: ";
                getline(cin, email);

                cout << "Enter category (Family/Friend/Work): ";
                getline(cin, category);

                cout << "Enter DOB: ";
                getline(cin, dob);

                pb.addContact(name, phone, email, category, dob);
                break;

            case 2:
                pb.display();
                break;

            case 3:
                cout << "Enter name: ";
                getline(cin, name);
                pb.search(name);
                break;

            case 4:
                cout << "Exit\n";
                break;

            default:
                cout << "Invalid\n";
        }

    } while (choice != 4);

    return 0;
}

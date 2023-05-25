

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int noMhs;
    string name;
    Node* next;
    Node* prev;
};
class DoubleLinkedList {
private:
    Node* START;
public:
    DoubleLinkedList();
    void addNode();
    void search(int rolNo, Node** previous, Node** current);
    bool deleteNode(int rollNo);
    bool listEmpty();
    void ascending();
    void descending();
};
DoubleLinkedList::DoubleLinkedList() {
    START = NULL;
}
void DoubleLinkedList::addNode(){
    int nim;
    string nm;
    cout << "/nEnter the roll number of the student: ";
    cin >> nim;
    cout << "/Enter the name of the student";
    cin.ignore();
    getline(cin, nm);
    Node* newNode = new Node();
    newNode->noMhs = nim;
    newNode->name = nm;

    if (START == NULL || nim <= START->noMhs) {
        if (START != NULL && nim == START->noMhs) {
            cout << "\nDuplicate number not allowed" << endl;
        }
     }
}
int main()
{
    std::cout << "Hello World!\n";
}

//he future, to open this project again, go to File > Open > Project and select the .sln file

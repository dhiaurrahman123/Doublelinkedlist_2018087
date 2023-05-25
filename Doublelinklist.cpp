

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
    void addNote();
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
    
}
int main()
{
    std::cout << "Hello World!\n";
}

//he future, to open this project again, go to File > Open > Project and select the .sln file

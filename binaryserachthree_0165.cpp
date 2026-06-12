#include <iostream>
using namespace std;

//membuaut class node
class Node{

  //memberi akses modifier serta mendeklarasi variabel dan object node
public:
  string info;
  Node* leftChild;
  Node* rightChild;

  //membuat constructor untuk kelas node
  Node(string i, Node* l, Node* r){
    //memberi nilai parameter ke variabel
    info = i;
    leftChild = l;
    rightChild = r;
  }

};

//membuat class binarythree
class BinaryTree{
  //memberi akses modifier dan deklarasi object
public:
  Node* ROOT;
  //membuat constructor dan memberi nilai kepada object root
  BinaryTree(){
    ROOT = nullptr;
  }

  //membuat prosedur insert
  void insert(string element){
    //memberi nilai untuk setiap object yang beras di dalam prosedur insert
    Node* newNode = new Node(element, nullptr, nullptr);
    newNode->info = element;
    newNode->leftChild = nullptr;
    newNode->rightChild = nullptr;

    Node* parent = nullptr;
    Node* currentNode = nullptr;
    search(element, parent, currentNode);

    //membuat conditional statement
    if (parent == nullptr){
      ROOT = newNode;
      return;
    }

    if (element < parent->info)
    {
      parent->leftChild = newNode;
    }

    else if (element > parent->info)
    {
      parent->rightChild = newNode;
    }
  }

  //membuat 
  void search(string element, Node*& parent, Node*& currentNode){
    currentNode = ROOT;
    parent = nullptr;
    while ((currentNode != nullptr) && (currentNode->info != element))
    {
      parent = currentNode;
      if (element < currentNode->info)
        currentNode =currentNode->leftChild;
      else
        currentNode =currentNode->rightChild;
    }
  }

  void inorder(Node* ptr) {
    if (ROOT == nullptr){
      cout << "Tree is empty" << endl;
      return;
    }
    if (ptr != nullptr) {
      inorder(ptr->leftChild);
      cout << ptr->info << " ";
      inorder(ptr->rightChild);
    }
  }

  void preorder(Node* ptr) {
    if (ROOT == nullptr){
      cout << "Tree is empty" << endl;
      return;
    }
    if (ptr != nullptr) {
      cout << ptr->info << " ";
      inorder(ptr->leftChild);
      inorder(ptr->rightChild);
    }
  }

  void postorder(Node* ptr) {
    if (ROOT == nullptr){
      cout << "Tree is empty" << endl;
      return;
    }
    if (ptr != nullptr) {
      inorder(ptr->leftChild);
      inorder(ptr->rightChild);
      cout << ptr->info << " ";
    }
  }
};

int main()
{
  //deklarasi object x sebagai object BinaryTree
  BinaryTree X;
  // perulangan while selama bernilai benar 
  while (true)
  {
    //membuat menu program dan input pilihan
    cout << "\n================================================\n" << endl;
    cout << "\n === MENU ===\n" << endl;
    cout << "1. implement insert operation" << endl;
    cout << "2. perform inorder traversal" << endl;
    cout << "3. preform preorder traversal" << endl;
    cout << "4. preform postorder traversal" << endl;
    cout << "5. EXIT." << endl;
    cout << "\n Enter yout choice (1-5) : ";

    char ch;
    cin >> ch;
    cout << endl;

    //membuat conditional statement dari input ch
    switch (ch)
    {
      case '1':
      {
        cout << "Enter a word : ";
        string word;
        cin >> word;
        X.insert(word);
        break;
      }
      case '2':
      {
        X.inorder(X.ROOT);
        break;
      }
      case '3':
      {
        X.preorder(X.ROOT);
        break;
      }
      case '4':
      {
        X.postorder(X.ROOT);
        break;
      }
      case '5':
      {
        return 0;
      }
      default :
      {
        cout << "Invalid Option" << endl;
        break;
      }
    }
  }
}
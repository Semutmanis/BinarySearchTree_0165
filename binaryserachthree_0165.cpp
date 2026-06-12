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
  }
}
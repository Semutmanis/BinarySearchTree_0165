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
  void insert(string element){}
}
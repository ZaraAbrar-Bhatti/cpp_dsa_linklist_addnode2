#include <iostream>
using namespace std;
class Node{
public:
	int data;
	Node *next;
};
class LinkList{
public:
	Node *head;
	Node *tail;
	LinkList(){
		head = NULL;
		tail = NULL;
	}
	void AddNode(int position){
		Node *ptr = new Node;
		ptr->data = position;
		ptr->next = head;
		if (tail == NULL){
			head = ptr;
			tail = ptr;
			ptr = NULL;
			delete ptr;
		}
		else{
			head = ptr;
			ptr = NULL;
			delete ptr;
		}
	}
	void PrintList(){
		for (Node *i = head; i != tail;){
			cout << i->data << endl;
			i = i->next;
		}
		cout << tail->data;
	}
};
int main(){
	LinkList l;
	l.AddNode(1);
	l.AddNode(2);
	l.AddNode(3);
	l.AddNode(4);
	l.AddNode(5);
	l.PrintList();
	cout << endl;
	system("pause");
	return 0;
}
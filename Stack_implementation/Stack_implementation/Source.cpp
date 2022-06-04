/* 
			Author: Yousry Essam Ayoub 
			code function :  Stack implementation using linked list 
*/
#include<iostream>
using namespace std; 
template<class T>
struct node
{
	T data;
	node<T>* link;
};
template< class T>
class Stack
{
	private:
		node<T>* Top;
		int Size = 0; 
	public:
		Stack()
		{
			Top = NULL;
		}
		int size()
		{
			return Size;
		}
		int Length()
		{
			return Size;
		}
		bool is_empty()
		{
			return (0 == Size);
		}
		void push(T val)
		{
			node<T>* n = new node<T>;
			n->data = val;
			n->link = Top;
			Top = n;
			Size++;
		}
		void pop()
		{
			if (size() > 0)
			{
				node<T>* n = new node<T>;
				n = Top;
				Top = Top->link;
				Size--;
				delete n;
			}
			cout << "That Is not possible stack is empty.\n";
		}
		void display()
		{
			if (Size <= 0)
				return;
			node<T>* n = new node<T>; 
			n = Top;
			for (int i = 0; i < Size ; i++)
			{
				cout << n->data << endl;
				n = n->link;
			}
		}
		bool find(T val)
		{
			if (Size <= 0)
				return false;
			node<T>* n = new node<T>;
			n = Top;
			for (int i = 0; i < Size; i++)
			{
				if (n->data == val)
				{
					return true;
				}
			}
			return false;
		}
		T top()
		{
			if (!is_empty())
			{
				return Top->data;
			}
			cout << "Stack is empty\n";
		}
};
int main()
{
	Stack<int> s; 
	s.pop();
	s.push(1);
	cout << s.top() << endl;
	s.push(3);
	cout << s.top() << endl;
	s.display();
	if (s.find(10))
		cout << "Element found \n";
	else
		cout << "Element not found \n";
	cout << s.size() << endl;
	s.pop(); 
	cout << s.top() << endl;
	return 0;
}
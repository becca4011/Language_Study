#include <iostream>
using namespace std;

class BaseArray
{
private:
	int capacity; // �迭 ũ��
	int *mem; // ���� �迭�� ����� ���� �޸��� ������
protected:
	BaseArray(int capacity = 100)
	{
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }

	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack : protected BaseArray
{
	int len = 0;
public:
	MyStack(int capacity) : BaseArray(capacity) {}
	void push(int n);
	int capacity() { return getCapacity(); }
	int length() { return len; }
	int pop();
};

void MyStack::push(int n)
{
	put(len, n); 
	len++;
}

int MyStack::pop()
{
	len--;
	return get(len);
}

int main()
{
	MyStack ms(100);
	int n;

	cout << "���ؿ� ������ 5�� ���� �Է� >> ";
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		ms.push(n);
	}

	cout << "���� �뷮 : " << ms.capacity() << ", ���� ũ�� : " << ms.length() << endl;

	cout << "������ ��� ���Ҹ� ���Ͽ� ��� >> ";
	while (ms.length() != 0)
		cout << ms.pop() << ' ';

	cout << endl << "������ ���� ũ�� : " << ms.length() << endl;
}
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

class MyQueue : protected BaseArray
{
	int len = 0;
	int cnt = 0;
public:
	MyQueue(int capacity) : BaseArray(capacity) {}
	void enqueue(int n); // ť�� ����
	int capacity() { return getCapacity(); }
	int length() { return len; }
	int dequeue(); // ť���� ����
};

void MyQueue::enqueue(int n)
{
	put(len, n);
	len++;
}

int MyQueue::dequeue()
{
	len--;
	cnt++;
	return get(cnt - 1);
}

int main()
{
	MyQueue mq(100);
	int n;
	
	cout << "ť�� ������ 5���� ������ �Է� >> ";
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mq.enqueue(n);
	}

	cout << "ť�� �뷮 : " << mq.capacity() << ", ť�� ũ�� : " << mq.length() << endl;
	
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ��� >> ";
	while (mq.length() != 0)
		cout << mq.dequeue() << ' ';

	cout << endl << "ť�� ���� ũ�� : " << mq.length() << endl;
}
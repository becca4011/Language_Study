#include <iostream>
using namespace std;

class BaseArray
{
private:
	int capacity; // 배열 크기
	int *mem; // 정수 배열을 만들기 위한 메모리의 포인터
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
	void enqueue(int n); // 큐에 삽입
	int capacity() { return getCapacity(); }
	int length() { return len; }
	int dequeue(); // 큐에서 제거
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
	
	cout << "큐에 삽입할 5개의 정수를 입력 >> ";
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mq.enqueue(n);
	}

	cout << "큐의 용량 : " << mq.capacity() << ", 큐의 크기 : " << mq.length() << endl;
	
	cout << "큐의 원소를 순서대로 제거하여 출력 >> ";
	while (mq.length() != 0)
		cout << mq.dequeue() << ' ';

	cout << endl << "큐의 현재 크기 : " << mq.length() << endl;
}
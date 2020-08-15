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

	cout << "스텍에 삽입할 5개 정수 입력 >> ";
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		ms.push(n);
	}

	cout << "스텍 용량 : " << ms.capacity() << ", 스텍 크기 : " << ms.length() << endl;

	cout << "스텍의 모든 원소를 팝하여 출력 >> ";
	while (ms.length() != 0)
		cout << ms.pop() << ' ';

	cout << endl << "스텍의 현재 크기 : " << ms.length() << endl;
}
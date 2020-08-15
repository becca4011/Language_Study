#include <iostream>
using namespace std;

class BaseMemory
{
	char *mem;
public:
	BaseMemory(int size) { mem = new char[size]; }
	~BaseMemory() { delete[] mem; }
	void setMem(int n, char c) { mem[n] = c; }
	char getMem(int n) { return mem[n]; }
};

class ROM : public BaseMemory
{
public:
	ROM(int m, char x[], int size) : BaseMemory(size) 
	{
		for (int i = 0; i < size; i++)
			setMem(i, x[i]);
	}

	char read(int index) { return getMem(index); }
};

class RAM : public BaseMemory
{
public:
	RAM(int size) : BaseMemory(size) {}
	void write(int index, char c) { setMem(index, c); }
	char read(int index) { return getMem(index); }
};

int main()
{
	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 10, x, 5); // 10KB의 ROM 메모리, 배열 x로 초기화
	RAM mainMemory(1024 * 1024); // 1MB의 RAM 메모리

	// 0 ~ 4번지까지 biosROM에서 읽어 mainMemory에 복사
	for (int i = 0; i < 5; i++)
		mainMemory.write(i, biosROM.read(i));

	for (int i = 0; i < 5; i++)
		cout << mainMemory.read(i);

	cout << endl;
}
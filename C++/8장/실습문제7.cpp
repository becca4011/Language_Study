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
	ROM biosROM(1024 * 10, x, 5); // 10KB�� ROM �޸�, �迭 x�� �ʱ�ȭ
	RAM mainMemory(1024 * 1024); // 1MB�� RAM �޸�

	// 0 ~ 4�������� biosROM���� �о� mainMemory�� ����
	for (int i = 0; i < 5; i++)
		mainMemory.write(i, biosROM.read(i));

	for (int i = 0; i < 5; i++)
		cout << mainMemory.read(i);

	cout << endl;
}
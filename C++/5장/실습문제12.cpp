#include <iostream>
using namespace std;

class Dept
{
	int size;
	int *scores;
public:
	Dept(int size)
	{
		this->size = size;
		scores = new int[size];
	}
	// Dept(const Dept &dept); // 복사생성자
	~Dept();

	int getSize() { return size; }
	void read(); // size만큼 키보드에서 정수를 읽어 scores 배열에 저장
	bool isOver60(int index); // index의 학생의 성적이 60보다 크면 true 리턴
};
/*
Dept::Dept(const Dept &dept)
{
	this->size = dept.size;

	this->scores = new int[this->size];
	for (int i = 0; i < this->size; i++)
		this->scores[i] = dept.scores[i];
}
*/
Dept::~Dept()
{
	delete[] scores;
}

void Dept::read()
{
	cout << size << "개 점수 입력 >> ";
	
	for (int i = 0; i < size; i++)
		cin >> scores[i];
}

bool Dept::isOver60(int index)
{
	if (scores[index] > 60)
		return true;
	else
		return false;
}

int countPass(Dept &dept) // 참조에 의한 호출로 변경
{
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++)
	{
		if (dept.isOver60(i))
			count++;
	}
	return count;
}

int main()
{
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점 이상은 " << n << "명" << endl;
}
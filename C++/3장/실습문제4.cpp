#include <iostream>
using namespace std;

class CoffeeMachine
{
	int coffee, water, sugar;
public:
	CoffeeMachine(int c, int w, int s) { coffee = c; water = w; sugar = s; }
	
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();

	void show();
	void fill();
};

void CoffeeMachine::drinkEspresso()
{
	coffee -= 1;
	water -= 1;
}

void CoffeeMachine::drinkAmericano()
{
	coffee -= 1;
	water -= 2;
}

void CoffeeMachine::drinkSugarCoffee()
{
	coffee -= 1;
	water -= 2;
	sugar -= 1;
}

void CoffeeMachine::show()
{
	cout << "커피머신 상태 - 커피 : " << coffee << "  물 : " << water << "  설탕 : " << sugar << endl;
}

void CoffeeMachine::fill()
{
	coffee = 10;
	water = 10;
	sugar = 10;
}

int main()
{
	CoffeeMachine java(5, 10, 3);

	java.drinkEspresso(); // 커피 1, 물 1
	java.show();

	java.drinkAmericano(); // 커피 1, 물 2
	java.show();

	java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1
	java.show();

	java.fill();
	java.show();
}
/*
#include<iostream>
#include "Account.h"

using namespace std;

int main() {
	Account account1{ "Jane Green", 50 };
	Account account2{ "Jone Blue", -7 };

	cout << "account1" << account1.getName() << "balance is $" << account1.getBalance();
	cout << "\naccount2" << account2.getName() << "balance is $" << account2.getBalance();
	cout << "\n\nEnter deposit amount for account1: ";
	int depositAmount;
	cin >> depositAmount;
	cout << "adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount);
	cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance();

	cout << "\n\nEnter deposit amount for account2: ";
	cin >> depositAmount;
	cout << "adding" << depositAmount << " to account2 balance";
	account2.deposit(depositAmount);
	cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance() << endl;
	
	cout << "\n\nEnter withdraw amount for account1: ";
	int withdrawAmount;
	cin >> withdrawAmount;
	cout << "subtracing " << withdrawAmount << " from account1 balance";
	account1.withdraw(withdrawAmount);
	cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance();

	cout << "\n\nEnter withdraw amount for account2: ";
	cin >> withdrawAmount;
	cout << "subtracing " << withdrawAmount << " from account2 balance";
	account1.withdraw(withdrawAmount);
	cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance();

	return 0;
}
*/

// type : �߻�ȭ�Ȱ�
// instance : Ÿ���� ��üȭ�� ��ü���� ��ü
// attribute : �ν��Ͻ��� ������ Ư¡
// behavior : � �ν��Ͻ��� ������ �� �� �ִ� �۾�, ����
// class : Ÿ��(����� ���� �ڷ���)�� ����
// object : Ŭ������ ������� ���� �ν��Ͻ� == ��ü
// attribute and behavior : ������ ����� ��� �Լ��� ����
// ������ ��� : �Ӽ��� ǥ���ϱ� ���� ����
// ����Լ� : ��ü�� ����

/*
Ŭ����

Ŭ���� ���� : �Ӽ��� ���� ����
����Լ� ���� : ���� ����
���ø����̼� : ��ü�� �ν��Ͻ�ȭ �ϰ� ���
*/

// constructor : Ư���� ����Լ��� ȣ��� ��, ����(��ü�� �����ϴ� Ư���� ����Լ�) == ������
// destructor : Ư���� ����Լ��� ȣ��Ǿ� �Ҹ��� ���ο��� ��ü�� �����ϴ� �۾� == �Ҹ���

// Ŭ���� �����
#include<iostream>

// Ŭ���� ����
// ������, ����Լ� ����
class Square {
private:
	double base;
public:
	Square(double base); // �Ű������� �ִ� ������
	Square(); // �⺻ ������
	~Square(); // �Ҹ���
	Square(const Square& square); // ���� ������
	void setBase(double base); // ������
	double getBase() const; // ������
	double getArea() const; // ������
	double getPerimeter() const; // ������
};

// ����Լ� ����
Square::Square(double base)
	:base(base) {
	std::cout << "�Ű������� �ִ� �����ڰ� ȣ��Ǿ����ϴ�." << std::endl;
}

Square::Square()
	:base(0.0) {
	std::cout << "�⺻ �����ڰ� ȣ��Ǿ����ϴ�." << std::endl;
}

Square::Square(const Square& square)
	:base(square.base) {
	std::cout << "���� �����ڰ� ȣ��Ǿ����ϴ�." << std::endl;
}

Square::~Square() {
	std::cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�: " << base << std::endl;
}

void Square::setBase(double val) {
	base = val;
}

double Square::getBase() const{
	return base;
}

double Square::getArea() const {
	return (base * base);
}

double Square::getPerimeter() const {
	return (4 * base);
}

using namespace std;
// ���ø����̼� : �����Լ� �ȿ��� ��ü �����ϱ�
// ����Լ� ȣ���ϱ�
int main() {
	// �ν��Ͻ�ȭ �Ŀ� ����Լ� ȣ���ϱ�
	Square square1(4.);
	cout << "Base : " << square1.getBase() << endl;
	cout << "Area : " << square1.getArea() << endl;
	cout << "Perimeter: " << square1.getPerimeter() << endl << endl;

	Square square2(square1);
	cout << "Base : " << square2.getBase() << endl;
	cout << "Area : " << square2.getArea() << endl;
	cout << "Perimeter: " << square2.getPerimeter() << endl << endl;

	Square square3;
	cout << "Base : " << square3.getBase() << endl;
	cout << "Area : " << square3.getArea() << endl;
	cout << "Perimeter: " << square3.getPerimeter() << endl << endl;
	
	// �Ҹ��� ȣ�� ����
	return 0;
}
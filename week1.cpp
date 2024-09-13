/*
// ��ó�� ���ù�(Preprocessing Directive)
// iostream: Input/Output ���� ���� ���� �Լ� �� Ŭ������ ��� ���� �ҽ��ڵ�
#include <iostream>

// ��� C++ ���α׷��� �� �ϳ��� main �Լ����� �������ϸ� ���α׷� ������ main���� ���۵�.
int main() {
	// std:: : namespace�� ��Ÿ����(namespace��� ��� ���), namespace�� ���� ������ �Լ��� Ŭ���� ���� ���� ���� �׷��̶�� �� �� ����.
	// ���� �ݷ��� ���� : ��ɹ��� �����ٴ� ���� ���
	// cout : �ؽ�Ʈ ���� ������ִ� ��ɾ�
	// << : string insertion ���� �����͸� ������ �� �˷��ش�.
	// \n : escape sequence �� �ϳ�
	std::cout << "Welcome to C++ !!\n";

	// return 0; : ���� �Լ��� ����ϴ� �� -> �����Լ��� ����� ���ᰡ �Ǿ��ٴ� ���̴�.
	return 0;
}
*/

/*
#include<iostream>
int main() {
	int number1{ 0 }; // (ǥ��) ���� ����
	int number2{ 0 };
	int sum{ 0 };

	std::cout << "Enter first integer: ";
	std::cin >> number1;

	std::cout << "Enter second integer: ";
	std::cin >> number2;

	sum = number1 + number2;

	std::cout << "Sum is " << sum << std::endl;

	return 0;
}
*/

/*
// Ÿ���� ��������� ����� "Ư���� ����"�� ������ auto�� �����.
// auto�� ����ϸ�, �ߺ��� �� Ÿ�Ը��� ������.
// ���е��� ���̰� ���� ���� �ڷ����� Ȯ���� ������ش�.
// ������ �ݵ�� ��� ���� ������ �Ǿ�� ��.

// cin : �Է� string�� ���� -> ���� ����
// endl : string�� ������ ��� ��, \n�۵�
*/

/*
// practice1
#include<iostream>
using namespace std;
int main() {
	int num1{ 0 };
	int num2{ 0 };

	cout << "Enter two integers to comapare: ";
	cin >> num1 >> num2;

	cout << "Sum is " << num1 + num2 << endl;

	if (num1 == num2) {
		cout << num1 << " == " << num2 << endl;
	}

	if (num1 != num2) {
		cout << num1 << " != " << num2 << endl;
	}

	if (num1 < num2) {
		cout << num1 << " < " << num2 << endl;
	}

	if (num1 > num2) {
		cout << num1 << " > " << num2 << endl;
	}

	if (num1 >= num2) {
		cout << num1 << " >= " << num2 << endl;
	}

	if (num1 <= num2) {
		cout << num1 << " <= " << num2 << endl;
	}
	return 0;
}
*/

/*
// practice 2
#include<iostream>
using namespace std;

int main() {
	int num1{ 0 };
	int num2{ 0 };

	cout << "Enter two integers: ";
	cin >> num1 >> num2;
	if (num1 % 2 == 0) {
		cout << "The number1 " << num1 << " is an even number!" << endl;
	}
	if (num2 % 2 == 0) {
		cout << "The number2 " << num2 << " is an even number!" << endl;
	}
	if (num1 % 2 == 1) {
		cout << "The number1 " << num1 << " is an odd number!" << endl;
	}
	if (num2 % 2 == 1) {
		cout << "The number2 " << num2 << " is an odd number!" << endl;
	}

	cout << "Sum is " << num1 + num2 << endl;
	cout << "Product is " << num1 * num2 << endl;
	cout << "Average is " << (num1 + num2) / 2 << endl;
	return 0;
}
*/
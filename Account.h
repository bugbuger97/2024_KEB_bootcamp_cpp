#pragma once  
/*
#pragma once : �����Ϸ����� �ش� ��� ������ �ѹ��� ����ǵ��� �Ѵ�. 
�ش� ��������� ������ include �Ǵ� ���� �����ش�. 
���������� include �Ǹ� �׶����� ���� ���ǰ� �߰��Ǿ� ��ø�Ǵ� ��찡 ����� �����̴�. 
�� �ߺ��� ������ ������ ����Ǵ� ���� ���� ���� #pragma once�� ����Ѵ�.
*/
#include<iostream>
#include<string>

class Account {
public:
	Account(std::string accountName, int initialBalance)
		: name{ accountName } {
		if (initialBalance > 0) {
			balance = initialBalance;
		}
	}

	void deposit(int depositAmount) {
		if (depositAmount > 0) {
			balance += depositAmount;
		}
	}

	void withdraw(int withdrawAmount) {
		if (withdrawAmount <= balance) {
			balance -= withdrawAmount;
		}
		if (withdrawAmount > balance) {
			std::cout << "\nWithdrawa; amount exceeded account balance." << std::endl;
		}
	}

	int getBalance() const {
		return balance;
	}

	void setName(std::string accountName) {
		name = accountName;
	}

	std::string getName() const {
		return name;
	}

private:
	std::string name;
	int balance{ 0 };
};
#include<iostream>
#include<string>
using namespace std; 
class Operater
{
public:
	double Number1;
	double Number2;
	virtual double calculater() = 0;
};
class Add:public Operater
{
public:
	Add(double num1, double num2) { Number1 = num1; Number2 = num2; }
	double calculater()
	{
		return Number1 + Number2;
	}
};
class Mul:public Operater
{
public:
	Mul(double num1, double num2) { Number1 = num1; Number2 = num2; }
	double calculater()
	{
		return Number1 - Number2;
	}
};
class Cheng:public Operater
{
public:
	Cheng(double num1, double num2) { Number1 = num1; Number2 = num2; }
	double calculater()
	{
		return Number1 * Number2;
	}
};
class Chu:public Operater
{
public:
	Chu(double num1, double num2) { Number1 = num1; Number2 = num2; }
	double calculater()
	{
		return Number1 / Number2;
	}
};
double Oper(Operater* oper)
{
	return  oper->calculater();
}
int main()
{
	double number1, number2;
	char op;
	Operater* oper;
	while (1)
	{
		cout << "请输入您想计算的式子：" << endl;
		cin >> number1 >> op >> number2;
		if (op == '+')
		{
			oper = new Add(number1, number2);
			cout <<number1<<op<<number2<<"="<< Oper(oper);
			delete oper;
			break;
		}
		else if (op == '-')
		{
			oper = new Mul(number1, number2);
			cout << number1 << op << number2 << "="<<Oper(oper);
			delete oper;
			break;
		}
		else if (op == '*')
		{
			oper = new Cheng(number1, number2);
			cout << number1 << op << number2 << "="<<Oper(oper);
			delete oper;
			break;
		}
		else if (op == '/')
		{
			oper = new Chu(number1, number2);
			cout << number1 << op << number2 << "="<< Oper(oper);
			delete oper;
			break;
		}
		else
		{
			cout << "目前还没有这个功能，请重新输入：" << endl;
			continue;
		}
	}
	return 0;
}

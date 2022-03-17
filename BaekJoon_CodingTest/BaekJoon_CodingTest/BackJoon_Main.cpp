#include <iostream>
#include <cmath>

using namespace std;

// ����°� ��Ģ���� ( ���� 1�ܰ� )
#pragma region BaekJoon_Level1
// 2557�� ���� ( Hello World! ����ϱ� )
void HelloWorld()
{
	[](string str) // ���ٽ� ��뿬�� �� Hello World ���
	{
		cout << str << endl;
	}("HelloWorld!");
}
// 10718�� ���� ( ���ӵ� ���ڿ� 2�� ����ϱ�)
void WeLoveKriii()
{
	for (int i = 0; i < 2; i++)
		cout << "����ģ�� ��������" << endl;
}
// 10171�� ���� (����� �׸���)
void Cat()
{
	cout << "\\    /\\" << endl;
	cout << " )  ( ')" << endl;
	cout << "(  /  )" << endl;
	cout << "\\ (__)|" << endl;
}
// 10172�� ���� (������ �׸���)
void Dog()
{
	cout << "|\\_/|" << endl;
	cout << "|q p|   /}" << endl;
	cout << "( 0 )\"\"\"\\" << endl;
	cout << "|\"^\"`    |" << endl;
	cout << "||_/=\\\\__|" << endl;
}
// 1000�� ���� (+)
void Sum()
{
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
}
// 1001�� ���� (-)
void Sub()
{
	int a, b;
	cin >> a >> b;
	cout << a - b << endl;

}
// 10998�� ���� (*)
void Mul()
{
	int a, b;
	cin >> a >> b;
	cout << a * b << endl;
}
// 1008�� ���� (/)
void Div()
{
	double a, b;
	cin >> a >> b;

	cout.precision(12); // �Ǽ� ��ü �ڸ��� �� n�ڸ� ���� ǥ��
	cout << fixed; // ���� �Ҽ��� ǥ��� ��ȯ
	cout << a / b << endl;
}
// 10869�� ���� (��Ģ����)
void ArithmeticOperation()
{
	int a, b;
	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
}
// 10926�� ���� ( ���ڿ� ��ġ�� )
void Surprised()
{
	string str;

	cin >> str;
	cout << str + "??!";
}
// 18108�� ���� ( �ұ⿬�� -> ���⿬�� )
void YearChanger()
{
	int a;
	cin >> a;
	cout << a - 543;
}
// 10430�� ���� ( ������ ���� ����ϱ� )
void Remain()
{
	int a, b, c;
	cin >> a >> b >> c;

	cout << (a + b) % c << endl;
	cout << ((a % c) + (b % c)) % c << endl;
	cout << (a * b) % c << endl;
	cout << ((a % c) * (b % c)) % c << endl;
}
// 2588�� ���� ( �� �ڸ� �� ���� ���� ���� ����) : �� �ڸ��� -> ��� �ڸ����� Ǯ���
void MulOrder()
{
	int a, b;
	int powCount = 1;
	int remainData = 0;
	int divData = 0;
	cin >> a >> b;

	while (true)
	{
		remainData = (int)pow(10, powCount);
		divData = (int)pow(10, powCount - 1);

		if (b == (b % divData))
			break;

		cout << (a * ((b % remainData) / divData)) << endl;

		powCount++;
	}

	cout << a * b << endl;
}
#pragma endregion
// if�� (���� 2�ܰ�)
#pragma region BaekJoon_Level2

// 1330�� ���� ( �� �� ���ϱ� )
void Compare()
{
	int a, b;
	cin >> a >> b;

	if (a > b)
		cout << ">" << endl;
	if (a < b)
		cout << "<" << endl;
	if (a == b)
		cout << "==" << endl;
}
// 9498�� ���� ( ���� �з� )
void Grade()
{
	int a;
	cin >> a;

	if (a >= 90)
		cout << "A";
	else if (a >= 80)
		cout << "B";
	else if (a >= 70)
		cout << "C";
	else if (a >= 60)
		cout << "D";
	else
		cout << "F";

}
// 2753�� ���� (����)
void LeapMonth()
{
	int a;
	cin >> a;

	cout << ((a % 4 == 0) & ((a % 100 != 0) | (a % 400 == 0))) << endl;
}
#pragma endregion

int main()
{


	return 0;
}


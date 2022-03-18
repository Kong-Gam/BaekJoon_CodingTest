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
// 14681�� ���� (��и�)
void Quadrant()
{
	int a, b;
	cin >> a >> b;

	if ((a > 0) & (b > 0))
		cout << 1 << endl;
	else if ((a < 0) & (b > 0))
		cout << 2 << endl;
	else if ((a < 0) & (b < 0))
		cout << 3 << endl;
	else if ((a > 0) & (b < 0))
		cout << 4 << endl;

}
// 2884�� ���� (�˶� �ð�)
void AlamClock()
{
	int a, b;
	cin >> a >> b;

	if ((a < 0) | (a > 23))
		return;
	if ((a < 0) | (a > 59))
		return;


	if ((a == 0) & (b < 45))
		a = 24;

	if (b == 0)
	{
		a--;
		b = 60;
	}

	if (b < 45)
	{
		a--;
		b = 60 + (b - 45);
	}
	else
		b = b - 45;

	cout << a << " " << b << endl;

}
// 2525�� ���� (���� Ÿ�̸�)
void Timer()
{
	int a, b, c, d, e;
	cin >> a >> b;
	cin >> c;

	d = b + c;
	e = d / 60;

	a += e;

	if (d < 60)
		b = d;
	else
		b = d - (60 * e);

	if (a > 23)
		a -= 24;
	if (b > 60)
		b -= 60;

	cout << a << " " << b << endl;
	
}
// 2480�� ���� (�ֻ��� 3��)
void DiceGame()
{
	int a, b, c, d;
	cin >> a >> b >> c;

	if ((a == b) && (b == c) && (c == a))
		cout << 10000 + (a * 1000) << endl;
	else
	{
		if ((a == b) || (a == c))
			cout << 1000 + (a * 100) << endl;
		else if ((a == b) || (b == c))
			cout << 1000 + (b * 100) << endl;
		else if ((c == a) || (c == b))
			cout << 1000 + (c * 100) << endl;
	}

	if ((a != b) && (b != c) && (c != a))
	{
		if (a > b)
			d = a;
		else
			d = b;
		if (c > d)
			d = c;

		cout << d * 100 << endl;
	}
}
#pragma endregion

int main()
{
	return 0;
}


#include "Defines.h"

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
// for�� (���� 3�ܰ�)
#pragma region BaekJoon_Level3
// 2739�� ���� (������)
void MultiTable()
{
	int a;
	cin >> a;

	for (int i = 1; i < 10; i++)
		cout << a << " * " << i << " = " << a * i << endl;
}
// 10950�� ���� (���ϴ� ����ŭ �ݺ��ϸ� �������)
void RepeatSum()
{
	vector<int> vecResult;
	int a, b, c;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		vecResult.push_back(b + c);
	}

	for (unsigned i = 0; i < vecResult.size(); i++)
		cout << vecResult[i] << endl;
}
// 8393�� ���� (������)
void AccumSum()
{
	int a, b;
	cin >> a;
	b = 0;

	for (int i = 1; i < a + 1; i++)
		b += i;

	cout << b << endl;
}
// 15552�� ���� (���� A+B)
void FastSum()
{
	int a, b, c;
	vector<int> vecResult;

	cin.tie(NULL);
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		vecResult.push_back(b + c);
	}

	for (unsigned int i = 0; i < vecResult.size(); i++)
		cout << vecResult[i] << "\n";

}
// 2741�� ���� (��ü ���)
void FullOutput()
{
	int a;
	cin.tie(NULL);
	cin >> a;

	for (int i = 1; i < a + 1; i++)
		cout << i << "\n";
}
// 2742�� ���� (���� ���)
void ReverseOutPut()
{
	int a;
	cin.tie(NULL);
	cin >> a;

	for (int i = a; i > 0; i--)
		cout << i << "\n";
}
// 11021�� ���� (���� ������ ���� ���1)
void DatasSum()
{
	vector<int> vecResult;
	int a, b, c;
	cin.tie(NULL);
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		vecResult.push_back(b + c);
	}

	for (unsigned int i = 0; i < vecResult.size(); i++)
		cout << "Case #" << i + 1 << ": " << vecResult[i] << "\n";
}
// 11022�� ���� (������ ���� ��� ��ȭ)
void DatasSumPlus()
{
	vector<string> vecResult;
	int a, b, c;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;
		string str = to_string(b) + " + " + to_string(c) + " = " + to_string(b + c);
		vecResult.push_back(str);
	}

	for (unsigned int i = 0; i < vecResult.size(); i++)
		cout << "Case #" << i + 1 << ": " << vecResult[i] << "\n";
}
// 2438�� ���� (�� ���)
void DrawStars()
{
	int a;
	cin.tie(NULL);
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i + 1; j++)
			cout << "*";

		cout << "\n";
	}
}
// 2439�� ���� (�� ���2)
void DrawStars2()
{
	int a;
	cin.tie(NULL);
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (i > (a - j) - 2)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
}
// 10871�� ���� (������ ã��)
void MinValueFinder()
{
	vector<int> vecResult;
	int a, b;
	cin.tie(NULL);
	cin >> a >> b;

	for (int i = 0; i < a; i++)
	{
		int c;
		cin >> c;
		vecResult.push_back(c);
	}

	for (unsigned int i = 0; i < vecResult.size(); i++)
	{
		if (vecResult[i] < b)
			cout << vecResult[i] << " ";
	}
}

#pragma endregion
// while�� (���� 4�ܰ�)
#pragma region BaekJoon_Level4
// 10952�� ���� (A+B)
void WhileSum()
{
	vector<int> vecResult;

	int a, b;
	cin.tie(NULL);

	while (true)
	{
		cin >> a >> b;

		if ((a == 0) & (b == 0))
			break;

		vecResult.push_back(a + b);
	}

	for (unsigned int i = 0; i < vecResult.size(); i++)
		cout << vecResult[i] << "\n";
}
// 10951�� ���� (eof A+B)
void EofWhileSum()
{
	vector<int> vecResult;

	int a, b;
	cin.tie(NULL);

	while (!(cin >> a >> b).eof())
		vecResult.push_back(a + b);


	for (unsigned int i = 0; i < vecResult.size(); i++)
		cout << vecResult[i] << "\n";
}
// 1110�� ���� (����Ŭ ���� ���ϱ�)
void CycleLength()
{
	int a, b, c;
	cin.tie(NULL);
	cin >> a;

	if (a < 10)
		a *= 10;

	b = a;
	c = 0;

	while (true)
	{
		int d, e;

		d = a / 10;
		e = a % 10;

		a = (e * 10) + ((d + e) % 10);

		c++;
		if (b == a)
			break;
	}

	cout << c << endl;
}
#pragma endregion
// �迭 (���� 5�ܰ�)
#pragma region BaekJoon_Level5
// 10818�� ���� (�ּ�,�ִ밪 ���ϱ�)
void MinMax()
{
	vector<int> vecResult;
	int a, b, c, d;
	cin.tie(NULL);
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> b;
		vecResult.push_back(b);
	}

	c = vecResult[0];
	d = vecResult[0];

	for (unsigned i = 0; i < vecResult.size(); i++)
	{
		if (c > vecResult[i])
			c = vecResult[i];

		if (d < vecResult[i])
			d = vecResult[i];
	}

	cout << c << " " << d;
}
// 2562�� ���� (�ִ밪 ���ϱ�)
void Max()
{
	int a = 0, b = 0, c = 0;
	int iArray[9];

	cin.tie(NULL);
	for (int i = 0; i < 9; i++)
	{
		cin >> a;
		iArray[i] = a;
	}

	for (int i = 0; i < 9; i++)
	{
		if (b < iArray[i])
		{
			b = iArray[i];
			c = int(i + 1);
		}
	}

	cout << b << "\n" << c;
}
// 2577�� ���� (���� ����)
void CountNumber()
{
	int a, b, c, d;
	int e[10] = { 0,0,0,0,0,0,0,0,0,0 };
	string str;
	cin.tie(NULL);
	cin >> a >> b >> c;

	d = a * b * c;

	str = to_string(d);

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (str[j] == (char)(i + 48))
				e[i]++;
		}
	}

	for (int i = 0; i < 10; i++)
		cout << e[i] << endl;
}
// 3052�� ���� (�ٸ� ������ ���� ���ϱ�)
void DiffDataCount()
{
	int a[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int b = 0;
	cin.tie(NULL);
	for (int i = 0; i < 10; i++)
	{
		int d = 0;
		cin >> d;
		a[i] = d % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (a[i] == a[j])
				a[i] = -1;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (a[i] != -1)
			b++;
	}


	cout << b << "\n";
}
// 1546�� ���� (�������)
void FakeAverage()
{
	double* a;
	int b;
	double d = 0, e = 0;

	cin.tie(NULL);
	cout << fixed;
	cout.precision(8);

	cin >> b;

	a = new double[b];

	for (int i = 0; i < b; i++)
	{
		double c;
		cin >> c;
		a[i] = c;
	}

	for (int i = 0; i < b; i++)
	{
		if (d < a[i])
			d = a[i];
	}

	for (int i = 0; i < b; i++)
	{
		e += (a[i] / d) * 100.0f;
	}

	cout << e / b << "\n";
}
// 8958�� ���� (OX����)
void OXQuiz()
{
	int a;
	string* b;
	int* d;

	cin.tie(NULL);
	cin >> a;

	b = new string[a];
	d = new int[a];

	for (int i = 0; i < a; i++)
	{
		char c[80];
		cin >> c;
		b[i] = c;
		d[i] = 0;
	}

	for (int i = 0; i < a; i++)
	{
		int e = 0;
		for (int j = 0; j < 80; j++)
		{
			if (b[i][j] == '\0')
				break;

			if (b[i][j] == 'O')
				e++;
			else if (b[i][j] == 'X')
				e = 0;

			d[i] += e;
		}
	}

	for (int i = 0; i < a; i++)
		cout << d[i] << "\n";
}
// 4344�� ���� (��ճѴ¼�)
void HighAverage()
{
	float** a;
	int b, c;
	float e = 0.0f;
	float* result;

	cin.tie(NULL);
	cin >> b;
	cout << fixed;
	cout.precision(3);

	a = new float* [b];

	for (int i = 0; i < b; i++)
	{
		cin >> c;
		a[i] = new float[c + 1];
		a[i][0] = (float)c;
		float d;

		for (int j = 1; j < c + 1; j++)
		{
			cin >> d;
			a[i][j] = d;
		}

		c = 0;
		d = 0;
	}

	for (int i = 0; i < b; i++)
	{
		e = 0.0f;

		for (int j = 1; j < a[i][0] + 1; j++)
		{
			e += a[i][j];
		}

		e /= a[i][0];
		int f = 0;
		result = new float[b];

		for (int j = 1; j < a[i][0] + 1; j++)
		{
			if (e < a[i][j])
				f++;
		}

		result[i] = (f / a[i][0]) * 100.0f;

		cout << result[i] << "%" << "\n";
	}
}
#pragma endregion
// �Լ� (���� 6�ܰ�)
#pragma region BaekJoon_Level6
// 15596�� ���� (���� N���� ��)
long long sum(vector<int>& a)
{
	long long sum = 0;
	for (unsigned int i = 0; i < a.size(); i++)
		sum += a[i];

	return sum;
}
// 4673�� ���� (�����ѹ�)
void SelfNumber(int n)
{
	bool* a = new bool[n] { false };
	int b = 0, c = 0;

	for (int i = 1; i <= n; i++)
	{
		c = b = i;

		if (a[i - 1] == false)
			cout << i << "\n";

		while (true)
		{
			c += b % 10;
			b /= 10;

			if (b <= 0)
				break;
		}

		if ((c - 1) < 10000)
			a[c - 1] = true;
	}
}
// 1065�� ���� (�Ѽ�(�����������ù���))
void Arithmetic(int n)
{
	int a = 0;
	int b, c, d;
	for (int i = 1; i <= n; i++)
	{
		if (i < 100)
		{
			++a;
			continue;
		}

		if (i == 1000)
			continue;

		d = i % 10;
		c = (i / 10) % 10;
		b = ((i / 10) / 10) % 10;

		if (((d-c) == (c-b)) || ((b-c) == (c-d)))
			++a;
	}

	cout << a;
}

#pragma endregion
// ���ڿ� (���� 7�ܰ�)
#pragma region BaekJoon_Level7
// 11654�� ���� (�ƽ�Ű�ڵ�)
void AsciiCode()
{
	char a;

	cin.tie(NULL);
	cin >> a;

	cout << int(a) << endl;
}
// 11720�� ���� (������ ��)
void TotalSum()
{
	char* a;
	int b = 0, c = 0, d = 0;

	cin.tie(NULL);
	cin >> b;

	a = new char[b];

	cin >> a;

	for (int i = 0; i < b; i++)
		d += a[i] - '0';

	cout << d << endl;
}
// 10809�� ���� (���ĺ� ã��)
void FindAlphabet()
{
	char a[101] = {};
	int b[26] = {};
	fill_n(b, 26, -1);

	cin.tie(NULL);
	cin >> a;

	for (long unsigned int i = 0; i < strlen(a); i++)
	{
		int c = a[i] - 97;
		if (b[c] == -1) { b[c] = i; }
	}

	for (const auto& a : b)
		cout << a << " ";
}
// 2675�� ���� (���ڿ� �ݺ� ����)
void RepeatString()
{
	int a = 0;
	int b = 0;
	string c = "";
	string* d;

	cin.tie(NULL);
	cin >> a;

	d = new string[a];

	for (int i = 0; i < a; i++)
	{
		cin >> b >> c;

		for (const auto& a : c)
		{
			for (int j = 0; j < b; j++)
				d[i].push_back(a);
		}
	}

	for (int i = 0; i < a; i++)
		cout << d[i] << endl;
}
// 1157�� ���� (���� ���� ���� ���ĺ�)
void MostUseSpell()
{
	char a[1000001] = "";

	cin.tie(NULL);
	cin >> a;

	int b[26];
	int c = 0, d = 0;
	long unsigned int f = strlen(a);
	bool IsCheck = false;

	fill_n(b, 26, 0);

	for (long unsigned int i = 0; i < f; i++)
	{
		int e = 0;

		if ((a[i] >= 97) && (a[i] <= 122))
			e = a[i] - 97;
		if ((a[i] >= 65) && (a[i] <= 90))
			e = a[i] - 65;

		if (e >= 0 && e < 26)
			b[e]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (b[i] > c)
		{
			c = b[i];
			d = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (c == b[i] && d != i)
			IsCheck = true;
	}

	if (IsCheck)
		cout << "?";
	else
		cout << (char)(d + 65);
}
// 1152�� ���� (�ܾ� ���� ���ϱ�)
void CountWord()
{
	char a[1000001] = "";

	cin.tie(NULL);
	cin.getline(a, 1000001);
	int b = 0;
	long unsigned int c = strlen(a);

	for (long unsigned int i = 0; i < c; i++)
	{
		if (((a[i + 1] == '\0') && a[i] != ' ') || (a[i + 1] == ' '))
			++b;
	}

	cout << b;
}
// 2908�� ���� (���� ũ�� ��)
void ReverseCompare()
{
	char a[4] = {}, b[4] = {};
	int c = 0;

	cin.tie(NULL);
	cin >> a >> b;

	long unsigned int d = strlen(a);
	long unsigned int e = strlen(b);
	int f = 0, g = 0;

	for (long unsigned int i = 0; i < (d / 2); i++)
	{
		char temp = a[i];
		a[i] = a[d - i - 1];
		a[d - i - 1] = temp;
	}

	f = atoi(a);

	for (long unsigned int i = 0; i < (e / 2); i++)
	{
		char temp = b[i];
		b[i] = b[e - i - 1];
		b[e - i - 1] = temp;
	}

	g = atoi(b);

	if (f > g)
		g = f;

	cout << g;
}
// 5622�� ���� (���̾�) ��
void Dial()
{
	multimap<int, char> mulmap;

	int a = 0, b = 0, e = 0;
	char c[16] = "";

	for (int i = 0; i < 8; i++)
	{
		if (i == 5 || i == 7)
			b = 4;
		else
			b = 3;

		for (int j = 0; j < b; j++)
			mulmap.insert(make_pair(i + 2, char(65 + (i * 3) + j + a)));

		if (b == 4)
			++a;
	}

	cin.tie(NULL);
	cin >> c;
	long unsigned int d = strlen(c);

	for (long unsigned int i = 0; i < d; i++)
	{
		for (const auto& a : mulmap)
		{
			if (a.second == c[i])
			{
				e += a.first + 1;
			}
		}
	}

	cout << e;
}
// 2941�� ���� (ũ�ξ�Ƽ�� ���ĺ�) ��
void CroatiaSpell()
{

}

#pragma endregion


int main()
{
	multimap<int, string> spellmap;

	spellmap.insert(make_pair(2, "c="));
	spellmap.insert(make_pair(2, "c-"));
	spellmap.insert(make_pair(3, "dz="));
	spellmap.insert(make_pair(2, "d-"));
	spellmap.insert(make_pair(2, "lj"));
	spellmap.insert(make_pair(2, "nj"));
	spellmap.insert(make_pair(2, "s="));
	spellmap.insert(make_pair(2, "z="));

	string a = "";
	int c = 0, d = 0, e = 0, f = 0;
	
	cin.tie(NULL);
	cin >> a;

	for (const auto& b : spellmap)
	{
		e = a.find(b.second, c);
		if (a.npos != e)
		{
			d++;
		}
	}

	cout << d;




	return 0;
}


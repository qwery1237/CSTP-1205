using namespace std;

void BasicPointers()
{
	int* ip;
	int x = 123;
	ip = &x; // &x is address of x

	char* cp;
	char c = 'a';
	cp = &c;

	char* cp2 = nullptr; // default value of *

	*cp = 'x'; // cp 주소에 있는 x 값을 변경
	char d = *cp; // d에 cp주소에 있는 값 넣어줌

	bool test = (&d == cp);
	cout << *ip << &cp << endl;
}
void SwapCopies(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void Swap(int* px, int* py)  // 함수에서 변수들 값 변경이 불가능해서 주소로 접근해 값 변경
{							 // *var = 값 &var = 주소
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

void InitializeArray(int* p, int n) {
	while (n-- > 0)
	{
		*p = 0;
		++p;
	}
}
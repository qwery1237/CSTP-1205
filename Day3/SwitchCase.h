using namespace std;
void SwitchCase1() {
	int n = 5;
	switch (n)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;

	default:
		cout << "Error - n has to be between 1 and 4." << endl;
		break;
	}
}

void SwitchCase2() {
	char c = 's';

	switch (c)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout << "Char c is a vowel" << endl;
		break;
	default:
		cout << "Char c is not a vowel" << endl;
		break;
	}
}

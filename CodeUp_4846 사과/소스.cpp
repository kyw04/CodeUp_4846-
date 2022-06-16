#include <iostream>
using namespace std;

int main()
{
	int n, result = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int student, apple, min = 101;
		cin >> student >> apple;

		result += apple % student;
	}

	cout << result;

	return 0;
}
#include <iostream>
using namespace std;

/// <summary>
/// добавлен комментарий 111
/// </summary>
/// <returns></returns>
int main() {
	int arr[15], n;
	cout << "input n";
	cin >> n;
	for (int i = 0; i <= n; i++) 
	{
		cout << "Arr";
		cin >> arr[i];
	}
	int max = arr[0];
	for (int i = 0; i <= n; i += 1) {
		if (max<arr[i])

		{ max = arr[i];
		}
	}
	cout << "Max=" << max << endl;

	return 0;
}
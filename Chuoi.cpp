#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	char n;
	int dem = 0;
	cout << "Nhap 1 chuoi: ";
	getline(cin, str);
	cout << "\nMuon tim chu: ";
	cin >> n;

	//Dem ky tu
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == n)
			dem++;
	}
	cout << "Co " << dem << " chu " << n;

	cout << endl; 
	//Vi tri chu n
	cout << "Vi tri cua " << n << ": ";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == n)
			cout << i +1 << " ";
	}
}
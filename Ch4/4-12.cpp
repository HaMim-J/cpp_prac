#include <iostream>
#include <string>
using namespace std;

void swap(string &a,string &b){
	string tmp;
	tmp = a;
	a=b;
	b=tmp;
}
int main() {
	int i, j, n;
	cout << "생성할 배열 입력:";
	cin >> n ;
	cin.ignore();
	string *p = new string [n]; // �������� �޾ƾ� ����, ���ڿ� �迭����

	for ( i = 0; i < n; i++)
	{
		cout << "문자열: ";
		getline(cin, p[i], '\n');
		if (p[i].length() == 0)	break;
		
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (p[j] > p[j+1]) { // ���������� latter ���ڿ��� �տ� �´ٸ�
				swap(p[j], p[j + 1]);
			}
		}
	}
	for ( i = 0; i < n; i++)
	{
		cout << p[i]<<endl ;// ���ٿ� ������ �ϴ� ����?
	}
	delete[] p;
	
}
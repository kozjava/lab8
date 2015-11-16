#include<iostream>
#include<cstring>

using namespace std;

template<class T> class Set
{
	T TheArray[10];
public:
	Set()
	{
		cout << "Constructor" << endl;
	}
	void Initialize()
	{
		T zz = T();
		for (int i = 0; i < 5; i++)
		{
			cin >> zz;
			TheArray[i] = T(zz);
		}
	}
	T accumulate() const
	{
		T sum = T();
		for (int i = 0; i < 5; i++)
		{
			sum += TheArray[i];
		}
		cout << sum/2 << endl;
		return sum/2;
	}
	void Set::Show()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << TheArray[i] << endl;
		}	
	}

};
int main()
{
	int i;
	Set<int>Set1;
	Set1.Initialize();
	cout << "------" << endl;
	Set1.Show();
	cout << "-------" << endl;
	Set1.accumulate();
	cout << "-------" << endl;
	//system("pause");
	return 0;

}

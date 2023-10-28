#include"iostream"
#include"iomanip"
using namespace std;
void FillArray(int* arr, const int size, int i);
void OutputArray(int* arr, const int size, int i);
template <typename T>
T FillArrayWithT(T* arr, int size, int i)
{
	T value;
	if(i < size)
	{
		cout << "arr[" << i << "]: "; cin >> value;
		arr[i] = value;
		FillArrayWithT(arr, size, i + 1);
	}
	return '0';
}
template <typename T>
T OutputArrayWithT(T* arr, const T size, T i)
{
	if(i < size)
	{
		cout << setw(4) << arr[i];
		OutputArrayWithT(arr, size, i + 1);
	}
	else
	{
		cout << endl;
	}
	
	return 9;
}
int main()
{

	int n;
	cout << "n: "; cin >> n;
	int* arr1 = new int[n];
	FillArray(arr1, n, 0);
	cout << "By ordinary functions:\n";
	OutputArray(arr1, n, 0);
	cout << "By functions(with templates):\n";
	cout << "n: "; cin >> n;
	int* arr2 = new int[n];
	FillArrayWithT<int>(arr2, n, 0);
	OutputArrayWithT<int>(arr2, n, 0);
	delete[]arr1;
	delete[]arr2;
	return 0;
}
void FillArray(int* arr, const int size, int i)
{
	if (i < size)
	{
		cout << "arr[" << i << "]: "; cin >> arr[i];
		FillArrayWithT(arr, size, i + 1);
	}
}
void OutputArray(int* arr, const int size, int i)
{
	if (i < size)
	{
		cout << setw(4) << arr[i];
		OutputArray(arr, size, i + 1);
	}
	else
	{
		cout << endl;
	}
}


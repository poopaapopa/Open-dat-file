#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	const char* path = "D:\\example\\b_data.dat";
	const int n = 5;
	int arr[n];
	FILE* out;
	if (fopen_s(&out, path, "wb") != NULL)
		cout << "the file cannot be opened";
	else
		for (int i = 0; i < n; i++)
			fwrite(&arr[i], sizeof(int), 1, out);
	return 0;
}
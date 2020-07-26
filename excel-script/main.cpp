#include <iostream>
#include <fstream> //library for work w/ files

using namespace std;

int main()
{
	string path = "myFile.csv";
	ofstream fout; //output

	fout.open(path);

	/*if (!fout.is_open())
	{
		cout << "Error: File is not opened!" << endl;
	}
	else
	{
		for (int i = 0; i < 20; i++)
		{
			fout << i << ";" << i * i << endl;
		}
	}*/

	try
	{
		if (!fout.is_open())
			throw std::invalid_argument
			("ERROR: File did not open!");
		{
			for (int i = 1; i <= 20; i++)
			{
				fout << i << ";" << i * i << endl;
			}
		}
	}
	catch (const std::invalid_argument& e)
	{
		cout << e.what() << endl;
	}
	fout.close();

	system("pause");
	return 0;
}
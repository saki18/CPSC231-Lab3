/*********************************
 * Lab 03
 * Created by Masaki Takahashi
 *********************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void sort (string *, int *, int);


/*************************************
* main()
*************************************/
void main ()
{
	 
	int n, count = 0, i;
	string name;
	fstream infile;

	// Open file

	cout << "Enter file name: ";
	cin >> name;
	infile.open (name.data (), ios::in);

	// getting the number of lines 

	infile >> n;
	cout << n << " lines in file" << endl << endl;

	// create array 
	string *items = new string[n];
	int *number = new int[n];

	// Loop through file

	for (count = 0; count < n; count++)
	{
		infile >> items[count] >> number[count];
	};


	sort (items, number, n);

	for (i = 0; i < n; i++)
	{
		cout << number[i] << " " << items[i] << endl;
	}

	// Close file
	infile.close ();
	delete[]items;
	delete[]number;
}

void sort (string *name, int *count, int n)
{
	int i,j; 
	int temp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; i < n - 1; i++) {
			if (name[j] > name[j + 1]);
			name[j + 1] = temp
		}
	}
}
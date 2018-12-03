#include <string>
#include <string.h>
#include "dirent.h"
#include <vector>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
using namespace std;

class employee
{
private:
	string ID;
	string name;
	float salary;
public:
	void set_values();
	string getID()
	{
		return ID;
	}
	void print_values();
};

class employee_arr
{
private:
	vector<employee> arr;
public:
	void add();
	void outputList();
	void remove(string s);
	employee* search_employee(string s);
};

void employee::set_values()
{
	cout << "input ID: ";
	getline(cin, ID);
	cout << "input name: ";
	getline(cin, name);
	cout << "input salary: ";
	cin >> salary;
}

void employee::print_values()
{
	cout << "ID: " << ID << endl;
	cout << "Name: " << name << endl;
	cout << "Salary: " << salary << endl;
}

void employee_arr::add()
{
	employee e;
	e.set_values();
	arr.push_back(e);
}

void employee_arr::remove(string s)
{
	for (int i = 0; i < arr.size(); i++)
		if (arr[i].getID() == s)
			arr.erase(arr.begin() + i);
}

employee* employee_arr::search_employee(string s)
{
	for (int i = 0; i < arr.size(); i++)
		if (arr[i].getID() == s)
			return &arr[i];
	return NULL;
}

void employee_arr::outputList()
{
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i].print_values();
		cout << endl;
	}
}

int main()
{
	employee_arr e;
	string s;
	char c;
	int op = 1;
	while (op != 0)
	{
		cout << "A, R, S, Q ? " << endl;
		cout << "input choice ? ";
		cin >> c; cin.ignore();
		switch (c)
		{
		case 'A':
			e.add();
			break;
		case 'R':
			cout << "input ID of employee to remove ? ";
			getline(cin, s);
			e.remove(s);
			break;
		case 'S':
			cout << "input ID of employee to find ? ";
			getline(cin, s);
			e.search_employee(s);
			break;
		case 'Q':
			return 0;
		}
	}
}

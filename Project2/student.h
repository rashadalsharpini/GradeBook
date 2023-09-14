#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
class student
{
private:
	string name;
	int id;
	double test, assignment, exam;
	double wholeGrade;
public:
	void addNameId();
	void addTAE();
	void getNameId();
	void getTAE();
	string returnName();
	int returnId();
	double returnWholeGrade();
	bool operator<(const student& other) const {
		return name < other.name;
	}
};


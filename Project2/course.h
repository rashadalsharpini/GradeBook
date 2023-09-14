#pragma once
#include"student.h"
#include<algorithm>
class course
{
private:
	string courseName;
	int courseId;
	double avg;
	student* stu = new student[100];
public:
	
	void addCourseNameId();
	void getCourseNameId();
	void addStudent();
	void getStudent();
	void calcAVG();
	string returncoursename();
	int BinarySearchStudent(string name);
	int counter = 0;
	void editStudent(int place);
	void deleteStudent(int place);
	void displaySpecificStudent(int place);
};


#pragma once
#include"course.h"
class GradeBook
{
private:
	course* cour = new course[50];
	int count = 0;
public:
	void addCourse();//
	void getCourse();//
	int searchCourse(string name);
	void editcourse();//
	void deletecourse();//
	void addStudentForCourse();//
	void DisplayStudentForcourse();//
	void DisplaySpecificStudentForcourse();//
	void EDITstudent();
	void DELETEstudent();
};


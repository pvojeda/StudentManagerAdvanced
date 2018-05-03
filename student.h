#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>
using namespace std;

class student
{
private:
string firstname, lastname;
vector <double> gradeBook;

public:
void setName(string,string);
string fullName();
double getScore();
void addGrade(double);
};

#endif

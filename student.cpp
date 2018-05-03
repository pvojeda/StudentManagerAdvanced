#include "student.h"
#include <string>

using namespace std;

void student::setName(string one,string two)
{
firstname=one;
lastname=two;
}

string student::fullName()
{
string full;
full.append(firstname);
full.append(" ");
full.append(lastname);
return full;
}

double student::getScore()
{
double score = 0.0;
for(int i=0; i<gradeBook.size();i++)
{
score = score + gradeBook[i];
}
if(gradeBook.size() >0)
{
score = score / gradeBook.size();
}
return score;
}

void student::addGrade(double Grade)
{
gradeBook.push_back(Grade);
}

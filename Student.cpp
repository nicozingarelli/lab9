#include "Student.h"

using namespace std;

Student::Student()
{
        // call Person() on implementation
}

Student::Student(const Student& other)
{
        // call Person(other) on implementation
}

Student::Student(int urid, string netid, string lname, string fname, 
       int dob_day, int dob_mo, int dob_yr, 
       string email, string address, long phone,
       int day_admit, int month_admit, int year_admit,
       School school, bool is_full_time, 
       double units_completed)
{
        // call Person(int...) on implementation
} 

Student::~Student()
{

}

list<string> Student::getCourses()
{

}

void Student::addCourse(string course)
{

}

void Student::removeCourse(string course)
{

}

void Student::printCourses()
{

}

void Student::setCourses(list<string> courses)
{

}

void Student::clearCourses()
{

}


struct tm Student::getAdmitDate()
{

}

School Student::getSchool()
{

}

double Student::getGPA()
{

}

double Student::getUnitsCompleted()
{

}

bool Student::isFullTime()
{

}

void Student::setAdmitDate(int day, int month, int year)
{

}

void Student::setSchool(School school)
{

}

void Student::setGPA(double gpa)
{

}

void Student::setUnitsCompleted(double units)
{

}

void Student::setFullTimeStatus(bool isFullTime)
{

}
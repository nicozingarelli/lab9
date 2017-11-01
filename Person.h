#ifndef __PERSON_H__
#define __PERSON_H__

#include <string>
#include <ctime>

using namespace std;

class Person
{
    protected:
        // instance variables here...

    public:
        Person();
        Person(const Person& other);
        Person(int urid, string netid, string lname, string fname, 
               int dob_day, int dob_month, int dob_year,
               string email, string address, long phone);
        ~Person();

        string     getFirstName();
        string     getLastName();
        struct tm  getDateOfBirth(); 
            // see http://www.cplusplus.com/reference/ctime/tm/
        string     getAddress();
        string     getNetID();
        int        getURID();
        string     getEmail();
        long       getPhone();

        void setFirstName(string fname);
        void setLastName(string lname);
        void setDateOfBirth(int day, int month, int year);
        void setAddress(string address);
        void setNetID(string netid);
        void setURID(int urid);
        void setEmail(string email);
        void setPhone(long number);
};

#endif
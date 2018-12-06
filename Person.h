#ifndef __PERSON_H__
#define __PERSON_H__
#include <iostream>
#include <cstring> // strcpy 

class Person
{
public:

	Person():m_id(89), m_age(7) {m_fullname[0]='\0';}

	Person(const char* fullname, unsigned int id, unsigned char age);

	void print() const;
	void setName(const char * fullname);
	void setId(unsigned int id);
	void setAge(unsigned char age);

private:

	char m_fullname[32];
	unsigned int m_id;
	unsigned char m_age;
};


inline void Person::setName(const char * fullname)
{
	 strncpy(m_fullname, fullname,32);
}


inline void Person::setId(unsigned int id)
{
	m_id = id;
}


inline void Person::setAge(unsigned char age)
{
	m_age = age;
}

#endif

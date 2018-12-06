#include "Person.h"


Person::Person(const char* fullname, unsigned int id, unsigned char age)
{


	strcpy(m_fullname, fullname);
	m_id = id;
	m_age = age;
}



void Person::print()const
{
	std::cout <<"NAME: "<< m_fullname <<" Id: " <<  m_id  << " Age: " << (int)m_age << std::endl;	
	
}



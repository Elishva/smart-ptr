#include "Person.h"
#include "SharedPtr.h"


void test_creation_Person()
{
   std::cout<<"----------------------In  test creation Person--------------------------------"<< std::endl;


  SharedPtr<Person> ptr1_Person(new Person("Elisheva",111,20));
  ptr1_Person->print();	
  
  SharedPtr<Person> ptr2_Person(new Person()); 
  ptr2_Person->print();

  SharedPtr<Person> ptr3_Person(new Person("Ruchami",222,22)); 
  ptr3_Person->print();

  std::cout<<"----------------------End test creation Person--------------------------------" << std::endl;		
}


void test_operator_assiment_Person()
{
   std::cout<<"----------------------In test assiment Person--------------------------------"<< std::endl;


  SharedPtr<Person> ptr1_Person(new Person("Elisheva",111,20));
  ptr1_Person->print();	
  
  SharedPtr<Person> ptr2_Person(new Person()); 
  ptr2_Person->print();

  SharedPtr<Person> ptr3_Person(new Person("Ruchami",222,22)); 
  ptr3_Person->print();

  ptr2_Person = ptr3_Person;
  ptr2_Person->print();

  ptr1_Person = ptr2_Person; 
  ptr1_Person->print();

  std::cout<<"----------------------End test assiment Person--------------------------------" << std::endl;		
}


void test_operator_not_equals_Person()
{
  std::cout<<"----------------------In test not equalse Person--------------------------------"<< std::endl;
  SharedPtr<Person> ptr1_Person(new Person("Elisheva",111,20));
  ptr1_Person->print();
  SharedPtr<Person> ptr2_Person(new Person("Ruchami",222,22)); 
  ptr2_Person->print();	
  if(ptr1_Person != ptr2_Person)
	std::cout << "true" << std::endl;
  else
	std::cout << "false" << std::endl;
 
  std::cout<<"----------------------End test not equalse Person--------------------------------"<< std::endl;
}
  
void test_operator_equals_Person()
{
  std::cout<<"----------------------In test  equalse Person--------------------------------"<< std::endl;
  SharedPtr<Person> ptr1_Person(new Person("Elisheva",111,20));
  ptr1_Person->print();
  SharedPtr<Person> ptr2_Person(new Person("Elisheva",111,20)); 
  ptr2_Person->print();	
  if(ptr1_Person == ptr2_Person)
	std::cout << "true" << std::endl;
  else
	std::cout << "false" << std::endl;
 
  std::cout<<"----------------------End test equalse Person--------------------------------"<< std::endl;
}


int main()
{
    test_creation_Person();
	test_operator_assiment_Person();
	test_operator_not_equals_Person();
    test_operator_equals_Person();
	return 1;
}

#include "uniqePtr.h"
#include "Person.h"

/*
void testPrimative()
{
    std::cout<<"----------------------In test Premitive--------------------------------" ;

    UniquePtr<int> ptr_int(new int()); 
    *ptr_int = 20; 
    std::cout << *ptr_int << std::endl;

    UniquePtr<double> ptr_double(new double()); 
    *ptr_double = 13.5;
    std::cout << *ptr_double << std::endl; 


    UniquePtr<char> ptr_char(new char());
    *ptr_char = 'a';
    std::cout << *ptr_char << std::endl; 

	
    UniquePtr<float> ptr_float(new float());
    *ptr_float = 2.5;
    std::cout << *ptr_float << std::endl; 

    UniquePtr<float> ptr(new float());
    std::cout << *ptr << std::endl; 

    UniquePtr<float> p();
    std::cout << *p << std::endl;
 
    std::cout<<"----------------------End test Premitive--------------------------------" ;
}
*/



void testPerson()
{
   std::cout<<"----------------------In test Person--------------------------------" ;

   UniquePtr<Person> ptr1_Person(new Person("Elisheva",111,20));
   ptr1_Person->print();	

   UniquePtr<Person> ptr2_Person(new Person()); 
   ptr2_Person->print();

  UniquePtr<Person> ptr3_Person(new Person("Ruchami",222,22)); 
   ptr3_Person->print();


   std::cout<<"----------------------End test Person--------------------------------" ;		
}




int main() 
{ 
  /* testPrimative();*/
   testPerson();
    return 0; 
}

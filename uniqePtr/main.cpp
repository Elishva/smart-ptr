#include "uniqePtr.h"
#include "Person.h"


void testPrimative()
{
    std::cout<<"----------------------In test Premitive-----------------------------" << std::endl;

    UniquePtr<int> ptr_int(new int()); 
    *ptr_int = 20; 
    std::cout << "Int: "<<*ptr_int << std::endl;

    UniquePtr<double> ptr_double(new double()); 
    *ptr_double = 13.5;
    std::cout << "Double: "<<*ptr_double << std::endl; 


    UniquePtr<char> ptr_char(new char());
    *ptr_char = 'a';
    std::cout <<"Char: "<< *ptr_char << std::endl; 

	
    UniquePtr<float> ptr_float(new float());
    *ptr_float = 2.5;
    std::cout <<"Float: "<< *ptr_float << std::endl; 


    UniquePtr<float> ptr(new float());
    std::cout <<"Null: "<< *ptr << std::endl; 


    UniquePtr<float> p();
    std::cout <<"Function: "<< *p << std::endl;
 
    std::cout<<"----------------------End test Premitive----------------------------"<< std::endl ;
}




void testPerson()
{
   std::cout<<"----------------------In test Person--------------------------------"<< std::endl;

   UniquePtr<Person> ptr1_Person(new Person("Elisheva",111,20));
   ptr1_Person->print();	

   UniquePtr<Person> ptr2_Person(new Person()); 


   ptr2_Person->print();

  UniquePtr<Person> ptr3_Person(new Person("Ruchami",222,22)); 
   ptr3_Person->print();


   std::cout<<"----------------------End test Person--------------------------------" << std::endl;		
}




int main() 
{ 
   testPrimative();
   testPerson();
    return 0; 
}

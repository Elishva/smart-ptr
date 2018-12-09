#ifndef __SHAREDPTR__H_
#define __SHAREDPTR__H_
#include <iostream>
template<typename T>
class SharedPtr
{
public:
    explicit SharedPtr(T* ptr = NULL);
    SharedPtr(const SharedPtr & other);
    ~SharedPtr();

    T* operator->() const;
    T& operator*()  const;

	SharedPtr& operator= (SharedPtr& other);
	//void reset();
	
	
	bool operator==(const SharedPtr& other) const;
	bool operator!=(const SharedPtr& other) const;

	operator bool() const;
	
    T* get() const;	
	
	
private:
	T * m_ptr;
	size_t * refCount;
};


template<typename T>
SharedPtr<T>::SharedPtr(T* ptr )
{
  std::cout << "-------------------In constractor------------------ " << std::endl;
  m_ptr = ptr;
  refCount = new size_t(1);
  std::cout << *refCount<<std::endl;
  std::cout << "-------------------End constractor------------------ " << std::endl;
}


template<typename T>
SharedPtr<T>::SharedPtr(const SharedPtr<T> & other ):m_ptr(other.m_ptr),refCount(other.refCount)
{
    std::cout << "-------------------In Copy constractor------------------ " << std::endl;
	++(*refCount);
	std::cout << *refCount<<std::endl;
	std::cout << "-------------------End Copy constractor------------------ " << std::endl;
}


template<typename T>
SharedPtr<T>& SharedPtr<T>::operator=(SharedPtr<T>& other)
{
    std::cout << "-------------------operator = ------------------ " << std::endl;
    if(this != &other)
	{
		--(*refCount);
		if(*refCount == 0)
	 	{
			delete m_ptr;
			delete refCount;
		}
		m_ptr = other.m_ptr;
                refCount =other.refCount;
		++(*refCount);
	}
 	std::cout << *refCount<<std::endl;
	return *this;
}

template<typename T>
SharedPtr<T>::~SharedPtr()
{
	if(*refCount == 1)
		delete m_ptr;
	--(*refCount);
}


template<typename T>
T* SharedPtr<T>::operator->() const
{
	return m_ptr;	
}


template<typename T>
T& SharedPtr<T>::operator*()  const
{
	return *m_ptr;
}



template<typename T>
bool SharedPtr<T>::operator==(const SharedPtr<T>& other) const
{
	return (*m_ptr == *other.m_ptr);  
}


template<typename T>
bool SharedPtr<T>::operator!=(const SharedPtr<T>& other) const
{
	return ! (*this ==  other);  
}



template<typename T>
SharedPtr<T>::operator bool() const
{
	if(m_ptr)
	  return true;
	return false;
}

template<typename T>
T* SharedPtr<T>::get() const
{
	if(m_ptr)
		return m_ptr;
	return NULL;
}	




#endif

#pragma once
#include <exception>
#include <string>

class CommunicationException :
	public std::exception
{
public:
	virtual const char* what() const throw();

	CommunicationException() throw();
	~CommunicationException() throw();

private:
	std::string m_phrase;
};
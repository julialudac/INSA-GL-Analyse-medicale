#include "stdafx.h"
#include "ReadException.h"


const char* ReadException::what() const throw()
{
	return m_phrase.c_str();
}

ReadException::ReadException() throw(): m_phrase("Impossible de lire le genome. Verifiez la presence du fichier ou son format")
{

}


ReadException::~ReadException() throw()
{

}
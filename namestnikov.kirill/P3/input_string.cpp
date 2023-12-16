#include "input_string.hpp"


char * namestnikov::getLongerString(char * string, size_t oldSize, size_t newSize)
{
  char * newString = new char[newSize];
  for (size_t i = 0; i < newSize; ++i)
  {
    if (i < oldSize)
    {
      newString[i] = string[i];
    }
    else
    {
      newString[i] = '0';
    }
  }
  delete [] string;
  return newString;
}

char * namestnikov::inputString(std::istream & in)
{
  size_t strSize = 20;
  size_t strIndex = 0;
  char * string = new char [strSize];
  char sym = '0';
  for (size_t i = 0; i < strSize; ++i)
  {
    string[i] = '0';
  }
  in >> std::noskipws;
  while (in >> sym)
  {
    if (sym == '\n')
    {
      string[strIndex] = '\0';
      break;
    }
    else
    {
      string[strIndex] = sym;
    }
    if (strIndex + 1 == strSize)
    {
      try
      {
        string = getLongerString(string, strSize, strSize + 20);
        strSize += 20;
      }
      catch (...)
      {
        delete [] string;
        throw;
      }
    }
    ++strIndex;
  }
  in >> std::skipws;
  return string;
}

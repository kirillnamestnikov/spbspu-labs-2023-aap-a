#include <iostream>
#include <new>

int main()
{
  using namespace marishin;
  char targetChar = 0;
  char replacementChar = 0;
  char* buffer = nullptr;
  char* result = nullptr;
  try
  {
    buffer = inputString(std::cin);
  }
  catch (const std::exception& ba))
  {
    std::cerr << "Error: " << ba.what() << '\n';
    return 1;
  }
}

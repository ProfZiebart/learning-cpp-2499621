#include <iostream>

int main()
{
  float variable_1 = 4.3;
  float variable_2 = -2.8;
  float variable_3 = 18.2;
  if (variable_1 < variable_2)
  {
    std::cout << "If Wahr " << std::endl;
  }
  else if (variable_2 > variable_3)
  {
    std::cout << "If Falsch elseif true " << std::endl;
  }
  else
  {
    std::cout << "If Falsch, elseif falsch" << std::endl;
  }

  for (int i = 0; i < 14; i++)
  {
    std::cout << "Der Index hat den Wert " << i << std::endl;
  }
  return 0;
}

#include <iostream>

int main(int, char**){ 
   int  a = 5;
   int &r = a;

   std::cout << a << " " << r << std::endl;
   std::cin  >> a;
   std::cout << a << " " << r << std::endl;
   std::cin  >> r;
   std::cout << a << " " << r << std::endl;
}

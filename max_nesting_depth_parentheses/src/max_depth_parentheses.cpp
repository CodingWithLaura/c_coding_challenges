#include <stdio.h>
#include <string>
#include <iostream>

int max_depth (std::string input){
  int count = 0;
  int max = 0;
  for (char const &c : input) {
    if(c == '('){
      count++;
      if(count > max)
        max = count;
    }
    if(c == ')') {
      count--;
    }
  }
  return max;
}


int main(int argc, char *argv[])
{
  std::string mein_string(argv[1]);
  std::cout << "max: " << max_depth(mein_string) << std::endl;
  return 0;
}

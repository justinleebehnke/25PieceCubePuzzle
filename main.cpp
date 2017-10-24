#include <chrono>
#include <iostream>
#include "searcher.h"
int main()
{
  auto start_time = std::chrono::high_resolution_clock::now();
  Searcher s;
  auto current_time = std::chrono::high_resolution_clock::now();
  cout << "Program ran for " << std::chrono::duration_cast<std::chrono::seconds>(current_time - start_time).count() << " seconds" << std::endl;
  return 0;
}

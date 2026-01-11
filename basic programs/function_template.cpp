#include <iostream>

template <typename T,typename U>

auto max(T a, U b) {
    return (a>b)?a:b;
}

main()
{
  std::cout << max(1,2.1);
}
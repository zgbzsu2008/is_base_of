#include <iostream>
#include <type_traits>

struct A {
  using key = A;
};

class B : public A {};

int main() {
  std::cout << std::boolalpha;
  std::cout << "A is base of B? " << std::is_base_of<A, B>::value << '\n';
  std::cout << "A::key is base of A? " << std::is_base_of<A::key, A>::value
            << '\n';
  return 0;
}
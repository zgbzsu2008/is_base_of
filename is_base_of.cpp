#include <iostream>
#include <type_traits>

class A {};
class B : public A {};
class C : public A {};

int main() {
  std::cout << std::boolalpha;
  std::cout << "A is base of A? " << std::is_base_of<A, A>::value << '\n';
  std::cout << "B is base of C? " << std::is_base_of<B, C>::value << '\n';
  std::cout << "A is base of B? " << std::is_base_of<A, B>::value << '\n';
  return 0;
}
#include "FooImpl.h"
#include "Foo.h"


int main() {
  auto foo_impl = std::make_unique<FooImpl>();
  Foo::setInstance(std::move(foo_impl));
  Foo::hello();
}


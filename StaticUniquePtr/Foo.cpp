#include "Foo.h"

std::unique_ptr<Foo::Impl> Foo::impl_ = nullptr;

void Foo::setInstance(std::unique_ptr<Impl> impl) {
  impl_ = std::move(impl);
}

void Foo::hello() {
  if(impl_)
    impl_->hello();
}
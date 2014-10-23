#pragma once

#include "Foo.h"

class FooImpl : public Foo::Impl {
 public:
   void hello() override;
};
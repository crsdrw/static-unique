#pragma once

#include <memory>

class Foo {
 public:
  struct Impl {
   public:
    virtual ~Impl() {}
    virtual void hello() = 0;
  };

  static void setInstance(std::unique_ptr<Impl> impl);
  static void hello();
 private:
  static std::unique_ptr<Impl> impl_;
};
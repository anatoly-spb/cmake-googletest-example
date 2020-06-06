#pragma once

#include "boo/boo.h"

struct Foo {
  void CallBooMethod(Boo& boo)
  {
    boo.BooMethod();
  }
};
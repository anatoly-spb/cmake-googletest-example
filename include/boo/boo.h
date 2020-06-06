#pragma once

struct Boo {
  virtual ~Boo() = default;
  virtual void BooMethod() = 0;
};
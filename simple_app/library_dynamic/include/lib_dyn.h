#pragma once

#ifndef NOEXPORT // Not declared
#define EXPORT_OR_NOT __declspec(dllexport)
#else
#define EXPORT_OR_NOT 
#endif

class EXPORT_OR_NOT LibDynamic
{
public:
  static void hi_fn();
};

#pragma once

class LibHeaderOnly {
public:
    inline static void hi_fn()
    {
      std::cout << "I live inside a header!" << std::endl;
    }
};
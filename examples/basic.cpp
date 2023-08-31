#include <iostream>
#include <krumpatch.h>

class App : public krumpatch::App {
  public:
    App() = default;
    ~App() override = default;
};

auto krumpatch::create_app() -> krumpatch::App * { return new App(); }

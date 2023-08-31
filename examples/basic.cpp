#include <iostream>
#include <krumpatch.h>

class App : public krumpatch::App {
  public:
    App() {}
    virtual ~App() {}
};

krumpatch::App *krumpatch::create_app() { return new App(); }

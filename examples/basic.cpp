#include <iostream>
#include <krumpatch.h>

class App : public krumpatch::App {
  public:
    App() {}
    virtual ~App() {}
};

int main() {
    App *app = new App();
    app->run();
    delete app;
}

#ifndef APP_HPP
#define APP_HPP

namespace krumpatch {

class App {
  public:
    App();
    virtual ~App();

    auto run() -> void;
};

/// This function must be defined in the client.
App *create_app();

} // namespace krumpatch

#endif

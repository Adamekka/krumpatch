#ifndef APP_HPP
#define APP_HPP

namespace krumpatch {

class App {
  public:
    App();
    virtual ~App();

    static auto run() -> void;
};

/// This function must be defined in the client.
auto create_app() -> App *;

} // namespace krumpatch

#endif

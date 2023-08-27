#ifndef APPLICATION_HPP
#define APPLICATION_HPP

namespace krumpatch {

class App {
  public:
    App();
    virtual ~App();

    auto run() -> void;
};

} // namespace krumpatch

#endif

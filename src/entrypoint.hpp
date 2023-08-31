#ifndef ENTRYPOINT_HPP
#define ENTRYPOINT_HPP

#include "app.hpp"

extern krumpatch::App *krumpatch::create_app();

auto main() -> int {
    krumpatch::App *app = krumpatch::create_app();
    app->run();
    delete app;
}

#endif

#ifndef ENTRYPOINT_HPP
#define ENTRYPOINT_HPP

#include "app.hpp"
#include "log.hpp"
#include <memory>

auto main() -> int {
    krumpatch::Log::init();

    std::unique_ptr<krumpatch::App> app(krumpatch::create_app());
    app->run();
}

#endif

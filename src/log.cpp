#include "log.hpp"
#include <spdlog/sinks/stdout_color_sinks.h>

namespace krumpatch {

std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

auto Log::init() -> void {
    spdlog::set_pattern(std::string("%^[%T] %n: %v%$"));
    s_CoreLogger = spdlog::stdout_color_mt("KRUMPATCH");
    s_CoreLogger->set_level(spdlog::level::trace);

    s_ClientLogger = spdlog::stdout_color_mt("APP");
    s_ClientLogger->set_level(spdlog::level::trace);
}

} // namespace krumpatch

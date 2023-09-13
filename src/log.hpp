#ifndef LOG_HPP
#define LOG_HPP

#include <memory>
#include <spdlog/spdlog.h>

namespace krumpatch {

class Log {
  private:
    static std::shared_ptr<spdlog::logger> s_CoreLogger;
    static std::shared_ptr<spdlog::logger> s_ClientLogger;

  public:
    static auto init() -> void;

    inline static auto getCoreLogger() -> std::shared_ptr<spdlog::logger> & {
        return s_CoreLogger;
    }

    inline static auto getClientLogger() -> std::shared_ptr<spdlog::logger> & {
        return s_ClientLogger;
    }
};

} // namespace krumpatch

// Core log macros
#define KP_CORE_TRACE(...) ::krumpatch::Log::getCoreLogger()->trace(__VA_ARGS__)
#define KP_CORE_INFO(...) ::krumpatch::Log::getCoreLogger()->info(__VA_ARGS__)
#define KP_CORE_WARN(...) ::krumpatch::Log::getCoreLogger()->warn(__VA_ARGS__)
#define KP_CORE_ERROR(...) ::krumpatch::Log::getCoreLogger()->error(__VA_ARGS__)
#define KP_CORE_FATAL(...) ::krumpatch::Log::getCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define KP_TRACE(...) ::krumpatch::Log::getClientLogger()->trace(__VA_ARGS__)
#define KP_INFO(...) ::krumpatch::Log::getClientLogger()->info(__VA_ARGS__)
#define KP_WARN(...) ::krumpatch::Log::getClientLogger()->warn(__VA_ARGS__)
#define KP_ERROR(...) ::krumpatch::Log::getClientLogger()->error(__VA_ARGS__)
#define KP_FATAL(...) ::krumpatch::Log::getClientLogger()->fatal(__VA_ARGS__)

#endif

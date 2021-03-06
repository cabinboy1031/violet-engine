#include "Violet/Log.hpp"
using namespace Violet;

Reference<spdlog::logger> Log::s_CoreLogger;
Reference<spdlog::logger> Log::s_ClientLogger;

void Log::init(){
    spdlog::set_pattern("%^[%T] %n: %v%$");

    s_CoreLogger = spdlog::stdout_color_mt("Violet");
    s_CoreLogger->set_level(spdlog::level::trace);

    s_ClientLogger = spdlog::stdout_color_mt("APP");
    s_ClientLogger->set_level(spdlog::level::trace);
}

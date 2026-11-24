// main.cpp — entry point. Wires config and subsystems together.

#include "fnperformance/settings.h"
#include "fnperformance/tuner.h"
#include "fnperformance/lagfix.h"
#include "fnperformance/profiles.h"
#include "fnperformance/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    fnperformance::Settings settings = fnperformance::Settings::load_default();
    fnperformance::Tuner tuner(settings.store_path);
    fnperformance::Lagfix lagfix(settings.store_path);
    fnperformance::Profiles profiles(settings.store_path);
    fnperformance::Cli cli(settings.store_path);
    std::fprintf(stderr, "[fn-performance] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}

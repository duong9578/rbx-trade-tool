// main.cpp — entry point. Wires config and subsystems together.

#include "rbxtradetool/settings.h"
#include "rbxtradetool/valuate.h"
#include "rbxtradetool/history.h"
#include "rbxtradetool/alerts.h"
#include "rbxtradetool/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    rbxtradetool::Settings settings = rbxtradetool::Settings::load_default();
    rbxtradetool::Valuate valuate(settings.store_path);
    rbxtradetool::History history(settings.store_path);
    rbxtradetool::Alerts alerts(settings.store_path);
    rbxtradetool::Cli cli(settings.store_path);
    std::fprintf(stderr, "[rbx-trade-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}

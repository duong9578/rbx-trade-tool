// alerts.cpp — part of rbx-trade-tool.

#include "rbxtradetool/alerts.h"

#include <cstdio>

namespace rbxtradetool {

Alerts::Alerts(const std::string& config_path)
    : config_path_(config_path) {}

void Alerts::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Alerts::run() {
    if (verbose_) std::fprintf(stderr, "[rbx-trade-tool] alerts: run\n");
    // core logic lives here
    return true;
}

}  // namespace rbxtradetool

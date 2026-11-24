// valuate.cpp — part of rbx-trade-tool.

#include "rbxtradetool/valuate.h"

#include <cstdio>

namespace rbxtradetool {

Valuate::Valuate(const std::string& config_path)
    : config_path_(config_path) {}

void Valuate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Valuate::run() {
    if (verbose_) std::fprintf(stderr, "[rbx-trade-tool] valuate: run\n");
    // core logic lives here
    return true;
}

}  // namespace rbxtradetool

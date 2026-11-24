// tuner.cpp — part of fn-performance.

#include "fnperformance/tuner.h"

#include <cstdio>

namespace fnperformance {

Tuner::Tuner(const std::string& config_path)
    : config_path_(config_path) {}

void Tuner::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tuner::run() {
    if (verbose_) std::fprintf(stderr, "[fn-performance] tuner: run\n");
    // core logic lives here
    return true;
}

}  // namespace fnperformance

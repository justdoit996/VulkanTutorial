#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <cstdint>
#include <vector>

namespace constants {
const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

const std::vector<const char*> validationLayers = {
    "VK_LAYER_KHRONOS_validation"};

#ifdef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif

};  // namespace constants
#endif
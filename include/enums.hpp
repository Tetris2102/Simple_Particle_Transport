#ifndef ENUMS_HPP
#define ENUMS_HPP

#include <array>

// Particle name
enum class PName
{
    ALPHA,
    BETA,
    GAMMA,
    NEUTRON,
    PROTON,
    COUNT  // Total number of particle types
};

// Particle type
struct PInfo
{
    PName name;
    float mass;
    short int charge;

    PInfo() : name(PName::ALPHA), mass(0.0f), charge(0) {}

    PInfo(PName _name, float _mass, short int _charge) :
        name(_name), mass(_mass), charge(_charge) {}
};

const std::array<PInfo, static_cast<int>(PName::COUNT)> particleProperties = {
    PInfo{PName::ALPHA, 6.64e-27f, 2},
    PInfo{PName::BETA, 9.11e-31f, -1},
    PInfo{PName::GAMMA, 0.0f, 0},
    PInfo{PName::NEUTRON, 1.68e-27f, 0},
    PInfo{PName::PROTON, 1.67e-27f, 1}
};

#endif // ENUMS_HPP
// Particle name
enum class PName
{
    ALPHA,
    BETA,
    GAMMA,
    NEUTRON,
    PROTON
};

// Particle type
struct PType
{
    PName name;
    float mass;
    short int charge;

    PType(PName _name, float _mass, short int _charge) :
        name(_name), mass(_mass), charge(_charge) {}
};

// Particle properties
namespace Particles
{
    const PType ALPHA = PType{PName::ALPHA, 6.64e-27f, 2};
    const PType BETA = PType{PName::BETA, 9.11e-31f, -1};
    const PType GAMMA = PType{PName::GAMMA, 0.0f, 0};
    const PType NEUTRON = PType{PName::NEUTRON, 1.68e-27f, 0};
    const PType PROTON = PType{PName::PROTON, 1.67e-27f, 1};
};
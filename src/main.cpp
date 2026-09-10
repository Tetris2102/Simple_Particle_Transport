#include "particle.hpp"

int main()
{
    PName name = PName::ALPHA;
    PType type = PType{name, 9.11e-31};
    Particle p = Particle(type);

    return 0;
}

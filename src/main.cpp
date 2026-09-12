#include "particle.hpp"
#include <iostream>

int main()
{
    Particle p = Particle(PName::BETA, Vec3<float>(0.0f, 0.0f, 0.0f), 1.0f, 1.0f, Vec3<float>(1.0f, 0.0f, 0.0f), 1);

    std::cout << "Exit successful" << std::endl;

    return 0;
}

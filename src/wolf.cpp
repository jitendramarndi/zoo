#include "wolf.h"

#include "howl.h"

Wolf::Wolf(const std::string& name):
    Canine(name, "Wolf")
{
    /// Wolf 'howls'
    auto noise_style = std::make_shared<Howl>();
    SetNoiseBehaviour(noise_style);
}

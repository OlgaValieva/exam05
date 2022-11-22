#include "ATarget.hpp"

void ATarget::getHitBySpell(ASpell const &aspell_ref) const
{
    std::cout << this->_type<<" has been "<<aspell_ref.getEffects()<< "!\n";
}
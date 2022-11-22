#include "ASpell.hpp"

void ASpell::launch(ATarget const &atarget_ref)
{
    atarget_ref.getHitBySpell(*this);
}
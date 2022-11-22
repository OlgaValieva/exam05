#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    private:
        std::string _type;
    public:
        ATarget(std::string type){
            _type= type;
        }
        virtual ~ATarget(){
      
        }

        std::string const &getType() const {return _type;}

        void getHitBySpell(ASpell const &aspell_ref) const;
        virtual ATarget *clone() const = 0;
};
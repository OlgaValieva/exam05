#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:
        std::map<std::string, ATarget*>map;
    public:
       TargetGenerator(){
    
        }
        ~TargetGenerator(){
        }

        void learnTargetType(ATarget *atarget_ptr){
            map[atarget_ptr->getType()] = atarget_ptr;
        }
        void forgetTargetType(std::string name){
            map.erase(name);
        }
        ATarget* createTarget(std::string name) {
            if (map[name] != 0)
                return map[name];
            return 0;
        }
};
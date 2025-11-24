#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people) {
    
   std::vector< char > retval(people.size());

    std::for_each(people.begin(), people.end(), [&](Human& h) {
        h.birthday();
        if (h.isMonster() == true) {
            retval.push_back('n');
        }
        else {
            retval.push_back('y');
        }
    });

    std::reverse(retval.begin(), retval.end());

    return retval;
}
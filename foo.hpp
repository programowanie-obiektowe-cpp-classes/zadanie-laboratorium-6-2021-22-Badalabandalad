#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    std::vector< char > ret_v(people.size());
    std::for_each(people.begin(), people.end(), [](auto& h) { h.birthday(); });
    std::transform(people.crbegin(), people.crend(), ret_v.begin(), [](const auto& h) {
        return !(h.isMonster()) ? 'y' : 'n';
    });

    return ret_v;
}

#pragma once

#include "Human.hpp"
#include <algorithm>
#include <numeric>
#include <list>
#include <vector>
using namespace std;

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    std::for_each(people.begin(), people.end(), [](Human& i) { i.birthday(); });

    std::transform(people.begin(), people.end(), ret_v.rbegin(), [](Human& it) {
        if (it.isMonster()) {
            return 'n';
        }
        else {
            return 'y';
        }
    });

    return ret_v;
}

#pragma once
#include"Computer.hpp"


void Computer::Notify(Class *klass) noexcept
{
    kl.emplace_back(klass);
}

bool Computer::Check(Class *klass) const noexcept
{
    for( auto it = kl.begin(); it != kl.end(); it++ )
        if( (*it) == klass )    return 1;
    return 0;
}

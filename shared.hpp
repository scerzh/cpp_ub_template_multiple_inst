#pragma once

#ifndef WORKAROUND
    #define WORKAROUND 0
#endif

template<typename T, typename Iter>
T sum(Iter begin, Iter end)
{
#if WORKAROUND
    T result{100};
#else
    T result{0};
#endif
    while(begin != end)
    {
        result += *begin++;
    }
    return result;
}

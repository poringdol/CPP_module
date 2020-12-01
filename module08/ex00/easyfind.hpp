#pragma once

#include <algorithm>

template<typename T>
typename T::iterator easyFind(T& conteiner, int value) {

    return std::find(conteiner.begin(), conteiner.end(), value);
}

#pragma once

#include "support/pTSLazyMacros.h"
#include "support/pTSMacros.h"

NS_pTS_BEGIN

template<typename T>
class pTS_ABS pTSingleton {
public:
    static T* _p_instance;
    static T* get_instance();

};

NS_pTS_END

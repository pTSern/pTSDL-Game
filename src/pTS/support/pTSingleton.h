#ifndef SINGLETON_H
#define SINGLETON_H

#include "support/pTSLazyMacros.h"
#include "support/pTSMacros.h"

NS_pTS_BEGIN

template <typename T>
class pTS_ABS pTSingleton {
GLB:
    STT T* get_instance();

PRV:
    STT T* _p_instance;
};

template <typename T>
T* pTSingleton<T>::_p_instance = nullptr;

template <typename T>
T* pTSingleton<T>::get_instance() {
    if(_p_instance == nullptr) {
        _p_instance = new T();
        _p_instance->init();
    }
    return _p_instance;
}

NS_pTS_END

#endif

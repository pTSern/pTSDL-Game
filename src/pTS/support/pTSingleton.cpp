#include "pTSingleton.h"
#include "support/pTSMacros.h"

NS_pTS_BEGIN

template <typename T>
T* pTSingleton<T>::get_instance() {
    if(_p_instance == nullptr) {
        _p_instance = new T();
        _p_instance->init();
    }
    return _p_instance;
}

NS_pTS_END

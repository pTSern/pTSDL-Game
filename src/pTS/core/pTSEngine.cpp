#pragma once

#include "pTSEngine.h"

NS_pTS_BEGIN

bool pTSEngine::init() {
    return true;
}

STR pTSEngine::to_string() {
    return "Hello";
}

void pTSEngine::log() {
    const STR msg = this->_class_name + this->to_string();
    std::cout << msg << std::endl;
}

pTSEngine::~pTSEngine() {

}

pTSEngine::pTSEngine() {

}

NS_pTS_END

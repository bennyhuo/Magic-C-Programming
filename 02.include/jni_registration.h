//
// Created by benny on 2022/4/17.
//

#ifndef HELLOC__FFF_H_
#define HELLOC__FFF_H_

// JNI registration.
static const JNINativeMethod gAssetManagerMethods[] = {
#include "setup_methods.h"
#include "file_methods.h"
#include "resource_methods.h"
#include "resource_nameid_methods.h"
#include "style_methods.h"
#include "theme_methods.h"
#include "inputstream_methods.h"
#include "idmap_methods.h"
#include "global_methods.h"
};

#endif //HELLOC__FFF_H_

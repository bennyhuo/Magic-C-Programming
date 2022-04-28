//
// Created by benny on 2022/4/17.
//

#ifndef HELLOC_02_SAMPLE_SETUP_METHODS_H_
#define HELLOC_02_SAMPLE_SETUP_METHODS_H_
// AssetManager setup methods.
{"nativeCreate", "()J", (void*)NativeCreate},
{"nativeDestroy", "(J)V", (void*)NativeDestroy},
{"nativeSetApkAssets", "(J[Landroid/content/res/ApkAssets;Z)V", (void*)NativeSetApkAssets},
{"nativeSetConfiguration", "(JIILjava/lang/String;IIIIIIIIIIIIIII)V",
(void*)NativeSetConfiguration},
{"nativeGetAssignedPackageIdentifiers", "(JZZ)Landroid/util/SparseArray;",
(void*)NativeGetAssignedPackageIdentifiers},
#endif //HELLOC_02_SAMPLE_SETUP_METHODS_H_

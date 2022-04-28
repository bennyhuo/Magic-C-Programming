//
// Created by benny on 2022/4/17.
//

#ifndef HELLOC_02_SAMPLE_RESOURCE_NAMEID_METHODS_H_
#define HELLOC_02_SAMPLE_RESOURCE_NAMEID_METHODS_H_
// AssetManager resource name/ID methods.
{"nativeGetResourceIdentifier", "(JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)I",
(void*)NativeGetResourceIdentifier},
{"nativeGetResourceName", "(JI)Ljava/lang/String;", (void*)NativeGetResourceName},
{"nativeGetResourcePackageName", "(JI)Ljava/lang/String;", (void*)NativeGetResourcePackageName},
{"nativeGetResourceTypeName", "(JI)Ljava/lang/String;", (void*)NativeGetResourceTypeName},
{"nativeGetResourceEntryName", "(JI)Ljava/lang/String;", (void*)NativeGetResourceEntryName},
{"nativeSetResourceResolutionLoggingEnabled", "(JZ)V",
(void*) NativeSetResourceResolutionLoggingEnabled},
{"nativeGetLastResourceResolution", "(J)Ljava/lang/String;",
(void*) NativeGetLastResourceResolution},
{"nativeGetLocales", "(JZ)[Ljava/lang/String;", (void*)NativeGetLocales},
{"nativeGetSizeConfigurations", "(J)[Landroid/content/res/Configuration;",
(void*)NativeGetSizeConfigurations},
#endif //HELLOC_02_SAMPLE_RESOURCE_NAMEID_METHODS_H_

# 1 "jni_registration.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "jni_registration.h"
# 9 "jni_registration.h"
static const JNINativeMethod gAssetManagerMethods[] = {
# 1 "setup_methods.h" 1







{"nativeCreate", "()J", (void*)NativeCreate},
{"nativeDestroy", "(J)V", (void*)NativeDestroy},
{"nativeSetApkAssets", "(J[Landroid/content/res/ApkAssets;Z)V", (void*)NativeSetApkAssets},
{"nativeSetConfiguration", "(JIILjava/lang/String;IIIIIIIIIIIIIII)V",
(void*)NativeSetConfiguration},
{"nativeGetAssignedPackageIdentifiers", "(JZZ)Landroid/util/SparseArray;",
(void*)NativeGetAssignedPackageIdentifiers},
# 11 "jni_registration.h" 2
# 1 "file_methods.h" 1







{"nativeContainsAllocatedTable", "(J)Z", (void*)ContainsAllocatedTable},
{"nativeList", "(JLjava/lang/String;)[Ljava/lang/String;", (void*)NativeList},
{"nativeOpenAsset", "(JLjava/lang/String;I)J", (void*)NativeOpenAsset},
{"nativeOpenAssetFd", "(JLjava/lang/String;[J)Landroid/os/ParcelFileDescriptor;",
(void*)NativeOpenAssetFd},
{"nativeOpenNonAsset", "(JILjava/lang/String;I)J", (void*)NativeOpenNonAsset},
{"nativeOpenNonAssetFd", "(JILjava/lang/String;[J)Landroid/os/ParcelFileDescriptor;",
(void*)NativeOpenNonAssetFd},
{"nativeOpenXmlAsset", "(JILjava/lang/String;)J", (void*)NativeOpenXmlAsset},
{"nativeOpenXmlAssetFd", "(JILjava/io/FileDescriptor;)J", (void*)NativeOpenXmlAssetFd},
# 12 "jni_registration.h" 2
# 1 "resource_methods.h" 1







{"nativeGetResourceValue", "(JISLandroid/util/TypedValue;Z)I", (void*)NativeGetResourceValue},
{"nativeGetResourceBagValue", "(JIILandroid/util/TypedValue;)I",
(void*)NativeGetResourceBagValue},
{"nativeGetStyleAttributes", "(JI)[I", (void*)NativeGetStyleAttributes},
{"nativeGetResourceStringArray", "(JI)[Ljava/lang/String;",
(void*)NativeGetResourceStringArray},
{"nativeGetResourceStringArrayInfo", "(JI)[I", (void*)NativeGetResourceStringArrayInfo},
{"nativeGetResourceIntArray", "(JI)[I", (void*)NativeGetResourceIntArray},
{"nativeGetResourceArraySize", "(JI)I", (void*)NativeGetResourceArraySize},
{"nativeGetResourceArray", "(JI[I)I", (void*)NativeGetResourceArray},
# 13 "jni_registration.h" 2
# 1 "resource_nameid_methods.h" 1







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
# 14 "jni_registration.h" 2
# 1 "style_methods.h" 1







{"nativeAttributeResolutionStack", "(JJIII)[I", (void*)NativeAttributeResolutionStack},
{"nativeApplyStyle", "(JJIIJ[IJJ)V", (void*)NativeApplyStyle},
{"nativeResolveAttrs", "(JJII[I[I[I[I)Z", (void*)NativeResolveAttrs},
{"nativeRetrieveAttributes", "(JJ[I[I[I)Z", (void*)NativeRetrieveAttributes},
# 15 "jni_registration.h" 2
# 1 "theme_methods.h" 1
# 9 "theme_methods.h"
{"nativeThemeCreate", "(J)J", (void*)NativeThemeCreate},
{"nativeGetThemeFreeFunction", "()J", (void*)NativeGetThemeFreeFunction},
{"nativeThemeApplyStyle", "(JJIZ)V", (void*)NativeThemeApplyStyle},
{"nativeThemeRebase", "(JJ[I[ZI)V", (void*)NativeThemeRebase},
{"nativeThemeCopy", "(JJJJ)V", (void*)NativeThemeCopy},
{"nativeThemeGetAttributeValue", "(JJILandroid/util/TypedValue;Z)I",
(void*)NativeThemeGetAttributeValue},
{"nativeThemeDump", "(JJILjava/lang/String;Ljava/lang/String;)V", (void*)NativeThemeDump},
{"nativeThemeGetChangingConfigurations", "(J)I", (void*)NativeThemeGetChangingConfigurations},
# 16 "jni_registration.h" 2
# 1 "inputstream_methods.h" 1







{"nativeAssetDestroy", "(J)V", (void*)NativeAssetDestroy},
{"nativeAssetReadChar", "(J)I", (void*)NativeAssetReadChar},
{"nativeAssetRead", "(J[BII)I", (void*)NativeAssetRead},
{"nativeAssetSeek", "(JJI)J", (void*)NativeAssetSeek},
{"nativeAssetGetLength", "(J)J", (void*)NativeAssetGetLength},
{"nativeAssetGetRemainingLength", "(J)J", (void*)NativeAssetGetRemainingLength},
# 17 "jni_registration.h" 2
# 1 "idmap_methods.h" 1







{"nativeGetOverlayableMap", "(JLjava/lang/String;)Ljava/util/Map;",
(void*)NativeGetOverlayableMap},
{"nativeGetOverlayablesToString", "(JLjava/lang/String;)Ljava/lang/String;",
(void*)NativeGetOverlayablesToString},
# 18 "jni_registration.h" 2
# 1 "global_methods.h" 1







{"getGlobalAssetCount", "()I", (void*)NativeGetGlobalAssetCount},
{"getAssetAllocations", "()Ljava/lang/String;", (void*)NativeGetAssetAllocations},
{"getGlobalAssetManagerCount", "()I", (void*)NativeGetGlobalAssetManagerCount},
# 19 "jni_registration.h" 2
};

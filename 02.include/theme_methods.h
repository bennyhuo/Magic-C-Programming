//
// Created by benny on 2022/4/17.
//

#ifndef HELLOC_02_SAMPLE_THEME_METHODS_H_
#define HELLOC_02_SAMPLE_THEME_METHODS_H_

// Theme related methods.
{"nativeThemeCreate", "(J)J", (void*)NativeThemeCreate},
{"nativeGetThemeFreeFunction", "()J", (void*)NativeGetThemeFreeFunction},
{"nativeThemeApplyStyle", "(JJIZ)V", (void*)NativeThemeApplyStyle},
{"nativeThemeRebase", "(JJ[I[ZI)V", (void*)NativeThemeRebase},
{"nativeThemeCopy", "(JJJJ)V", (void*)NativeThemeCopy},
{"nativeThemeGetAttributeValue", "(JJILandroid/util/TypedValue;Z)I",
(void*)NativeThemeGetAttributeValue},
{"nativeThemeDump", "(JJILjava/lang/String;Ljava/lang/String;)V", (void*)NativeThemeDump},
{"nativeThemeGetChangingConfigurations", "(J)I", (void*)NativeThemeGetChangingConfigurations},

#endif //HELLOC_02_SAMPLE_THEME_METHODS_H_

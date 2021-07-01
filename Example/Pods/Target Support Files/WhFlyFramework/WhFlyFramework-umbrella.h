#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "WhFlyFramework.h"
#import "WhFlyTest.h"

FOUNDATION_EXPORT double WhFlyFrameworkVersionNumber;
FOUNDATION_EXPORT const unsigned char WhFlyFrameworkVersionString[];


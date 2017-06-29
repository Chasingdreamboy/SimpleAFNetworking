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

#import "AFNetworking.h"
#import "AFHTTPSessionManager.h"
#import "AFURLSessionManager.h"
#import "AFNetworkReachabilityManager.h"
#import "AFSecurityPolicy.h"
#import "AFURLRequestSerialization.h"
#import "AFURLResponseSerialization.h"
#import "AFAutoPurgingImageCache.h"
#import "AFImageDownloader.h"
#import "UIButton+AFNetworking.h"
#import "UIKit+AFNetworking.h"

FOUNDATION_EXPORT double SimpleAFNetworkingVersionNumber;
FOUNDATION_EXPORT const unsigned char SimpleAFNetworkingVersionString[];


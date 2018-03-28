//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSURL, NSValue, UIImage;

@protocol TTDetailWebViewRequestProcessorDelegate <NSObject>

@optional
- (void)processRequestUpdateArticleImageMode:(NSNumber *)arg1;
- (void)processRequestShowSearchViewWithQuery:(NSString *)arg1 fromType:(long long)arg2 index:(unsigned long long)arg3;
- (void)processRequestShowPGCProfileWithParams:(NSDictionary *)arg1;
- (void)processRequestOpenAppStoreByActionURL:(NSString *)arg1 itunesID:(NSString *)arg2;
- (void)processRequestShowUserProfileForUserID:(NSString *)arg1;
- (void)processRequestStringByEvaluatingJavaScriptFromString:(NSString *)arg1;
- (void)processRequestShowImgInPhotoScrollViewAtIndex:(unsigned long long)arg1 withFrameValue:(NSValue *)arg2;
- (void)processRequestNeedLoadWebTypeContent;
- (void)processRequestShowTipMsg:(NSString *)arg1 icon:(UIImage *)arg2;
- (void)processRequestShowTipMsg:(NSString *)arg1;
- (void)processRequestOpenWebViewUseURL:(NSURL *)arg1 supportRotate:(_Bool)arg2;
- (void)processRequestReceiveDomReady;
@end


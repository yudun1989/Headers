//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALPSafeMutableDictionary, NSString;

@interface ALPJumpAppService : NSObject
{
    _Bool _isInitialize;
    _Bool _isSupportDeepLink;
    NSString *_appKey;
    long long _type;
    NSString *_appName;
    NSString *_packageName;
    ALPSafeMutableDictionary *_blockDictionary;
}

+ (id)shareInstance;
@property(retain, nonatomic) ALPSafeMutableDictionary *blockDictionary; // @synthesize blockDictionary=_blockDictionary;
@property(nonatomic) _Bool isSupportDeepLink; // @synthesize isSupportDeepLink=_isSupportDeepLink;
@property(nonatomic) _Bool isInitialize; // @synthesize isInitialize=_isInitialize;
@property(retain, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (void)statisticApiCallWithParam:(id)arg1 url:(id)arg2 isSuccess:(_Bool)arg3 failMode:(long long)arg4;
- (id)assembledBaiChuanParamWithURLString:(id)arg1 extraPramaDictionary:(id)arg2;
- (id)jumpIsOpen:(_Bool)arg1 param:(id)arg2 URLString:(id)arg3 jumpFailedMode:(long long)arg4 degradeWebView:(id)arg5 failToH5Delegate:(id)arg6;
- (id)assembledURLWithParam:(id)arg1 isJumpTB:(_Bool)arg2;
- (void)appBecomeActive:(id)arg1;
- (id)jumpProcessor:(id)arg1 failedStrategy:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)setJumpBackBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)isLegalWithParam:(id)arg1;

@end


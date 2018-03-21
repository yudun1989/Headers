//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXRDMDownloadModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_33;
+ (id)wx_export_method_31;
+ (id)wx_export_method_29;
+ (id)wx_export_method_27;
+ (id)wx_export_method_25;
+ (id)wx_export_method_23;
+ (id)wx_export_method_21;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)preloadResourceMD5:(id)arg1 md5:(id)arg2 downloadCallback:(CDUnknownBlockType)arg3;
- (void)preloadResource:(id)arg1 downloadCallback:(CDUnknownBlockType)arg2;
- (void)preloadLottie:(id)arg1 md5:(id)arg2 downloadCallback:(CDUnknownBlockType)arg3;
- (void)preloadImage:(id)arg1 downloadCallback:(CDUnknownBlockType)arg2;
- (void)existsImage:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)existsResource:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)existsLottie:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)resourceLoader;
- (id)imageLoader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


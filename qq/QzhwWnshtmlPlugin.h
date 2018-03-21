//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QzHybridWebCachePluginInterface-Protocol.h>

@class NSString;

@interface QzhwWnshtmlPlugin : NSObject <QzHybridWebCachePluginInterface>
{
}

+ (void)prepareRequest:(id)arg1 withWebView:(id)arg2 useWnshtml:(_Bool)arg3;
- (id)rewriteNetResponseWithRequest:(id)arg1 cache:(id)arg2;
- (void)rewriteResponseWithRequest:(id)arg1 response:(id)arg2 bodyData:(id)arg3 cache:(id)arg4 success:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
- (id)rewriteCacheWithRequest:(id)arg1 cache:(id)arg2;
- (id)rewriteRequestForRequest:(id)arg1 cache:(id)arg2;
- (_Bool)canHandleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


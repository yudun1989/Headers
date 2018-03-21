//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QQWlxNetUtils : NSObject
{
    NSMutableDictionary *_requestDict;
}

+ (_Bool)isNetworkUsable;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *requestDict; // @synthesize requestDict=_requestDict;
- (void)dealloc;
- (void)respondHttpFailed:(id)arg1 sessionHttp:(id)arg2;
- (void)respondHttpFinish:(id)arg1 sessionHttp:(id)arg2;
- (id)privateKeySign:(id)arg1 cert:(id)arg2;
- (id)commonParams;
- (_Bool)cancelReq:(id)arg1;
- (_Bool)cancelAllReq;
- (id)sendHttpRequest:(id)arg1 withParam:(id)arg2 operationParam:(id)arg3 isSign:(_Bool)arg4 sender:(id)arg5;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary;

@interface QQGroupListRequestTaskV2 : NSObject
{
    int _sessionRetryCount;
    int _retryCount;
    int _initialSeq;
    int _currentSeq;
    _Bool _manually;
    NSData *_cookie;
    NSMutableDictionary *_respInfo;
}

@property _Bool manually; // @synthesize manually=_manually;
- (void)handleNotifyUpdateAvatarUin;
- (void)requestTimeout:(id)arg1;
- (void)requestCallback:(id)arg1;
- (int)sendRequest;
- (void)postNotify:(_Bool)arg1 result:(int)arg2;
- (void)dealloc;
- (id)init:(_Bool)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSLiveUserSendRedPacketModel : NSObject
{
}

- (void)p_sendRedPacketWithID:(id)arg1 liveStreamID:(id)arg2 coins:(long long)arg3 append:(_Bool)arg4 retryCount:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)appendRedPacket:(id)arg1 withLiveStreamID:(id)arg2 coins:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendRedPacketWithLiveStreamID:(id)arg1 coins:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)p_loadRedPacketGradesWithLiveStreamID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadRedPacketGradesWithLiveStreamID:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;

@end


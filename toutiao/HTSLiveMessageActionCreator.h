//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol HTSLiveRoomMessageActions;

@interface HTSLiveMessageActionCreator : NSObject
{
    NSMutableArray *_handlers;
    id <HTSLiveRoomMessageActions> _dispatch;
}

@property(nonatomic) __weak id <HTSLiveRoomMessageActions> dispatch; // @synthesize dispatch=_dispatch;
- (void).cxx_destruct;
- (void)registerControlMessageHandler;
- (void)registerNoticeMessageHandler;
- (_Bool)canResignMessageHandler:(id)arg1;
- (void)dispatchQuitActionWithRoomID:(id)arg1;
- (void)handelNoticeMessage:(id)arg1;
- (void)messageReceived:(id)arg1;
- (id)init;

@end


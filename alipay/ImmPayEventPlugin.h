//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ImmPayEventHandler, MQPPaySession, MQPTrackModel;

@interface ImmPayEventPlugin : NSObject
{
    ImmPayEventHandler *_eh;
}

@property(nonatomic) __weak ImmPayEventHandler *eh; // @synthesize eh=_eh;
- (void).cxx_destruct;
@property(readonly, nonatomic) MQPTrackModel *log;
@property(readonly, nonatomic) MQPPaySession *paySession;
- (void)onCode:(id)arg1 Err:(id)arg2;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;

@end


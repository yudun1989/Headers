//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APSnapChatMsgProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface APSnapChatMsgObj : NSObject <APSnapChatMsgProtocol>
{
    double _timeLimit;
    double _elapsedTime;
    NSDictionary *_dataSource;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDictionary *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
- (void).cxx_destruct;
- (void)postMsgDeleteNotification;
- (void)deleteMsgFromDB;
- (double)getTimeRemain;
- (void)step:(double)arg1;
- (unsigned long long)currentFireState;
- (id)key;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


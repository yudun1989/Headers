//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface ALBBSessionPool : NSObject
{
    NSArray *_sessionArray;
    NSObject<OS_dispatch_queue> *_sessionQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(retain, nonatomic) NSArray *sessionArray; // @synthesize sessionArray=_sessionArray;
- (void).cxx_destruct;
- (void)saveAllSessions;
- (void)loadAllSessions;
- (int)getSessionIndexInArray:(id)arg1 accountInfo:(id)arg2;
- (_Bool)isSidInvalid:(id)arg1;
- (_Bool)isValidLogin:(id)arg1;
- (id)currentSession;
- (id)allSessions;
- (id)sessionWithAccountInfo:(id)arg1;
- (void)invalidLoginWithAccountInfo:(id)arg1;
- (void)disableSessionLoginTokenWithAccountInfo:(id)arg1;
- (void)clearAllSession;
- (void)removeSessionWithAccountInfo:(id)arg1;
- (void)addOrUpdateSession:(id)arg1;
- (id)init;

@end


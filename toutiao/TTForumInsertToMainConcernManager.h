//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "Singleton-Protocol.h"
#import "TTAccountMulticastProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface TTForumInsertToMainConcernManager : NSObject <TTAccountMulticastProtocol, Singleton>
{
    NSArray *_concernIDArray;
    NSDictionary *_concernKeyDic;
}

@property(retain, nonatomic) NSDictionary *concernKeyDic; // @synthesize concernKeyDic=_concernKeyDic;
@property(retain, nonatomic) NSArray *concernIDArray; // @synthesize concernIDArray=_concernIDArray;
- (void).cxx_destruct;
- (void)onAccountStatusChanged:(long long)arg1 platform:(id)arg2;
- (void)deleteVideoOrShortVideoWithConcernID:(id)arg1 WithGroupID:(long long)arg2;
- (void)deleteShortVideoNotitifation:(id)arg1;
- (void)deleteVideoNotification:(id)arg1;
- (void)deleteThreadWithConcernID:(id)arg1 WithThreadID:(long long)arg2;
- (void)deleteThreadNotification:(id)arg1;
- (void)deleteMomentThreadNotification:(id)arg1;
- (void)postThreadSuccessNotification:(id)arg1;
- (void)saveThreadsNeedInsertToPage:(id)arg1 WithConcernID:(id)arg2;
- (void)clearThreadNeedsInsertToPageWithConcernID:(id)arg1;
- (id)getThreadsNeedInsertToPageWithConcernID:(id)arg1;
- (void)registerNotifications;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


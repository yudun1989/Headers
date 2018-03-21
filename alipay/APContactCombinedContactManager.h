//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface APContactCombinedContactManager : NSObject
{
    _Bool _lastLoadContactFailed;
    _Bool _isLoadingContact;
    int _remainRetryCount;
    NSOperationQueue *_syncOptQueue;
}

@property(retain, nonatomic) NSOperationQueue *syncOptQueue; // @synthesize syncOptQueue=_syncOptQueue;
@property(nonatomic) _Bool isLoadingContact; // @synthesize isLoadingContact=_isLoadingContact;
@property(nonatomic) _Bool lastLoadContactFailed; // @synthesize lastLoadContactFailed=_lastLoadContactFailed;
@property(nonatomic) int remainRetryCount; // @synthesize remainRetryCount=_remainRetryCount;
- (void).cxx_destruct;
- (void)saveCombinedRequestResultSuccessDate:(id)arg1;
- (id)getCombinedRequestSuccessDate;
- (_Bool)isCombinedContactTooMuch;
- (long long)getCombinedContactNumber;
- (void)saveCombinedContactNumber:(long long)arg1;
- (void)saveCombinedRequestResultState:(_Bool)arg1;
- (_Bool)getCombinedRequestResultState;
- (id)findIndexCharWithPYString:(id)arg1;
- (void)organizeContactWithContactResult:(id)arg1;
- (id)getErrorWithContactResult:(id)arg1;
- (_Bool)isContactDateExpried:(id)arg1;
- (void)judgeToQueryMobileContactListCallback:(CDUnknownBlockType)arg1;
- (void)cleanAllMobileInfo;
- (void)startUploadContactWithCallback:(CDUnknownBlockType)arg1;
- (void)startUploadAndLoadCombinedDataWithCallback:(CDUnknownBlockType)arg1;
- (void)handleMobileContactListResult:(id)arg1;
- (id)queryMobileContactListByPagesWithPage:(int)arg1 simple:(_Bool)arg2 contactList:(id)arg3 requestFailed:(_Bool *)arg4;
- (void)queryTotalMobileContactListWithSimple:(_Bool)arg1 finishCallback:(CDUnknownBlockType)arg2;
- (void)queryMobileContactListWithSimple:(_Bool)arg1 finishCallback:(CDUnknownBlockType)arg2;
- (void)organizeUpdatedContactList:(id)arg1;
- (void)organizeModifiedContactList:(id)arg1;
- (void)handleSyncResult:(id)arg1;
- (void)didReceiveMobileContactChange:(id)arg1;
- (void)dealloc;
- (void)realRegisterMobileContactSync;
- (id)init;

@end


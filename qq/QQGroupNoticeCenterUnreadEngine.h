//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface QQGroupNoticeCenterUnreadEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_0x580SeqDic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)on0x580Response:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getOIDBSSOPkg:(long long)arg1 serviceType:(long long)arg2 buffer:(basic_string_075b6133)arg3;
- (void)sendAllUnreadRequest:(long long)arg1 appID:(long long)arg2 sig:(id)arg3;
- (void)requestClearSchoolHomeworkRedRot:(id)arg1;
- (void)requestClearGameGroupRedDot:(id)arg1;
- (void)requestClearGroupNoticeCenterRedRot:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


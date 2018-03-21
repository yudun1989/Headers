//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface WCDeviceFriendWifiMgr : MMService <PBMessageObserverDelegate, MMService>
{
    NSString *m_currentSSID;
}

- (void).cxx_destruct;
- (id)parseQueryString:(id)arg1;
- (void)showFriendWifiViewController;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleConnectedRouterResp:(id)arg1;
- (void)sendFriendWifiReqToWeixinSvrWithDeviceType:(id)arg1 deviceId:(id)arg2 appId:(id)arg3 clientInfo:(id)arg4;
- (void)handle3rdAppUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


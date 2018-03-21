//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>
#import <QQMainProject/IMarketingAccountService-Protocol.h>

@class NSMutableDictionary, NSString;

@interface QQMarketingAccountService : NSObject <IEngineDispatchDelegate, IMarketingAccountService>
{
    struct map<unsigned long long, long, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, long>>> _pendingRequestMap;
    NSMutableDictionary *_timeRecord;
    NSMutableDictionary *_wpaParamRecord;
}

+ (id)instance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)hexStringFromData:(id)arg1;
- (id)getNetTypeStr;
- (void)sendSigT:(id)arg1;
- (void)genSigMsgWithUin:(unsigned long long)arg1 sigT:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reqCorpUinWpaReq:(id)arg1;
- (void)handleMenuEventResponse:(const struct SendMenuEventResponse *)arg1;
- (void)handleMenuResponse:(const struct GetCRMMenuResponse *)arg1;
- (id)buttonInfoArrayFromResponse:(const struct GetCRMMenuResponse *)arg1;
- (id)buttonInfoToDictionary:(const struct ButtonInfo *)arg1;
- (void)sendMenuEventRequest:(id)arg1 toUin:(id)arg2;
- (void)sendMenuRequestOnFollowWithUin:(unsigned long long)arg1;
- (void)sendMenuRequestWithUin:(id)arg1 lastSeqno:(unsigned int)arg2;
- (id)getMenuArrayWithUin:(id)arg1;
- (void)sendMessage:(struct MessageLite *)arg1 withServiceCommand:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


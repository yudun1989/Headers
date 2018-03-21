//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MKTMsgBusHelp.h"

#import "MCPluginBaseProtocol-Protocol.h"

@class NSDictionary, NSString, TBAMPAuthInfo;
@protocol MCPluginChatPageContextProtocol, TBIMUserAdapter;

@interface MCChatAuthNoticePlugin : MKTMsgBusHelp <MCPluginBaseProtocol>
{
    id <TBIMUserAdapter> _targetUser;
    TBAMPAuthInfo *_authInfo;
    id <MCPluginChatPageContextProtocol> _chatPageContext;
    long long _showingType;
}

@property(nonatomic) long long showingType; // @synthesize showingType=_showingType;
@property(retain, nonatomic) id <MCPluginChatPageContextProtocol> chatPageContext; // @synthesize chatPageContext=_chatPageContext;
@property(retain, nonatomic) TBAMPAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(retain, nonatomic) id <TBIMUserAdapter> targetUser; // @synthesize targetUser=_targetUser;
- (void).cxx_destruct;
- (void)ampLocalAuthFail:(id)arg1 failMessage:(id)arg2;
- (void)ampLocalAuthSuccess:(id)arg1 authMessage:(id)arg2;
- (void)ampShowAuthCard:(id)arg1 authType:(id)arg2;
- (void)sendAuthMessage:(long long)arg1;
- (void)mockMessage:(long long)arg1;
- (void)processPage:(id)arg1;
- (id)getPageName;
- (id)getKey;
- (id)initWithTargetUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end


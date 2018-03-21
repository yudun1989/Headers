//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQMsgRecallInterfaceDelegate-Protocol.h>

@class NSString, QQBaseChatViewController, QQChatViewTable, QQProgressHUD;

@interface QQMsgRecallBase : NSObject <QQMsgRecallInterfaceDelegate>
{
    _Bool isBetween15Second;
    _Bool isRecallSuccess;
    QQChatViewTable *_chatViewTable;
    QQBaseChatViewController *_supViewController;
    QQProgressHUD *_qqProgressHUD;
}

@property(retain, nonatomic) QQProgressHUD *qqProgressHUD; // @synthesize qqProgressHUD=_qqProgressHUD;
@property(nonatomic) __weak QQBaseChatViewController *supViewController; // @synthesize supViewController=_supViewController;
@property(nonatomic) __weak QQChatViewTable *chatViewTable; // @synthesize chatViewTable=_chatViewTable;
- (void).cxx_destruct;
- (void)replaceAIOModel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)checkFistGroupAdminRecall:(id)arg1 message:(id)arg2;
- (_Bool)checkFistRecall:(id)arg1 message:(id)arg2;
- (_Bool)checkNetworkStatus;
- (void)recallArkMsgModel:(id)arg1;
- (void)onReceiveRecallMsg:(id)arg1;
- (_Bool)onReceiveRecallMsgPre:(id)arg1;
- (void)msgShow:(id)arg1;
- (void)doRecallOperation:(id)arg1;
- (_Bool)doRecallOperationPre:(id)arg1;
- (void)dealloc;
- (id)initWithChatViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


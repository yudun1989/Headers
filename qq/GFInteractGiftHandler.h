//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQOIDBSSORequestDelegate-Protocol.h>

@class NSMutableArray, NSString, QQGroupChatViewController, QQOIDBSSORequest;
@protocol GFInteractGiftHandlerDelegate;

@interface GFInteractGiftHandler : NSObject <QQOIDBSSORequestDelegate>
{
    unsigned long long _groupCode;
    QQGroupChatViewController *_chatViewController;
    NSMutableArray *_giftModelQueue;
    QQOIDBSSORequest *_checkReq;
    QQOIDBSSORequest *_startReq;
    _Bool _animating;
    id <GFInteractGiftHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <GFInteractGiftHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)hasAnimationOrChecking;
- (void)aioDidDisppear:(id)arg1;
- (void)aioDidAppear:(id)arg1;
- (id)saveFileName;
- (id)savePath;
- (id)generateReqDataWithCmdType:(int)arg1 inviteId:(id)arg2 clickTimes:(int)arg3 productID:(unsigned int)arg4;
- (void)failWithSender:(id)arg1 result:(id)arg2 andError:(id)arg3;
- (void)finshAndCheckModel:(id)arg1;
- (void)animateWithGiftModel:(id)arg1 animationOffset:(double)arg2;
- (void)successWithSender:(id)arg1 andResult:(id)arg2;
- (void)startFirst;
- (void)checkNext;
- (_Bool)addGiftModel:(id)arg1;
- (id)initWithGroupCode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


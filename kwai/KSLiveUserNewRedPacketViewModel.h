//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSLiveUserSendRedPacketViewModel-Protocol.h"

@class KSLiveUserSendRedPacketModel, KSRedPacketStates, KS_user_info, NSString, NSTimer;

@interface KSLiveUserNewRedPacketViewModel : NSObject <KSLiveUserSendRedPacketViewModel>
{
    _Bool _sendEnabled;
    long long _coinsAmount;
    KSRedPacketStates *_redPacketStates;
    KSLiveUserSendRedPacketModel *_model;
    KS_user_info *_sender;
    NSTimer *_updateTimer;
    NSString *_title;
    NSString *_subtitle;
    NSString *_openTimeDescription;
    NSString *_sendText;
    NSTimer *_minuteTicker;
}

@property(retain, nonatomic) NSTimer *minuteTicker; // @synthesize minuteTicker=_minuteTicker;
@property(nonatomic) _Bool sendEnabled; // @synthesize sendEnabled=_sendEnabled;
@property(retain, nonatomic) NSString *sendText; // @synthesize sendText=_sendText;
@property(retain, nonatomic) NSString *openTimeDescription; // @synthesize openTimeDescription=_openTimeDescription;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) KS_user_info *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) KSLiveUserSendRedPacketModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) KSRedPacketStates *redPacketStates; // @synthesize redPacketStates=_redPacketStates;
@property(nonatomic) long long coinsAmount; // @synthesize coinsAmount=_coinsAmount;
- (void).cxx_destruct;
- (_Bool)needRecharging;
- (void)p_updateOpenTimeDescription;
- (void)sendRedPacketWithCoins:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)loadRedPacketGradesCompletion:(CDUnknownBlockType)arg1;
- (id)initWithRedPacketStates:(id)arg1 sender:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


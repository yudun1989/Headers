//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>

@class AnswerAddBuddyRequestTableView, FriendsVerifyMsgStructMsgModle, NSString, NSTimer, ProgressIndicator, UILabel;

@interface AnswerAddBuddyRequestController : QQViewController <QUIActionSheetDelegate>
{
    FriendsVerifyMsgStructMsgModle *_structFriendsVerifyMsgModel;
    NSString *_fromUin;
    NSString *_msg;
    NSString *_city;
    AnswerAddBuddyRequestTableView *_answerAddBuddyRequestView;
    ProgressIndicator *_indicator;
    UILabel *_resultLabel;
    int _state;
    struct CGRect _oldFrame;
    struct CGRect _keyboardRect;
    NSTimer *_timer;
    NSString *_mobilePhone;
    _Bool _bRefused;
}

- (void).cxx_destruct;
- (int)convertAppointConstellationToInt:(id)arg1;
- (id)nearbySummaryModelForAnswer;
- (void)reportingIllegalDone:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)shiedMsgAction:(id)arg1;
- (void)enterFriendRemarkView;
- (void)gotoContactGuideAction:(id)arg1;
- (void)JubaoAction:(id)arg1;
- (void)timeout;
- (void)refeshNewFriend;
- (void)rightButtonClick:(id)arg1;
- (void)responseUnsettleButton:(id)arg1;
- (void)onPortaitIconCtrlClicked;
- (void)reloadAppearance;
- (void)onAnswerRejectContactFriendResponse:(id)arg1;
- (void)onAnswerAddedContactFriendResponse:(id)arg1;
- (void)onAnswerAddedFriendResponse:(id)arg1;
- (void)onAnswerAddedFriendResponseInNewProtocol:(id)arg1;
- (int)getUserSourceWhenIsEncounter;
- (int)getUserTypeWithSourceID;
- (void)refreshBecauseStatusModify;
- (void)refreshNick;
- (void)onShiedMsgResponse:(id)arg1;
- (void)sendRecentMsgModel;
- (void)onProfileFetched:(id)arg1;
- (void)popQQController:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)loadView;
- (id)initWithMsgModel:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) AnswerAddBuddyRequestTableView *answerAddBuddyRequestView; // @dynamic answerAddBuddyRequestView;
@property(nonatomic) _Bool bRefused; // @dynamic bRefused;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *fromUin; // @dynamic fromUin;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) ProgressIndicator *indicator; // @dynamic indicator;
@property(retain, nonatomic) NSString *mobilePhone; // @dynamic mobilePhone;
@property(retain, nonatomic) NSString *msg; // @dynamic msg;
@property(retain, nonatomic) UILabel *resultLabel; // @dynamic resultLabel;
@property(retain, nonatomic) FriendsVerifyMsgStructMsgModle *structFriendsVerifyMsgModel; // @dynamic structFriendsVerifyMsgModel;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSTimer *timer; // @dynamic timer;

@end


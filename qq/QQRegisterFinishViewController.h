//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQRegisterAndLoginCommonViewController.h>

#import <QQMainProject/IQSRegEngineObserver-Protocol.h>

@class NSString, UIButton;

@interface QQRegisterFinishViewController : QQRegisterAndLoginCommonViewController <IQSRegEngineObserver>
{
    NSString *_regPhone;
    NSString *_regUin;
    NSString *_regPw;
    int _fromType;
    int _resultType;
    UIButton *_loginButton;
}

@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
- (void)onLoginAfterRegState:(id)arg1;
- (void)notifyWTLoginBindResponse:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (_Bool)doLoginUin:(id)arg1 andPwd:(id)arg2;
- (void)loginButtonPress:(id)arg1;
- (_Bool)isBelowIphone5S;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)isSupportRightDragToGoBack;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *regPhone; // @dynamic regPhone;
@property(retain, nonatomic) NSString *regPw; // @dynamic regPw;
@property(retain, nonatomic) NSString *regUin; // @dynamic regUin;
@property(readonly) Class superclass;

@end


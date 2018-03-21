//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "KSLoginAndSignCoverViewDelegate-Protocol.h"
#import "KSThiredPartBtnBarDelegate-Protocol.h"

@class CAAnimationlessLayer, KSLoginAndSignCoverView, KSThirdPartLoginBtnBar, NSString;
@protocol KSLoginAndSignViewDelegate;

@interface KSLoginAndSignView : UIImageView <KSLoginAndSignCoverViewDelegate, KSThiredPartBtnBarDelegate>
{
    id <KSLoginAndSignViewDelegate> _delegate;
    CAAnimationlessLayer *_icon;
    KSLoginAndSignCoverView *_loginAndSignCoverView;
    KSThirdPartLoginBtnBar *_thirdPartSignUpBar;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) KSThirdPartLoginBtnBar *thirdPartSignUpBar; // @synthesize thirdPartSignUpBar=_thirdPartSignUpBar;
@property(retain, nonatomic) KSLoginAndSignCoverView *loginAndSignCoverView; // @synthesize loginAndSignCoverView=_loginAndSignCoverView;
@property(retain, nonatomic) CAAnimationlessLayer *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <KSLoginAndSignViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)relayoutIconWithFrame:(struct CGRect)arg1;
- (void)didTapOtherSpace;
- (void)didTapSignNextBtnWithAccount:(id)arg1;
- (void)didTapDoneBtnWithAccount:(id)arg1 password:(id)arg2 phoneCode:(id)arg3 countryCode:(id)arg4;
- (void)didTapForgetPasswordBtn;
- (void)didTapSignBtn;
- (void)didTapLoginBtn;
- (void)didTapCountrySwitchBtn;
- (void)didTapBtnWithOAuth:(id)arg1 userInfo:(id)arg2;
- (id)currentLoginEmail;
- (id)currentLoginPhone;
- (void)clearPasswordArea;
- (void)drawWithCountryInfo:(id)arg1;
- (void)adjustKeyboardHeight:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


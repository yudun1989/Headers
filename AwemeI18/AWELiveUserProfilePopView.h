//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEUserModel, NSString, UIButton, UIImageView, UILabel;

@interface AWELiveUserProfilePopView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isShowWeiboVerify;
    AWEUserModel *_userModel;
    UIImageView *_headImageView;
    UIButton *_followBtn;
    UIButton *_managerBtn;
    UIButton *_atTaButton;
    UIButton *_personalButton;
    unsigned long long _userRelationType;
    UIView *_backgroudView;
    UILabel *_nameLabel;
    UILabel *_introLabel;
    UILabel *_fansLabel;
    UILabel *_favoritedLabel;
    UIButton *_weiboVerifyBtn;
    UIView *_operationView;
    UIView *_bottomTabbar;
    UIView *_bordView1;
    UIView *_bordView2;
}

+ (id)_getDefaultHeadImage:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) UIView *bordView2; // @synthesize bordView2=_bordView2;
@property(retain, nonatomic) UIView *bordView1; // @synthesize bordView1=_bordView1;
@property(retain, nonatomic) UIView *bottomTabbar; // @synthesize bottomTabbar=_bottomTabbar;
@property(retain, nonatomic) UIView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) UIButton *weiboVerifyBtn; // @synthesize weiboVerifyBtn=_weiboVerifyBtn;
@property(retain, nonatomic) UILabel *favoritedLabel; // @synthesize favoritedLabel=_favoritedLabel;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(nonatomic) _Bool isShowWeiboVerify; // @synthesize isShowWeiboVerify=_isShowWeiboVerify;
@property(nonatomic) unsigned long long userRelationType; // @synthesize userRelationType=_userRelationType;
@property(retain, nonatomic) UIButton *personalButton; // @synthesize personalButton=_personalButton;
@property(retain, nonatomic) UIButton *atTaButton; // @synthesize atTaButton=_atTaButton;
@property(retain, nonatomic) UIButton *managerBtn; // @synthesize managerBtn=_managerBtn;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) AWEUserModel *userModel; // @synthesize userModel=_userModel;
- (void).cxx_destruct;
- (void)_layoutSubviews;
- (id)_aStrWithIntro:(id)arg1;
- (void)refreshFollowBtnState:(id)arg1;
- (void)refreshUserInfo:(id)arg1;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1 user:(id)arg2 UserRelationType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


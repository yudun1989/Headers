//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEGrowingTextView, CAGradientLayer, NSString, UIButton, UIView;

@protocol AWELiveEntranceViewProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType keyboardChangeBlock;
@property(readonly, nonatomic) NSString *shareText;
@property(readonly, nonatomic) long long shareType;
@property(nonatomic) long long mode;
@property(retain, nonatomic) UIButton *backButton;
@property(retain, nonatomic) UIButton *cameraSwapButton;
@property(retain, nonatomic) UIButton *startLiveBtn;
@property(retain, nonatomic) UIButton *weiboBtn;
@property(retain, nonatomic) UIButton *wechatBtn;
@property(retain, nonatomic) UIView *lineView;
@property(retain, nonatomic) AWEGrowingTextView *titleTextView;
@property(retain, nonatomic) UIButton *doneBtn;
@property(retain, nonatomic) UIView *backgroundView;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property(retain, nonatomic) UIView *keyboardMaskView;
- (void)updateStartLiveBtnFrame:(struct CGRect)arg1;
- (void)changeToMode:(long long)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)reloadForLanguage;
- (void)setupUI;
@end

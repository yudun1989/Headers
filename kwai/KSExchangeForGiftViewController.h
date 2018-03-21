//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class KSExchangeForGiftViewModel, KSExchangeShareButtonsView, KSSeparateWithTitleView, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITextField, UIView;

@interface KSExchangeForGiftViewController : KSBaseViewController <UITextFieldDelegate>
{
    UIScrollView *_scrollView;
    KSExchangeForGiftViewModel *_viewModel;
    UITextField *_exchangeCodeTextField;
    UIButton *_exchangeButton;
    KSSeparateWithTitleView *_exchangeTitleView;
    UIView *_exchangeContentView;
    UIView *_splitLine;
    UILabel *_shareTipLabel;
    UIButton *_myExchangeCodeButton;
    KSExchangeShareButtonsView *_shareButtonView;
    UIView *_myExchangeContentView;
    KSSeparateWithTitleView *_myCardTitleView;
    UIImageView *_myCardImageView;
    UILabel *_countLabel;
}

+ (void)registerPortals;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *myCardImageView; // @synthesize myCardImageView=_myCardImageView;
@property(retain, nonatomic) KSSeparateWithTitleView *myCardTitleView; // @synthesize myCardTitleView=_myCardTitleView;
@property(retain, nonatomic) UIView *myExchangeContentView; // @synthesize myExchangeContentView=_myExchangeContentView;
@property(retain, nonatomic) KSExchangeShareButtonsView *shareButtonView; // @synthesize shareButtonView=_shareButtonView;
@property(retain, nonatomic) UIButton *myExchangeCodeButton; // @synthesize myExchangeCodeButton=_myExchangeCodeButton;
@property(retain, nonatomic) UILabel *shareTipLabel; // @synthesize shareTipLabel=_shareTipLabel;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIView *exchangeContentView; // @synthesize exchangeContentView=_exchangeContentView;
@property(retain, nonatomic) KSSeparateWithTitleView *exchangeTitleView; // @synthesize exchangeTitleView=_exchangeTitleView;
@property(retain, nonatomic) UIButton *exchangeButton; // @synthesize exchangeButton=_exchangeButton;
@property(retain, nonatomic) UITextField *exchangeCodeTextField; // @synthesize exchangeCodeTextField=_exchangeCodeTextField;
@property(retain, nonatomic) KSExchangeForGiftViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)exchangeButtonPressed;
- (void)exchangeSucceed;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_addClickShareExchangeWithPlatform:(int)arg1;
- (void)_loadData;
- (void)_addMyExchangeSubviews;
- (void)_addExchangeSubviews;
- (void)_setupSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


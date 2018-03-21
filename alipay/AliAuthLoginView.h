//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APButton, AliAuthLoginViewModel, UIImageView, UILabel;
@protocol AliAuthLoginViewDelegate;

@interface AliAuthLoginView : UIView
{
    UILabel *_accountLabel;
    UILabel *_tipLabel;
    UIImageView *_appLogoView;
    APButton *_authButton;
    APButton *_changeAccountButton;
    AliAuthLoginViewModel *_viewModel;
    id <AliAuthLoginViewDelegate> _delegate;
}

+ (id)createAuthLoginViewWith:(id)arg1 actionDelegate:(id)arg2;
@property(nonatomic) __weak id <AliAuthLoginViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AliAuthLoginViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) APButton *changeAccountButton; // @synthesize changeAccountButton=_changeAccountButton;
@property(retain, nonatomic) APButton *authButton; // @synthesize authButton=_authButton;
@property(retain, nonatomic) UIImageView *appLogoView; // @synthesize appLogoView=_appLogoView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
- (void).cxx_destruct;
- (void)authLoginButtonClicked:(id)arg1;
- (void)changeAccount:(id)arg1;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


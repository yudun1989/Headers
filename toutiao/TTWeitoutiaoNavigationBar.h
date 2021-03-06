//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedLabel, TTAlphaThemedButton;
@protocol TTWeitoutiaoNavigationBarDelegate;

@interface TTWeitoutiaoNavigationBar : SSThemedView
{
    id <TTWeitoutiaoNavigationBarDelegate> _delegate;
    SSThemedLabel *_titleLabel;
    TTAlphaThemedButton *_leftButton;
    TTAlphaThemedButton *_rightButton;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) TTAlphaThemedButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) TTAlphaThemedButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <TTWeitoutiaoNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateLeftImage:(id)arg1 rightImage:(id)arg2;
- (void)rightButtonClicked:(id)arg1;
- (void)leftButtonClicked:(id)arg1;
- (id)initWithTitle:(id)arg1 leftImage:(id)arg2 rightImage:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol QQMFaceSendViewDelegate;

@interface QQMFaceSendView : UIView
{
    UILabel *_titleLabel;
    UILabel *_feekbackLabel;
    UIView *_bottomBackView;
    UIView *_bottomMaskBackView;
    UIButton *_soundButton;
    UIButton *_refreshButton;
    UIButton *_sendButton;
    UIButton *_closeButton;
    id <QQMFaceSendViewDelegate> _delegate;
}

@property(nonatomic) id <QQMFaceSendViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFeekbackText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)CloseButtonButtonPress:(id)arg1;
- (void)SendButtonButtonPress:(id)arg1;
- (void)RefreshButtonPress:(id)arg1;
- (void)SoundButtonPress:(id)arg1;
- (void)layoutSubviews;
- (void)setSoundButtonImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end


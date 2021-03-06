//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQAsynUrlImageView, SQQSHPActResInfo, ShoppingWindow, UIButton, UIImageView, UILabel;

@interface ShoppingRedBagMaskView : UIView
{
    UIView *_bg;
    UIImageView *_redBagBg;
    QQAsynUrlImageView *_logoView;
    UILabel *_titleLable;
    UILabel *_contentLabel;
    UILabel *_tipsLabel;
    UIButton *_useBtn;
    ShoppingWindow *_maskWindow;
    UIButton *_closeBtn;
    SQQSHPActResInfo *_model;
    UIView *_headView;
    UIImageView *_goImage;
    UILabel *_timeLabel;
    _Bool _isViewShow;
}

@property(nonatomic) _Bool isViewShow; // @synthesize isViewShow=_isViewShow;
- (void)removeAll;
- (void)onDetailBtnClicked;
- (void)onUseBtnClicked;
- (void)onCloseBtnClicked;
- (void)addViewToWindow:(id)arg1;
- (void)updateViewWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


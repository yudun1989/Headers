//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAAnimationGroup, NSString, QQVIPComicColorFulEggsMsgModel, UIButton, UIImageView;

@interface QQComicColorEggsAlertView : UIView
{
    UIButton *_closeBtn;
    UIView *_bgView;
    _Bool _isIconDlg;
    long long _displayMode;
    UIImageView *_urlImageView;
    NSString *_comicId;
    NSString *_goodsId;
    long long _showTime;
    QQVIPComicColorFulEggsMsgModel *_colorFulEggsMsgModel;
    CAAnimationGroup *_groups;
}

@property(retain, nonatomic) CAAnimationGroup *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) QQVIPComicColorFulEggsMsgModel *colorFulEggsMsgModel; // @synthesize colorFulEggsMsgModel=_colorFulEggsMsgModel;
@property(nonatomic) long long showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) NSString *goodsId; // @synthesize goodsId=_goodsId;
@property(retain, nonatomic) NSString *comicId; // @synthesize comicId=_comicId;
@property(retain, nonatomic) UIImageView *urlImageView; // @synthesize urlImageView=_urlImageView;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) _Bool isIconDlg; // @synthesize isIconDlg=_isIconDlg;
- (void).cxx_destruct;
- (long long)getServerTime;
- (void)animationOfXi;
- (void)animationOfHU;
- (void)startAnimation;
- (void)refreshMainUI;
- (void)layoutSubviews;
- (void)clickCloseBtn:(id)arg1;
- (void)removeSelf;
- (void)onClickTapGesture:(id)arg1;
- (void)initFullScreenDlgView;
- (void)initIconDlgView;
- (id)initWithModel:(id)arg1;

@end


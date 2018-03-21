//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

@class QRBottomView, QRReadingDataSource, ReadViewToolBar, SettingView, UIButton, UIControl, UIView;

@interface ReadingBaseViewController : QQViewController
{
    ReadViewToolBar *_topView;
    QRBottomView *_bottomView;
    UIButton *_addBookShelfView;
    UIControl *_middleView;
    UIView *_visibleMenuView;
    UIView *_alphaView;
    _Bool _showTopView;
    double _alphaValue;
    _Bool _isDayMode;
    long long _themeIndex;
    struct CGRect _topViewFrame;
    struct CGRect _bottomViewFrame;
    QRReadingDataSource *_readingDataSource;
    _Bool _showDayNightHelper;
    SettingView *_settingView;
}

@property(retain, nonatomic) SettingView *settingView; // @synthesize settingView=_settingView;
- (void)closeBook;
- (void)enterForeground;
- (void)enterBackground;
- (void)dismissDayNightHelper;
- (void)showDayNightHelper;
- (void)hideMenuView;
- (void)showTopAndBottomView:(_Bool)arg1 animation:(_Bool)arg2;
- (void)updateProgressSlider;
- (void)updateProgressView;
- (void)updateProgress:(float)arg1 toForward:(_Bool)arg2;
- (void)updateLightView;
- (void)endBrightness;
- (void)updateBrightness:(float)arg1;
- (void)decreaseBrightness;
- (void)increaseBrightness;
- (_Bool)reopenBook:(id)arg1;
- (_Bool)openBook:(id)arg1;
- (void)bringAlphaViewToFront;
- (void)initAlphaView;
- (void)initBottomView;
- (void)resetTopView;
- (void)initTopView;
- (void)beforeTouchButton;
- (void)rotate;
- (void)backToBookShelf:(_Bool)arg1;
- (void)showTopView:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)autorelease;
- (oneway void)release;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) double alphaValue; // @dynamic alphaValue;
@property(retain, nonatomic) QRBottomView *bottomView; // @dynamic bottomView;
@property(nonatomic) _Bool showTopView; // @dynamic showTopView;

@end

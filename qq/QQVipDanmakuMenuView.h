//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QQVipDanmakuColorViewDelegate-Protocol.h>
#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class ComicReadContext, DanMuTextField, NSMutableArray, NSString, QQVipDanmakuColorView, UIButton, UIImageView, UILabel;
@protocol QQVipDanmakuMenuViewDatasource, QQVipDanmakuMenuViewDelegate;

@interface QQVipDanmakuMenuView : UIView <UITextFieldDelegate, QQVipDanmakuColorViewDelegate>
{
    _Bool _isShowCommentLab;
    long long _selectedColorIndex;
    UIView *_recognizerView;
    UIImageView *_checkImageView;
    UILabel *_tuCaoNumLab;
    UIView *_blurBg;
    NSMutableArray *_danmuColorArr;
    NSString *_selectDanmuColor;
    UIImageView *_girlHeadImageView;
    UILabel *_colorCannotUseTipsLab;
    UIButton *_jumpToTaskBtn;
    UIButton *_jumpToBuyBtn;
    _Bool _isTyping;
    _Bool _isHorizonMode;
    _Bool _noNeedToChangeFrame;
    double _keyboardHeight;
    long long _tuCaoNum;
    UIView *_colorCannotUseTipsView;
    DanMuTextField *_danMuTextField;
    UIButton *_danmuEntryBtn;
    ComicReadContext *_curReadContext;
    long long _displayMode;
    UIView *_danmuMenuAlphaBg;
    UIImageView *_hotDanmuBg;
    UIButton *_sendBtn;
    QQVipDanmakuColorView *_selectColorView;
    id <QQVipDanmakuMenuViewDelegate> _delegate;
    id <QQVipDanmakuMenuViewDatasource> _datasource;
}

@property(nonatomic) __weak id <QQVipDanmakuMenuViewDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) __weak id <QQVipDanmakuMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QQVipDanmakuColorView *selectColorView; // @synthesize selectColorView=_selectColorView;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UIImageView *hotDanmuBg; // @synthesize hotDanmuBg=_hotDanmuBg;
@property(retain, nonatomic) UIView *danmuMenuAlphaBg; // @synthesize danmuMenuAlphaBg=_danmuMenuAlphaBg;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) ComicReadContext *curReadContext; // @synthesize curReadContext=_curReadContext;
@property(retain, nonatomic) UIButton *danmuEntryBtn; // @synthesize danmuEntryBtn=_danmuEntryBtn;
@property(retain, nonatomic) DanMuTextField *danMuTextField; // @synthesize danMuTextField=_danMuTextField;
@property(retain, nonatomic) UIView *colorCannotUseTipsView; // @synthesize colorCannotUseTipsView=_colorCannotUseTipsView;
@property(nonatomic) long long tuCaoNum; // @synthesize tuCaoNum=_tuCaoNum;
@property(nonatomic) _Bool noNeedToChangeFrame; // @synthesize noNeedToChangeFrame=_noNeedToChangeFrame;
@property(nonatomic) _Bool isHorizonMode; // @synthesize isHorizonMode=_isHorizonMode;
@property(nonatomic) _Bool isTyping; // @synthesize isTyping=_isTyping;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
- (void).cxx_destruct;
- (double)getDanMuTextFieldOrigY;
- (void)removeBlurEffect;
- (void)dealWithBlurEffect;
- (void)setSelectedDanmuColorView:(id)arg1;
- (void)sendDanMu:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)changeTuCaoState:(id)arg1;
- (void)jumpToBuyBtnClicked:(id *)arg1;
- (void)jumpToTaskBtnClicked:(id *)arg1;
- (void)danmuListEntryBtnClicked:(id *)arg1;
- (void)textFieldBecomeFirstResponder;
- (void)textFieldResignFirstResponder;
- (void)reloadData;
- (void)resetDanmuColorInfo:(id)arg1;
- (void)refreshdanmaSwitchBgPath;
- (id)danmaSwitchBgPath;
- (void)refreshMainUI:(_Bool)arg1 withKeyboardHeight:(double)arg2;
- (void)setDanmuColorViewHidden:(_Bool)arg1;
- (void)refreshTextFieldUI;
- (void)refreshTuCaoLabelUI;
- (void)drawContentUI;
- (void)refreshButton:(id)arg1 title:(id)arg2;
- (void)refreshTipsViewLayoutWithModel:(id)arg1;
- (id)jumpToBuyBtn;
- (id)jumpToTaskBtn;
- (id)colorCannotUseTipsLab;
- (id)girlHeadImageView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

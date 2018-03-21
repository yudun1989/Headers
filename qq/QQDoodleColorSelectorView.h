//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, QQDoodlePainView, TBExtendedHitButton, UIActivityIndicatorView, UIImageView, UIScrollView;
@protocol QQDoodleColorSelectorViewDelegate;

@interface QQDoodleColorSelectorView : UIView
{
    long long currentSelColorIndex;
    long long currentSelGifIndex;
    long long fastClickUnDoBtnCount;
    double lastClickUnDoBtnTime;
    TBExtendedHitButton *_undoBtn;
    UIScrollView *_gifSelectView;
    UIScrollView *_colorSelectView;
    QQDoodlePainView *_paintView;
    id <QQDoodleColorSelectorViewDelegate> _selectColordelegate;
    NSMutableArray *_rainbowColorArrar;
    NSMutableArray *_gifArrar;
    NSMutableArray *_colorIconArray;
    NSMutableArray *_gifPreimageIconArrar;
    UIImageView *_boardShadowOne;
    UIImageView *_boardShadowTwo;
    UIImageView *_colorSelectViewShadow;
    UIImageView *_colorSelectStateView;
    UIImageView *_gifSelectStateView;
    UIActivityIndicatorView *_colorIndicator;
    UIActivityIndicatorView *_gifIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *gifIndicator; // @synthesize gifIndicator=_gifIndicator;
@property(retain, nonatomic) UIActivityIndicatorView *colorIndicator; // @synthesize colorIndicator=_colorIndicator;
@property(retain, nonatomic) UIImageView *gifSelectStateView; // @synthesize gifSelectStateView=_gifSelectStateView;
@property(retain, nonatomic) UIImageView *colorSelectStateView; // @synthesize colorSelectStateView=_colorSelectStateView;
@property(retain, nonatomic) UIImageView *colorSelectViewShadow; // @synthesize colorSelectViewShadow=_colorSelectViewShadow;
@property(retain, nonatomic) UIImageView *boardShadowTwo; // @synthesize boardShadowTwo=_boardShadowTwo;
@property(retain, nonatomic) UIImageView *boardShadowOne; // @synthesize boardShadowOne=_boardShadowOne;
@property(retain, nonatomic) NSMutableArray *gifPreimageIconArrar; // @synthesize gifPreimageIconArrar=_gifPreimageIconArrar;
@property(retain, nonatomic) NSMutableArray *colorIconArray; // @synthesize colorIconArray=_colorIconArray;
@property(retain, nonatomic) NSMutableArray *gifArrar; // @synthesize gifArrar=_gifArrar;
@property(retain, nonatomic) NSMutableArray *rainbowColorArrar; // @synthesize rainbowColorArrar=_rainbowColorArrar;
@property(nonatomic) __weak id <QQDoodleColorSelectorViewDelegate> selectColordelegate; // @synthesize selectColordelegate=_selectColordelegate;
@property(nonatomic) __weak QQDoodlePainView *paintView; // @synthesize paintView=_paintView;
@property(retain, nonatomic) UIScrollView *colorSelectView; // @synthesize colorSelectView=_colorSelectView;
@property(retain, nonatomic) UIScrollView *gifSelectView; // @synthesize gifSelectView=_gifSelectView;
@property(retain, nonatomic) TBExtendedHitButton *undoBtn; // @synthesize undoBtn=_undoBtn;
- (void).cxx_destruct;
- (void)didSelectGifAt:(long long)arg1;
- (void)handleLongPress:(id)arg1;
- (void)onUndoButtonClick:(id)arg1;
- (void)changeSelGif:(id)arg1;
- (void)onGifBtnClick:(id)arg1;
- (void)changeSelColor:(id)arg1;
- (void)onColorBtnClick:(id)arg1;
- (void)initGifSelectView;
- (void)initColorSelectView;
- (void)initGifSelectView:(id)arg1;
- (void)initColorSelectView:(id)arg1;
- (void)dynaDoodleIconUpdateDone;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 colorSelDelegate:(id)arg2;
- (void)layoutSubviews;

@end


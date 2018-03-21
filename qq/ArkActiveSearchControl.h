//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface ArkActiveSearchControl : UIView
{
    UIButton *_clickBtn;
    UILabel *_label;
    UIImageView *_iconView;
    struct CGRect _contentRect;
    struct CGRect _frameRect;
    UIImageView *_bgImgView;
    _Bool _hasPopUp;
    double _origX;
    double _origY;
    unsigned long long _queueIndex;
}

@property(nonatomic) unsigned long long queueIndex; // @synthesize queueIndex=_queueIndex;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(nonatomic) double origY; // @synthesize origY=_origY;
@property(nonatomic) double origX; // @synthesize origX=_origX;
- (void)close:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)popUp;
- (void)touchUpButton;
- (void)touchDownButton;
- (void)clickButton;
- (struct CGRect)setupRect;
- (void)setSkinColor;
- (void)setupClickBtn;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

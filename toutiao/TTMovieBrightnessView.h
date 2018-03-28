//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel, UIToolbar;

@interface TTMovieBrightnessView : UIView
{
    _Bool _isFullScreen;
    _Bool _enableRotate;
    UILabel *_titleLabel;
    UIImageView *_logoImageView;
    UIView *_brightView;
    NSMutableArray *_gridArray;
    UIToolbar *_backView;
}

@property(retain, nonatomic) UIToolbar *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) NSMutableArray *gridArray; // @synthesize gridArray=_gridArray;
@property(retain, nonatomic) UIView *brightView; // @synthesize brightView=_brightView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool enableRotate; // @synthesize enableRotate=_enableRotate;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)orientationDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isIOS7IPad;
- (struct CGPoint)currentCenterInIOS7IPad;
- (struct CGAffineTransform)currentTransformInIOS7IPad;
- (void)p_updateBrightness:(double)arg1;
- (void)p_configureBrightViewGrid;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


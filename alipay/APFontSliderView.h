//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView;
@protocol APFontSizeViewDelegate;

@interface APFontSliderView : UIView <UIGestureRecognizerDelegate>
{
    float width;
    long long curLevel;
    id <APFontSizeViewDelegate> _delegate;
    NSMutableArray *_fontLevelLabels;
    UIView *_tapView;
    UIImageView *_staffView;
    NSMutableArray *_graduations;
    UIImageView *_fontSlider;
}

@property(retain, nonatomic) UIImageView *fontSlider; // @synthesize fontSlider=_fontSlider;
@property(retain, nonatomic) NSMutableArray *graduations; // @synthesize graduations=_graduations;
@property(retain, nonatomic) UIImageView *staffView; // @synthesize staffView=_staffView;
@property(retain, nonatomic) UIView *tapView; // @synthesize tapView=_tapView;
@property(retain, nonatomic) NSMutableArray *fontLevelLabels; // @synthesize fontLevelLabels=_fontLevelLabels;
@property(nonatomic) __weak id <APFontSizeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)calculateAppropriateSelectorXposition:(double)arg1;
- (void)doTap:(id)arg1;
- (void)layoutSubviews;
- (void)createFontLabel;
- (id)drawSeparateLineImageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (void)createStaffView;
- (id)initWithFrame:(struct CGRect)arg1 fontSizeLevel:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

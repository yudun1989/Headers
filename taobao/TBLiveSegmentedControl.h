//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIScrollViewDelegate-Protocol.h"

@class CALayer, NSString, UIColor, UIFont, UIImage, UIScrollView, UIView;
@protocol TBLiveSegmentedControlDelegate;

@interface TBLiveSegmentedControl : UIControl <UIScrollViewDelegate>
{
    _Bool _showNofiDelegate;
    long long _selectedIndex;
    id <TBLiveSegmentedControlDelegate> _delegate;
    UIView *_indictorView;
    CALayer *_indictorLayer;
    UIScrollView *_scrollView;
    UIColor *_buttonColor;
    UIColor *_buttonHighlightColor;
    UIColor *_buttonSelectedColor;
    UIImage *_buttonBackgroundImage;
    UIImage *_buttonHighlightedBackgroundImage;
    UIImage *_buttonSelectedBackgroundImage;
    UIFont *_buttonFont;
}

@property(nonatomic) _Bool showNofiDelegate; // @synthesize showNofiDelegate=_showNofiDelegate;
@property(retain, nonatomic) UIFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(retain, nonatomic) UIImage *buttonSelectedBackgroundImage; // @synthesize buttonSelectedBackgroundImage=_buttonSelectedBackgroundImage;
@property(retain, nonatomic) UIImage *buttonHighlightedBackgroundImage; // @synthesize buttonHighlightedBackgroundImage=_buttonHighlightedBackgroundImage;
@property(retain, nonatomic) UIImage *buttonBackgroundImage; // @synthesize buttonBackgroundImage=_buttonBackgroundImage;
@property(retain, nonatomic) UIColor *buttonSelectedColor; // @synthesize buttonSelectedColor=_buttonSelectedColor;
@property(retain, nonatomic) UIColor *buttonHighlightColor; // @synthesize buttonHighlightColor=_buttonHighlightColor;
@property(retain, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CALayer *indictorLayer; // @synthesize indictorLayer=_indictorLayer;
@property(retain, nonatomic) UIView *indictorView; // @synthesize indictorView=_indictorView;
@property(nonatomic) __weak id <TBLiveSegmentedControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)scrollToFrameVisible:(struct CGRect)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)buttonSelect:(id)arg1;
- (void)setMenuModel:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setIndictorX:(float)arg1;
- (void)setIndicatorViewBGColor;
- (void)setBGColor;
- (void)setupView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


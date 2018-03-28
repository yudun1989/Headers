//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol TTLBroadcastFunctionViewDelegate;

@interface TTLBroadcastFunctionView : UIView
{
    id <TTLBroadcastFunctionViewDelegate> _delegate;
    UIView *_functionPanelView;
    UIButton *_reverseButton;
    UIButton *_beautifyButton;
    UIButton *_filterButton;
    UIButton *_stickerButton;
    UIButton *_toolButton;
    UIButton *_KTVButton;
    UIButton *_shareButton;
}

@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *KTVButton; // @synthesize KTVButton=_KTVButton;
@property(retain, nonatomic) UIButton *toolButton; // @synthesize toolButton=_toolButton;
@property(retain, nonatomic) UIButton *stickerButton; // @synthesize stickerButton=_stickerButton;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) UIButton *beautifyButton; // @synthesize beautifyButton=_beautifyButton;
@property(retain, nonatomic) UIButton *reverseButton; // @synthesize reverseButton=_reverseButton;
@property(retain, nonatomic) UIView *functionPanelView; // @synthesize functionPanelView=_functionPanelView;
@property(nonatomic) __weak id <TTLBroadcastFunctionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showFunctionViewInView:(id)arg1;
- (void)dismissFunctionViewCompletion:(CDUnknownBlockType)arg1;
- (void)shareButtonDidClick;
- (void)KTVButtonDidClick;
- (void)toolButtonDidClick;
- (void)stickerButtonDidClick;
- (void)filterButtonDidClick;
- (void)beautifyButtonDidClick;
- (void)reverButtonDidClick;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

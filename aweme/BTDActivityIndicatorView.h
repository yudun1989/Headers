//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, NSString, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIWindow;
@protocol BTDActivityIndicatorViewDelegate;

@interface BTDActivityIndicatorView : UIView
{
    _Bool _isCustomVisibleFrame;
    int _hideType;
    int _style;
    int _contentArrangement;
    int _horizontalAligment;
    int _verticalAligment;
    NSObject<BTDActivityIndicatorViewDelegate> *_delegate;
    UIView *_presentedView;
    NSString *_message;
    NSString *_tipText;
    UIImage *_tipImage;
    double _displayDuration;
    double _showAnimationDuration;
    double _hideAnimationDuration;
    long long _maxNumberOfLineCharacters;
    double _xOffset;
    double _yOffset;
    double _contentHorizontalPadding;
    double _contentVerticalPadding;
    UITapGestureRecognizer *_anyTap;
    UIView *_backgroundView;
    UIView *_contentView;
    UIView *_contentBackgroundView;
    UILabel *_messageLabel;
    UILabel *_tipLabel;
    UIImageView *_tipImageView;
    UIWindow *_topWindow;
    struct CGSize _visibleMinSize;
    struct BTDEdgeInsets _messageEdgeInsets;
    struct BTDEdgeInsets _imageEdgeInsets;
    struct CGRect _customVisibleFrame;
}

+ (id)sharedView;
@property(retain, nonatomic) UIWindow *topWindow; // @synthesize topWindow=_topWindow;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UITapGestureRecognizer *anyTap; // @synthesize anyTap=_anyTap;
@property(nonatomic) _Bool isCustomVisibleFrame; // @synthesize isCustomVisibleFrame=_isCustomVisibleFrame;
@property(nonatomic) struct CGRect customVisibleFrame; // @synthesize customVisibleFrame=_customVisibleFrame;
@property(nonatomic) struct BTDEdgeInsets imageEdgeInsets; // @synthesize imageEdgeInsets=_imageEdgeInsets;
@property(nonatomic) struct BTDEdgeInsets messageEdgeInsets; // @synthesize messageEdgeInsets=_messageEdgeInsets;
@property(nonatomic) double contentVerticalPadding; // @synthesize contentVerticalPadding=_contentVerticalPadding;
@property(nonatomic) double contentHorizontalPadding; // @synthesize contentHorizontalPadding=_contentHorizontalPadding;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) double xOffset; // @synthesize xOffset=_xOffset;
@property(nonatomic) struct CGSize visibleMinSize; // @synthesize visibleMinSize=_visibleMinSize;
@property(nonatomic) long long maxNumberOfLineCharacters; // @synthesize maxNumberOfLineCharacters=_maxNumberOfLineCharacters;
@property(nonatomic) int verticalAligment; // @synthesize verticalAligment=_verticalAligment;
@property(nonatomic) int horizontalAligment; // @synthesize horizontalAligment=_horizontalAligment;
@property(nonatomic) int contentArrangement; // @synthesize contentArrangement=_contentArrangement;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) int hideType; // @synthesize hideType=_hideType;
@property(nonatomic) double hideAnimationDuration; // @synthesize hideAnimationDuration=_hideAnimationDuration;
@property(nonatomic) double showAnimationDuration; // @synthesize showAnimationDuration=_showAnimationDuration;
@property(nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
@property(retain, nonatomic) UIImage *tipImage; // @synthesize tipImage=_tipImage;
@property(copy, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIView *presentedView; // @synthesize presentedView=_presentedView;
@property(nonatomic) __weak NSObject<BTDActivityIndicatorViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showMessage:(id)arg1 tipImage:(id)arg2 center:(struct CGPoint)arg3;
- (void)showMessage:(id)arg1 center:(struct CGPoint)arg2;
- (void)showWithOffset:(struct CGPoint)arg1;
- (void)showMessage:(id)arg1 tipImage:(id)arg2 offsetY:(double)arg3;
- (void)showMessage:(id)arg1 offsetY:(double)arg2;
- (void)showWithOffsetY:(double)arg1;
- (void)showMessage:(id)arg1 tipImage:(id)arg2 offsetX:(double)arg3;
- (void)showMessage:(id)arg1 offsetX:(double)arg2;
- (void)showWithOffsetX:(double)arg1;
- (void)showMessage:(id)arg1 tip:(id)arg2 tipImage:(id)arg3;
- (void)showMessage:(id)arg1 tipImage:(id)arg2;
- (void)showMessage:(id)arg1;
- (void)show;
- (void)showInView:(id)arg1 message:(id)arg2 tipImage:(id)arg3 offset:(struct CGPoint)arg4;
- (void)showInView:(id)arg1 message:(id)arg2 offset:(struct CGPoint)arg3;
- (void)showInView:(id)arg1 offset:(struct CGPoint)arg2;
- (void)showInView:(id)arg1 message:(id)arg2 tipImage:(id)arg3 offsetY:(double)arg4;
- (void)showInView:(id)arg1 message:(id)arg2 offsetY:(double)arg3;
- (void)showInView:(id)arg1 offsetY:(double)arg2;
- (void)showInView:(id)arg1 message:(id)arg2 tipImage:(id)arg3 offsetX:(double)arg4;
- (void)showInView:(id)arg1 message:(id)arg2 offsetX:(double)arg3;
- (void)showInView:(id)arg1 offsetX:(double)arg2;
- (void)showInView:(id)arg1 message:(id)arg2 tip:(id)arg3 tipImage:(id)arg4;
- (void)showInView:(id)arg1 message:(id)arg2 tipImage:(id)arg3;
- (void)showInView:(id)arg1 message:(id)arg2;
- (void)showInView:(id)arg1;
- (void)hide:(_Bool)arg1;
- (void)hideWithAnimation;
- (void)showInView:(id)arg1 message:(id)arg2 tip:(id)arg3 tipImage:(id)arg4 offsetX:(double)arg5 offsetY:(double)arg6;
- (void)handleAnyTap:(id)arg1;
- (void)transformOrientationIfNecessary;
- (void)customVisibleFrameIfNecessary;
- (void)arrangeSubviewsWithOffsetX:(double)arg1 offsetY:(double)arg2;
- (void)preparedSubviewsWithMessage:(id)arg1 tipText:(id)arg2 tipImage:(id)arg3;
- (id)topWindowForPresent;
- (struct CGRect)windowFrame;
- (void)reportUIApplicationDidChangeStatusBarOrientationNotification:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)setMessageLabelFont:(id)arg1;
- (void)buildContentView;
- (void)loadView;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSTimer, UIImageView, UILabel, UIView;
@protocol MMPActionDelegate;

@interface MMPToastView : NSObject
{
    long long _toastType;
    UIView *_maskView;
    UIView *_toastView;
    UIImageView *_logoView;
    UILabel *_textView;
    UIView *_1stPoint;
    UIView *_2edPoint;
    UIView *_3rdPoint;
    NSTimer *_tickCount;
    _Bool _isRealHidden;
    NSArray *_actions;
    id <MMPActionDelegate> _delegate;
}

@property(nonatomic) _Bool isRealHidden; // @synthesize isRealHidden=_isRealHidden;
@property(nonatomic) __weak id <MMPActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)resumeView;
- (void)hideView;
- (void)tickCount:(id)arg1;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (id)addPoint:(id)arg1 loc:(long long)arg2;
- (void)toastTimeEnded;
- (void)show:(_Bool)arg1;
- (void)initToastWithLogo:(id)arg1 andText:(id)arg2;
- (void)showToastWithImage:(id)arg1 text:(id)arg2 action:(id)arg3 delay:(double)arg4;
- (void)showLoadViewWithText:(id)arg1 bShow:(_Bool)arg2;
- (void)dealloc;
- (id)initWithType:(long long)arg1;

@end


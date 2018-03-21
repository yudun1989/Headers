//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, UILabel, YLProgressBar;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MBKTopTipsView : UIView
{
    UILabel *_messageLabel;
    YLProgressBar *_progressBarView;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_countdownTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) YLProgressBar *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)refresh;
- (id)secondConvertString:(double)arg1;
- (void)removeFromSuperview;
- (void)updateWithCountdownTypeMessage:(id)arg1 progressSeconds:(double)arg2 fullSeconds:(double)arg3 finishedBlock:(CDUnknownBlockType)arg4;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (void)updateWithDisplayTypeMessage:(id)arg1;
- (void)updateWithOrder:(id)arg1 type:(long long)arg2;

@end


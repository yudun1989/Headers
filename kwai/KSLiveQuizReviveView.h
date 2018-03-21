//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CALayer, NSString, UIImageView, UILabel;

@interface KSLiveQuizReviveView : UIView <CAAnimationDelegate>
{
    UIView *_containerView;
    UILabel *_textLabel;
    UIImageView *_heartView;
    UILabel *_reviveLabel;
    CALayer *_heartBackLayer;
    CALayer *_heartBackCircleLayer;
    UIView *_flashContainerView;
}

@property(retain, nonatomic) UIView *flashContainerView; // @synthesize flashContainerView=_flashContainerView;
@property(retain, nonatomic) CALayer *heartBackCircleLayer; // @synthesize heartBackCircleLayer=_heartBackCircleLayer;
@property(retain, nonatomic) CALayer *heartBackLayer; // @synthesize heartBackLayer=_heartBackLayer;
@property(retain, nonatomic) UILabel *reviveLabel; // @synthesize reviveLabel=_reviveLabel;
@property(retain, nonatomic) UIImageView *heartView; // @synthesize heartView=_heartView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)revive;
- (void)flash;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startAnimation;
- (void)resetAnimated:(_Bool)arg1;
- (void)updateReviveCardAvailable:(_Bool)arg1;
- (void)updateReviveCardCount:(long long)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


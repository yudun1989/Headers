//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface KSLiveChatSpeakerView : UIView
{
    double _startOffset[3];
    NSArray *_arcs;
    double _animationProgress;
    _Bool _animating;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)tearDownAnimation;
- (void)setUpAnimation;
- (void)stopAnimating;
- (void)startAnimating;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBView.h"

@class NSTimer, UILabel, UIView;

@interface FBMarquee : FBView
{
    UIView *_containerView;
    UILabel *_label;
    double _width;
    double _text_width;
    NSTimer *_timer;
    double timeFunctionStartXXXtime;
    float _padding[4];
}

- (void).cxx_destruct;
- (void)stop;
- (void)timerFired;
- (void)start;
- (void)updateAttr:(id)arg1 withValue:(id)arg2;
- (void)updateCSS:(id)arg1 withValue:(id)arg2;
- (void)updateRect;
- (id)initWithNode:(struct fb_node *)arg1 withDocument:(id)arg2 withView:(id)arg3;
- (void)dealloc;

@end


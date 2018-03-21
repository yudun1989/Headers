//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UIImageView;

@interface VRBMoneyScrollView : UIView
{
    NSArray *_imageArray;
    _Bool _increase;
    CDUnknownBlockType _animaitonDoneBlock;
    int _currentIndex;
    int _fromValue;
    int _toValue;
    NSTimer *_timer;
    double _currentTime;
    long long _repeatCount;
    double _duration;
    UIImageView *_topImageView;
    UIImageView *_middleImageView;
    UIImageView *_bottomImageView;
    UIImageView *_tmpImageView;
}

+ (id)getDigitImageWithIndex:(int)arg1;
+ (id)getImageWithName:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrolling;
- (double)getCurrentTimeInterval;
- (void)animationFromIndex:(int)arg1 toIndex:(int)arg2 duration:(double)arg3 repeatCount:(long long)arg4 doneBlock:(CDUnknownBlockType)arg5;
- (void)startVRBAnimating;
- (void)stopVRBAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end


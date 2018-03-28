//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSTimer, TTLVVeboImage;

@interface TTLVVeboImageView : UIImageView
{
    NSTimer *timer;
    TTLVVeboImage *gifImage;
    _Bool _repeats;
    _Bool _delayDuration;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool delayDuration; // @synthesize delayDuration=_delayDuration;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)tick;
- (void)setImage:(id)arg1;

@end


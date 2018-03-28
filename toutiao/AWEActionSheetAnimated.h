//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface AWEActionSheetAnimated : NSObject <UIViewControllerAnimatedTransitioning>
{
    unsigned long long _type;
}

+ (id)transitionWithTransitionType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)dismissAnimation:(id)arg1;
- (void)presentAnimation:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTransitionType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


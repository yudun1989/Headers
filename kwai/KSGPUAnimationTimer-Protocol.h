//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol KSGPUAnimationTimer <NSObject>
@property(nonatomic) _Bool paused;
@property(nonatomic) long long preferredFramesPerSecond;
- (void)invalidate;
- (void)sync:(void (^)(void))arg1;
- (void)async:(void (^)(void))arg1;
- (void)scheduleWithMode:(NSString *)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
@end


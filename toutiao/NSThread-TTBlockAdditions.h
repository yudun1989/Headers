//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@interface NSThread (TTBlockAdditions)
+ (void)ttPerformBlockInBackground:(CDUnknownBlockType)arg1;
+ (void)ttPerformBlockOnMainThread:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
+ (void)ttPerformBlockOnMainThread:(CDUnknownBlockType)arg1;
- (void)_ttRunOnSelfWithBlock:(CDUnknownBlockType)arg1;
- (void)ttPerformBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)ttPerformBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
- (void)ttAsyncPerformBlock:(CDUnknownBlockType)arg1;
- (void)ttPerformBlock:(CDUnknownBlockType)arg1;
@end


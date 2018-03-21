//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MAAnimationTaskManager : NSObject
{
    NSMutableDictionary *_animationDic;
    NSMutableArray *_animationRemoveArray;
}

- (void).cxx_destruct;
- (id)init;
- (void)doAnimationTaskWithDuration:(double)arg1 frameInterval:(double)arg2 andResultBlock:(CDUnknownBlockType)arg3;
- (void)removeAllAnimationTasks;
- (void)removeAnimationTaskWithKeyPath:(id)arg1 finished:(_Bool)arg2;
- (void)addAnimationTask:(id)arg1;
- (unsigned long long)animationCount;

@end


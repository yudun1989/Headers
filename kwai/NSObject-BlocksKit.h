//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (BlocksKit)
+ (void)bk_cancelBlock:(id)arg1;
+ (id)bk_performOnQueue:(id)arg1 afterDelay:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)bk_performInBackgroundAfterDelay:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)bk_performAfterDelay:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)bk_performOnQueue:(id)arg1 afterDelay:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)bk_performInBackgroundAfterDelay:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)bk_performAfterDelay:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSHybridLogger : NSObject
{
}

+ (void)logDidFinishLoadURL:(id)arg1;
+ (void)logDidStartLoadURL:(id)arg1;
+ (void)before$KSHybridStorage$useHybridResource:(id)arg1 requestPath:(id)arg2;
+ (void)before$KSHybridStorage$updatePackage:(id)arg1;
+ (void)logEnterURL:(id)arg1;
+ (void)_logAction:(int)arg1 package:(id)arg2 cost:(double)arg3 success:(_Bool)arg4;
+ (void)before$KSHybridManager$unzipPackage:(id)arg1 success:(_Bool)arg2 cost:(double)arg3;
+ (void)before$KSHybridManager$downloadPackage:(id)arg1 success:(_Bool)arg2 cost:(double)arg3;
+ (void)before$KSHybridManager$verifyPackage:(id)arg1 success:(_Bool)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSBootingProtector : NSObject
{
}

+ (void)setRepairCompletedUsingBlock:(CDUnknownBlockType)arg1;
+ (void)setWillRepairUsingBlock:(CDUnknownBlockType)arg1;
+ (void)setDebugModel:(_Bool)arg1;
+ (void)setWhitePathsWhenDeleteFiles:(id)arg1;
+ (void)setFileDeletePathsWhenRepairCrashOfNoPerception:(id)arg1;
+ (void)startProtecting;

@end


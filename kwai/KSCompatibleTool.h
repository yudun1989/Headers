//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HLAtAttributeProcesser;

@interface KSCompatibleTool : NSObject
{
    HLAtAttributeProcesser *_processer;
}

+ (id)imageWithURL:(id)arg1;
+ (int)stringToInt:(id)arg1;
+ (id)intToSex:(long long)arg1;
+ (void)processBeforeVersion:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)sharedCompatibleTool;
@property(retain, nonatomic) HLAtAttributeProcesser *processer; // @synthesize processer=_processer;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface KSBPConfigCenter : NSObject
{
    _Bool _debugModel;
    NSArray *_fileDeletePathsWhenRepairNonPerception;
    NSArray *_fileWhitePathsWhenDeleteFiles;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)destoryInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *fileWhitePathsWhenDeleteFiles; // @synthesize fileWhitePathsWhenDeleteFiles=_fileWhitePathsWhenDeleteFiles;
@property(retain, nonatomic) NSArray *fileDeletePathsWhenRepairNonPerception; // @synthesize fileDeletePathsWhenRepairNonPerception=_fileDeletePathsWhenRepairNonPerception;
@property(nonatomic) _Bool debugModel; // @synthesize debugModel=_debugModel;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTFRevivalTaskManager : NSObject
{
    _Bool _isLoginWhenOpenFantasy;
    _Bool _debugEnable;
    int _revivalCardReadyCount;
    int _unfinishedTaskNum;
    int _lifeNum;
}

+ (void)showDebugInfoInView:(id)arg1;
+ (void)refreshTaskInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (id)sharedManager;
@property(nonatomic) _Bool debugEnable; // @synthesize debugEnable=_debugEnable;
@property(nonatomic) _Bool isLoginWhenOpenFantasy; // @synthesize isLoginWhenOpenFantasy=_isLoginWhenOpenFantasy;
@property(nonatomic) int lifeNum; // @synthesize lifeNum=_lifeNum;
@property(nonatomic) int unfinishedTaskNum; // @synthesize unfinishedTaskNum=_unfinishedTaskNum;
@property(nonatomic) int revivalCardReadyCount; // @synthesize revivalCardReadyCount=_revivalCardReadyCount;
- (_Bool)debugEnabled;

@end


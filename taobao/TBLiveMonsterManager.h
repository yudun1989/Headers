//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface TBLiveMonsterManager : NSObject
{
    NSMutableSet *_followedAccountCache;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSMutableSet *followedAccountCache; // @synthesize followedAccountCache=_followedAccountCache;
- (void).cxx_destruct;
- (_Bool)isHitFollowCache;
- (void)writeFollowCache;
- (id)init;

@end


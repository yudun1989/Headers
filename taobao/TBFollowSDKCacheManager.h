//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBFollowSDKCacheManager : NSObject
{
    NSMutableDictionary *_mutableDict;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *mutableDict; // @synthesize mutableDict=_mutableDict;
- (void).cxx_destruct;
- (void)clearAnimationStatus;
- (_Bool)isGoInWeiTao;
- (id)getIsGoInWeiTao;
- (void)setIsGoInWeiTao;
- (_Bool)isShowAnimation;
- (id)getAnimateTime;
- (void)setShowAnimateTime;
- (id)getFollowStatusWithAccountId:(id)arg1;
- (void)setDataWithAccoutId:(id)arg1 followStatus:(_Bool)arg2;
- (id)init;

@end


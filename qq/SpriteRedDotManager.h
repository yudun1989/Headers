//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SpriteRedDotManager : NSObject
{
}

+ (_Bool)hasExistWithPath:(id)arg1 pushTime:(long long)arg2;
+ (void)markHasShowedIfNeedWithRedID:(id)arg1;
+ (void)loadRedDotList;
+ (id)sharedInstance;
- (void)didShowShopBubble;
- (id)getShopRedDot;
- (void)didReceiveReddot:(id)arg1 packageId:(long long)arg2;
- (void)redDotDidShow:(long long)arg1;
- (id)redDotForPackage:(long long)arg1;
- (_Bool)needShowRedDot:(long long)arg1;
- (void)didReceiveBubble:(id)arg1;
- (void)bubbleDidTap;
- (void)bubbleDidShow;
- (id)getPackageBubble;
- (id)bubbleTextToShow;
- (_Bool)saveReddot:(id)arg1 packageId:(long long)arg2;
- (id)getReddotByPackageId:(long long)arg1;
- (_Bool)saveBubbleInfo:(id)arg1;
- (id)getBubbleInfo;

@end


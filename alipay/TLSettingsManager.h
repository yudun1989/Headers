//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TLSettingsManager : NSObject
{
}

+ (_Bool)link2cardEnable;
+ (_Bool)nearbyOn;
+ (void)setNearbyOn:(_Bool)arg1;
+ (_Bool)personalSceneEnable;
+ (_Bool)gwPersonalSceneEnable;
+ (_Bool)sceneLawFlag;
+ (void)setSceneLawFlag:(_Bool)arg1;
+ (_Bool)sendToLawFlag;
+ (void)setSendToLawFlag:(_Bool)arg1;
+ (_Bool)lbsAuthStatusFlag;
+ (void)setLBSAuthStatusFlag:(_Bool)arg1;
+ (id)shareSettingsManager;
- (id)timelineMNGSettings;
- (id)init;

@end


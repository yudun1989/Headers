//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NearbyVideoChatPromotionManager : NSObject
{
}

+ (void)reportWithOpName:(id)arg1 opUin:(id)arg2 targetUin:(id)arg3 reserved1:(id)arg4 reserved2:(id)arg5 reserved3:(id)arg6 reserved4:(id)arg7;
+ (id)reportSexStr;
+ (id)sharedInstance;
- (void)increaseBannerPromotionDisplayTimes:(id)arg1;
- (long long)bannerPromotionDisplayTimes:(id)arg1;
- (id)loadBannerPromotionModel;
- (id)testBannerModel;
- (_Bool)shouldShowBannerPromotion;
- (void)increaseAlertPromotionDisplayTimes:(id)arg1;
- (long long)alertPromotionDisplayTimes:(id)arg1;
- (id)loadAlertPromotionModel;
- (id)testAlertModel;
- (_Bool)shouldShowAlertPromotion;
- (_Bool)isMale;

@end


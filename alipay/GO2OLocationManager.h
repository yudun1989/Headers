//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LBSAddressInfo, NSString, O2OLocationCityInfo, O2OLocationXYInfo;

@interface GO2OLocationManager : NSObject
{
    NSString *_bizType;
    O2OLocationCityInfo *_selectedCityInfoInternal;
    O2OLocationXYInfo *_currentXY;
    LBSAddressInfo *_userLocation;
}

+ (id)keyForIntlHistory;
+ (id)keyForNatlHistory;
+ (void)saveHistoryCityInfo:(id)arg1 forKey:(id)arg2;
+ (void)saveHistoryCityInfo:(id)arg1;
+ (_Bool)isAuthrized;
+ (id)intlManager;
@property(retain, nonatomic) LBSAddressInfo *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) O2OLocationXYInfo *currentXY; // @synthesize currentXY=_currentXY;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)keyForSelectedCityInfo;
- (void)saveSelectedCityInfo:(id)arg1;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 reverseSuccessBlock:(CDUnknownBlockType)arg3 timeout:(double)arg4 cacheExpire:(int)arg5;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 reverseSuccessBlock:(CDUnknownBlockType)arg3;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2 timeout:(double)arg3 cacheExpire:(int)arg4;
- (void)startLocationWithLocatedSuccess:(CDUnknownBlockType)arg1 locatedFail:(CDUnknownBlockType)arg2;
- (void)changeCurrentXY:(id)arg1;
- (void)changeSelectedCityInfo:(id)arg1;
- (void)clearCityInfo;
- (id)selectedCityInfoInternal;
@property(readonly, nonatomic) O2OLocationCityInfo *selectedCityInfo;
- (id)initWithBizType:(id)arg1;

@end


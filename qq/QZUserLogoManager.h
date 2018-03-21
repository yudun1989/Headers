//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary;

@interface QZUserLogoManager : NSObject
{
    NSDate *_preloadStartUpDataLastDate;
    long long _preloadStartUpDataID;
    long long _getUserlogoTimestampID;
    long long _getRcTabListID;
    NSDictionary *_userlogoCache;
    int _xo;
}

+ (_Bool)checkIsValidUserLogoData:(id)arg1;
+ (id)mergeUserLogoTimestampDict:(id)arg1 toOldDict:(id)arg2;
+ (id)instance;
- (void).cxx_destruct;
- (long long)getUserlogoTimestamp:(id)arg1;
- (void)onLogin;
- (void)onGetUserlogoTimestamp:(id)arg1;
- (void)onPreloadStartUpData:(id)arg1;
- (void)preloadStartUpData;
- (void)flushToDisk:(id)arg1;
- (id)loadFromDisk;
@property(retain, nonatomic) NSDate *preloadStartUpDataLastDate; // @dynamic preloadStartUpDataLastDate;
- (id)userlogoCache;
- (void)setUserlogoCache:(id)arg1;
@property(readonly, nonatomic) _Bool isPayEntryValid;
@property(readonly, nonatomic) _Bool isQuaValid;
@property(readonly, nonatomic) long long operationMode;
@property(readonly) long long openVipDialogType; // @dynamic openVipDialogType;
@property(readonly) long long iOSPayType; // @dynamic iOSPayType;
- (id)init;

// Remaining properties
@property(nonatomic) long long getRcTabListID; // @dynamic getRcTabListID;
@property(nonatomic) long long getUserlogoTimestampID; // @dynamic getUserlogoTimestampID;
@property(nonatomic) long long preloadStartUpDataID; // @dynamic preloadStartUpDataID;

@end

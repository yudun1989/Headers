//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GtkmSdkUser;

@interface GtkDbStore : NSObject
{
    GtkmSdkUser *gtk_sdkUser_;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)vacuumTables;
- (void)cleanExpireData;
- (void)deleteAllCacheDataForAction:(int)arg1;
- (void)deleteAllCacheData;
- (void)deleteCacheDataForRdid:(id)arg1;
- (void)updateCacheData:(id)arg1 andUpdateTime:(double)arg2;
- (id)getCacheDataForGivenLine:(int)arg1 andAction:(int)arg2;
- (id)cacheData:(id)arg1 Rdid:(id)arg2 Type:(id)arg3 Action:(int)arg4 urgent:(_Bool)arg5;
- (id)cacheData:(id)arg1 Rdid:(id)arg2 Type:(id)arg3 Action:(int)arg4;
- (void)removeGXCheckCodeByAppId:(id)arg1;
- (void)removeGXRegisterIdByAppId:(id)arg1;
- (void)removeGXClientIdByAppId:(id)arg1;
- (void)removeGXLoginTokenByAppId:(id)arg1;
- (id)getGxCheckCodeByAppId:(id)arg1;
- (id)getGXRegisterIdByAppId:(id)arg1;
- (id)getGXClientIdByAppId:(id)arg1;
- (id)getGXLoginTokenByAppId:(id)arg1;
- (void)saveGXCheckCode:(id)arg1 andAppId:(id)arg2;
- (void)saveGXRegisterId:(id)arg1 andAppId:(id)arg2;
- (void)saveGXClientId:(id)arg1 andAppId:(id)arg2;
- (void)saveGXLoginToken:(id)arg1 andAppId:(id)arg2;
- (id)findSdkUserByAppId:(id)arg1;
- (void)cleanExpireDataInPaylodMsg:(double)arg1;
- (_Bool)savePayloadMsg:(id)arg1;
- (_Bool)hasStoredMsgByKey:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface APSyncAppBaseInfo : NSObject
{
    _Bool _isNewInstall;
    NSMutableDictionary *_versionMap;
    NSString *_lastVersion;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *lastVersion; // @synthesize lastVersion=_lastVersion;
@property(retain, nonatomic) NSMutableDictionary *versionMap; // @synthesize versionMap=_versionMap;
@property(nonatomic) _Bool isNewInstall; // @synthesize isNewInstall=_isNewInstall;
- (void).cxx_destruct;
- (_Bool)saveMaxSkeyMap:(id)arg1 keyDicId:(id)arg2 principalIdType:(int)arg3;
- (id)allMaxSkeyMap;
- (_Bool)removeMaxSkeyMapForKeyDicId:(id)arg1;
- (_Bool)saveReadDic:(id)arg1;
- (void)removeVersionForDeviceType;
- (void)removeVersionWithUserid:(id)arg1;
- (id)versionForDeviceType;
- (id)versionWithUserid:(id)arg1;
- (_Bool)changeUserIdMapWithVersion:(id)arg1;
- (_Bool)changeDeviceWithVersion:(id)arg1;
- (_Bool)changeLastVersionWithVersion:(id)arg1;
- (id)versionMapInit;
- (void)startWithVersion:(id)arg1;

@end


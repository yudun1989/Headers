//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol DynamicConfigurationStorageProtocol, DynamicConfigurationSwitchProtocol, DynamicConfigurationUTProtocol, DynamicConfigurationUpdateProtocol;

@interface DynamicConfigurationManager : NSObject
{
    id <DynamicConfigurationUTProtocol> _utDelegate;
    id <DynamicConfigurationStorageProtocol> _storageDelegate;
    id <DynamicConfigurationUpdateProtocol> _updateDelegate;
    id <DynamicConfigurationSwitchProtocol> _switchDelegate;
    NSMutableDictionary *_memorySourceVersionCache;
    NSArray *_statusStringArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *statusStringArray; // @synthesize statusStringArray=_statusStringArray;
@property(retain, nonatomic) NSMutableDictionary *memorySourceVersionCache; // @synthesize memorySourceVersionCache=_memorySourceVersionCache;
@property(nonatomic) __weak id <DynamicConfigurationSwitchProtocol> switchDelegate; // @synthesize switchDelegate=_switchDelegate;
@property(nonatomic) __weak id <DynamicConfigurationUpdateProtocol> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic) __weak id <DynamicConfigurationStorageProtocol> storageDelegate; // @synthesize storageDelegate=_storageDelegate;
@property(nonatomic) __weak id <DynamicConfigurationUTProtocol> utDelegate; // @synthesize utDelegate=_utDelegate;
- (void).cxx_destruct;
- (_Bool)isSwitchON;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)didReceiveConfigurationUpdateNotification:(id)arg1;
- (void)updateDidFinishHandler:(id)arg1;
- (void)deleteConfigurationForGoalUrl:(id)arg1;
- (id)redirectUrl:(id)arg1;
- (void)dealloc;
- (id)initOnce;

@end


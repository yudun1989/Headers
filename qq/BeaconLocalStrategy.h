//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/BeaconPersistObject.h>

#import <QQMainProject/AnaLocalObjInitWithWupProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface BeaconLocalStrategy : BeaconPersistObject <AnaLocalObjInitWithWupProtocol>
{
    int _zipAlg;
    int _encAlg;
    NSString *_encKey;
    NSString *_encPubKey;
    int _dbMaxSize;
    NSDictionary *_cloudParas;
    int _queryInterval;
    NSString *_url;
    NSDictionary *_moduleStrategys;
}

@property(retain, nonatomic) NSDictionary *moduleStrategys; // @synthesize moduleStrategys=_moduleStrategys;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int queryInterval; // @synthesize queryInterval=_queryInterval;
@property(retain, nonatomic) NSDictionary *cloudParas; // @synthesize cloudParas=_cloudParas;
@property(nonatomic) int dbMaxSize; // @synthesize dbMaxSize=_dbMaxSize;
@property(retain, nonatomic) NSString *encPubKey; // @synthesize encPubKey=_encPubKey;
@property(retain, nonatomic) NSString *encKey; // @synthesize encKey=_encKey;
@property(nonatomic) int encAlg; // @synthesize encAlg=_encAlg;
@property(nonatomic) int zipAlg; // @synthesize zipAlg=_zipAlg;
- (void)dealloc;
- (void)checkSafe;
- (id)getStrategyForKey:(int)arg1;
- (_Bool)addModuleStrategy:(id)arg1;
- (void)initLocalObjWithWupBuffer:(JceInputStream_de19c559 *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


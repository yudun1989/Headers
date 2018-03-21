//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QQLockArray, QQLockDictionary, QQOIDBSSORequest;

@interface QQGroupEnterEffectConfigureMgr : NSObject
{
    unsigned int _valideInterval;
    unsigned int _reportInterval;
    unsigned long long _uin;
    QQOIDBSSORequest *_configReq;
    QQOIDBSSORequest *_reportReq;
    QQOIDBSSORequest *_effectReq;
    QQOIDBSSORequest *_entranceReq;
    NSString *_wording;
    QQLockArray *_configArray;
    QQLockDictionary *_effectDict;
    CDUnknownBlockType _loadEffectBlock;
    QQLockDictionary *_effectEntranceDict;
    double _saveTime;
}

+ (id)sharedInstance;
@property(nonatomic) double saveTime; // @synthesize saveTime=_saveTime;
@property(retain, nonatomic) QQLockDictionary *effectEntranceDict; // @synthesize effectEntranceDict=_effectEntranceDict;
@property(copy, nonatomic) CDUnknownBlockType loadEffectBlock; // @synthesize loadEffectBlock=_loadEffectBlock;
@property(retain, nonatomic) QQLockDictionary *effectDict; // @synthesize effectDict=_effectDict;
@property(retain, nonatomic) QQLockArray *configArray; // @synthesize configArray=_configArray;
@property(nonatomic) unsigned int reportInterval; // @synthesize reportInterval=_reportInterval;
@property(nonatomic) unsigned int valideInterval; // @synthesize valideInterval=_valideInterval;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) QQOIDBSSORequest *entranceReq; // @synthesize entranceReq=_entranceReq;
@property(retain, nonatomic) QQOIDBSSORequest *effectReq; // @synthesize effectReq=_effectReq;
@property(retain, nonatomic) QQOIDBSSORequest *reportReq; // @synthesize reportReq=_reportReq;
@property(retain, nonatomic) QQOIDBSSORequest *configReq; // @synthesize configReq=_configReq;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)loadEffectConfigure;
- (void)saveEffectNameToFile;
- (void)saveConfigureToFile;
- (id)getEffectNameFilePath;
- (id)getConfigureFilePath;
- (void)requestEntranceStateWithGroupCode:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestEnterEffectWithGroupCode:(unsigned long long)arg1;
- (void)requestEffectDetailWithId:(unsigned int)arg1;
- (void)requestEffectConfigure;
- (void)handleEnterGroupEffectModify:(id)arg1;
- (void)handleAccountLogout;
- (void)refreshEntanceDataWithGroupCode:(unsigned long long)arg1 status:(unsigned int)arg2 interval:(unsigned int)arg3;
- (void)refreshDataWithEffectId:(unsigned int)arg1 EffectName:(id)arg2;
- (void)refreshDataWithDictionary:(id)arg1;
- (_Bool)checkConfigureDictionary:(id)arg1;
- (void)updateEffectWithGroupCode:(unsigned long long)arg1 effectId:(unsigned int)arg2 status:(unsigned int)arg3;
- (void)updateReportTimeWithGroupCode:(unsigned long long)arg1;
- (void)reportEnterGroupWithGroupCode:(unsigned long long)arg1;
- (void)loadEntranceStatusWithGroupCode:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadEffectNameListWithBlock:(CDUnknownBlockType)arg1;
- (void)loadEffectNameWithId:(unsigned int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)getEffectNameWithId:(unsigned int)arg1;
- (id)getEffectConfigItemWithGroupCode:(unsigned long long)arg1;
- (_Bool)hasEnterGroupEffect;
- (_Bool)configureIsValid;
- (void)cleanData;
- (void)dealloc;
- (id)init;

@end


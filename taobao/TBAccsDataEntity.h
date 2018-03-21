//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, TBAccsLimitRuleModel;

@interface TBAccsDataEntity : NSObject
{
    _Bool _isRepeat;
    unsigned short _extHeaderLength;
    NSString *_serviceID;
    NSString *_version;
    unsigned long long _compressType;
    unsigned long long _accsDataClass;
    unsigned long long _accsDataFlagType;
    unsigned long long _accsErrorFlagType;
    unsigned long long _accsReturnFlagType;
    unsigned long long _accsAppStatusFlagType;
    unsigned long long _accsFlagAccsType;
    unsigned long long _accsFlagNeedAccs;
    NSData *_flagData;
    NSString *_target;
    NSData *_targetData;
    NSString *_source;
    NSData *_sourceData;
    NSString *_dataID;
    NSData *_dataIDData;
    NSData *_data;
    NSDictionary *_dataJsonDict;
    NSString *_jsonString;
    NSString *_host;
    NSMutableDictionary *_extHeader;
    NSData *_extHeaderData;
    TBAccsLimitRuleModel *_limitRuleModel;
    NSData *_originalData;
    long long _timeout;
    long long _packageCount;
    long long _packageIndex;
}

@property(nonatomic) long long packageIndex; // @synthesize packageIndex=_packageIndex;
@property(nonatomic) long long packageCount; // @synthesize packageCount=_packageCount;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSData *originalData; // @synthesize originalData=_originalData;
@property __weak TBAccsLimitRuleModel *limitRuleModel; // @synthesize limitRuleModel=_limitRuleModel;
@property(retain, nonatomic) NSData *extHeaderData; // @synthesize extHeaderData=_extHeaderData;
@property(retain, nonatomic) NSMutableDictionary *extHeader; // @synthesize extHeader=_extHeader;
@property(nonatomic) unsigned short extHeaderLength; // @synthesize extHeaderLength=_extHeaderLength;
@property(nonatomic) _Bool isRepeat; // @synthesize isRepeat=_isRepeat;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *jsonString; // @synthesize jsonString=_jsonString;
@property(retain, nonatomic) NSDictionary *dataJsonDict; // @synthesize dataJsonDict=_dataJsonDict;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSData *dataIDData; // @synthesize dataIDData=_dataIDData;
@property(retain, nonatomic) NSString *dataID; // @synthesize dataID=_dataID;
@property(retain, nonatomic) NSData *sourceData; // @synthesize sourceData=_sourceData;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSData *targetData; // @synthesize targetData=_targetData;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSData *flagData; // @synthesize flagData=_flagData;
@property(nonatomic) unsigned long long accsFlagNeedAccs; // @synthesize accsFlagNeedAccs=_accsFlagNeedAccs;
@property(nonatomic) unsigned long long accsFlagAccsType; // @synthesize accsFlagAccsType=_accsFlagAccsType;
@property(nonatomic) unsigned long long accsAppStatusFlagType; // @synthesize accsAppStatusFlagType=_accsAppStatusFlagType;
@property(nonatomic) unsigned long long accsReturnFlagType; // @synthesize accsReturnFlagType=_accsReturnFlagType;
@property(nonatomic) unsigned long long accsErrorFlagType; // @synthesize accsErrorFlagType=_accsErrorFlagType;
@property(nonatomic) unsigned long long accsDataFlagType; // @synthesize accsDataFlagType=_accsDataFlagType;
@property(nonatomic) unsigned long long accsDataClass; // @synthesize accsDataClass=_accsDataClass;
@property(nonatomic) unsigned long long compressType; // @synthesize compressType=_compressType;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end


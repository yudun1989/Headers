//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSLock, NSString;

@interface BigDataConfigManager : NSObject
{
    NSLock *_lock;
    _Bool _signalInAdvance;
    NSData *_videoUKey;
    NSString *_sessionKeyBDH;
    NSDictionary *_configDic;
    long long _channelType;
    long long _ptvCannelType;
}

+ (id)shareInstance;
@property(readonly) long long ptvCannelType; // @synthesize ptvCannelType=_ptvCannelType;
@property(readonly) _Bool signalInAdvance; // @synthesize signalInAdvance=_signalInAdvance;
@property(readonly) long long channelType; // @synthesize channelType=_channelType;
@property(readonly, retain) NSDictionary *configDic; // @synthesize configDic=_configDic;
@property(readonly, retain) NSString *sessionKeyBDH; // @synthesize sessionKeyBDH=_sessionKeyBDH;
@property(readonly, retain) NSData *videoUKey; // @synthesize videoUKey=_videoUKey;
- (void).cxx_destruct;
- (void)gainBDHCfg;
- (id)ipAddrArr:(long long)arg1;
- (void)refresh:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)saveConfigDic:(id)arg1;
- (void)clean;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface NFIData : NSObject
{
    int _requestIndex;
    float _currentRequestTime;
    NSData *_sonicwaveData;
    NSString *_sonicwaveSceneId;
    NSData *_voiceFingerprint;
    NSString *_voiceFingerprintType;
    NSString *_wifiJsonString;
    NSString *_beaconJsonString;
    NSString *_gpsJsonString;
    NSDictionary *_speechRecognizeResult;
    NSString *_watermark;
}

@property(retain, nonatomic) NSString *watermark; // @synthesize watermark=_watermark;
@property(retain, nonatomic) NSDictionary *speechRecognizeResult; // @synthesize speechRecognizeResult=_speechRecognizeResult;
@property(retain, nonatomic) NSString *gpsJsonString; // @synthesize gpsJsonString=_gpsJsonString;
@property(retain, nonatomic) NSString *beaconJsonString; // @synthesize beaconJsonString=_beaconJsonString;
@property(retain, nonatomic) NSString *wifiJsonString; // @synthesize wifiJsonString=_wifiJsonString;
@property(retain, nonatomic) NSString *voiceFingerprintType; // @synthesize voiceFingerprintType=_voiceFingerprintType;
@property(retain, nonatomic) NSData *voiceFingerprint; // @synthesize voiceFingerprint=_voiceFingerprint;
@property(retain, nonatomic) NSString *sonicwaveSceneId; // @synthesize sonicwaveSceneId=_sonicwaveSceneId;
@property(retain, nonatomic) NSData *sonicwaveData; // @synthesize sonicwaveData=_sonicwaveData;
@property(nonatomic) float currentRequestTime; // @synthesize currentRequestTime=_currentRequestTime;
@property(nonatomic) int requestIndex; // @synthesize requestIndex=_requestIndex;
- (void).cxx_destruct;

@end


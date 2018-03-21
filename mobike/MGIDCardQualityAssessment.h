//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LicenseProtocolDelegate-Protocol.h"

@class MGIDCard, NSString;

@interface MGIDCardQualityAssessment : NSObject <LicenseProtocolDelegate>
{
    _Bool _isIgnoreHighlight;
    _Bool _isIgnoreShadow;
    float _isIDCard;
    float _inBound;
    float _clear;
    MGIDCard *_detectManager;
}

+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (id)sendAuthRequest:(id)arg1;
+ (id)checkCachedLicense;
+ (id)takeLicenseFromNetworkWithUUID:(id)arg1;
+ (id)setLicense:(id)arg1;
+ (id)getContextWithUUID:(id)arg1;
+ (id)assessmentOfOptions:(id)arg1;
+ (id)getVersion;
@property(retain, nonatomic) MGIDCard *detectManager; // @synthesize detectManager=_detectManager;
@property(nonatomic) _Bool isIgnoreShadow; // @synthesize isIgnoreShadow=_isIgnoreShadow;
@property(nonatomic) _Bool isIgnoreHighlight; // @synthesize isIgnoreHighlight=_isIgnoreHighlight;
@property(nonatomic) float clear; // @synthesize clear=_clear;
@property(nonatomic) float inBound; // @synthesize inBound=_inBound;
@property(nonatomic) float isIDCard; // @synthesize isIDCard=_isIDCard;
- (void).cxx_destruct;
- (void)ignoreShadowOrLighthigh:(id)arg1;
- (id)getQualityWithImage:(id)arg1 side:(unsigned long long)arg2 ROI:(struct CGRect)arg3;
- (id)getQualityWithImage:(id)arg1 side:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


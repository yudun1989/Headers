//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OSEARCHBaseRequest.h"

@class NSDictionary, NSString;

@interface O2OSEARCHUserConsumptionRequest : O2OSEARCHBaseRequest
{
    int _start;
    NSString *_birdParams;
    NSString *_clientOs;
    NSString *_clientVersion;
    NSString *_templateType;
    NSString *_templateId;
    NSDictionary *_paramsMap;
}

+ (Class)paramsMapElementClass;
@property(retain, nonatomic) NSDictionary *paramsMap; // @synthesize paramsMap=_paramsMap;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientOs; // @synthesize clientOs=_clientOs;
@property(retain, nonatomic) NSString *birdParams; // @synthesize birdParams=_birdParams;
@property(nonatomic) int start; // @synthesize start=_start;
- (void).cxx_destruct;

@end


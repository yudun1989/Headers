//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NileStatsModelProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface NileStatsModel : NSObject <NileStatsModelProtocol>
{
    NSString *_componentDataId;
    NSString *_spmA;
    NSString *_spmB;
    NSString *_spmC;
    NSString *_spmD;
    NSString *_spm;
    NSString *_pageName;
    NSString *_clickName;
    NSString *_controlName;
    NSDictionary *_clickParam;
    NSString *_exposeName;
    NSDictionary *_exposeParam;
}

@property(copy, nonatomic) NSDictionary *exposeParam; // @synthesize exposeParam=_exposeParam;
@property(copy, nonatomic) NSString *exposeName; // @synthesize exposeName=_exposeName;
@property(retain, nonatomic) NSDictionary *clickParam; // @synthesize clickParam=_clickParam;
@property(copy, nonatomic) NSString *controlName; // @synthesize controlName=_controlName;
@property(copy, nonatomic) NSString *clickName; // @synthesize clickName=_clickName;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(copy, nonatomic) NSString *spmD; // @synthesize spmD=_spmD;
@property(copy, nonatomic) NSString *spmC; // @synthesize spmC=_spmC;
@property(copy, nonatomic) NSString *spmB; // @synthesize spmB=_spmB;
@property(copy, nonatomic) NSString *spmA; // @synthesize spmA=_spmA;
@property(copy, nonatomic) NSString *componentDataId; // @synthesize componentDataId=_componentDataId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


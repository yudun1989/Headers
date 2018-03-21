//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FalconService-Protocol.h"

@class FalconCfgDataManager, FalconModalDataManager, JsApiHandler4FalconRecogIdCard, NSString;

@interface FalconServiceImpl : NSObject <FalconService>
{
    FalconModalDataManager *_falconModalDataManager;
    FalconCfgDataManager *_falconCfgDataManager;
    JsApiHandler4FalconRecogIdCard *_falconRecogIdCardHandler;
}

@property(retain, nonatomic) JsApiHandler4FalconRecogIdCard *falconRecogIdCardHandler; // @synthesize falconRecogIdCardHandler=_falconRecogIdCardHandler;
@property(retain, nonatomic) FalconCfgDataManager *falconCfgDataManager; // @synthesize falconCfgDataManager=_falconCfgDataManager;
@property(retain, nonatomic) FalconModalDataManager *falconModalDataManager; // @synthesize falconModalDataManager=_falconModalDataManager;
- (void).cxx_destruct;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

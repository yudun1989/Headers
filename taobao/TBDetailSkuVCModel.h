//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBDetailSkuVCModel : TBJSONModel
{
    NSString *_itemId;
    NSString *_areaId;
    NSString *_skuId;
    unsigned long long _sourceType;
    NSString *_extraParams;
}

@property(retain, nonatomic) NSString *extraParams; // @synthesize extraParams=_extraParams;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(retain, nonatomic) NSString *areaId; // @synthesize areaId=_areaId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end


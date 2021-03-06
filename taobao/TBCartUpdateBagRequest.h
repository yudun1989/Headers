//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCartBaseRequest.h"

@class NSArray, NSDictionary;

@interface TBCartUpdateBagRequest : TBCartBaseRequest
{
    _Bool _isOpenFoldingBarRequest;
    unsigned long long _queryType;
    NSArray *_editComponents;
    NSDictionary *_promotionParams;
    long long _selectedComponentsCount;
}

@property(nonatomic) long long selectedComponentsCount; // @synthesize selectedComponentsCount=_selectedComponentsCount;
@property(nonatomic) _Bool isOpenFoldingBarRequest; // @synthesize isOpenFoldingBarRequest=_isOpenFoldingBarRequest;
@property(retain, nonatomic) NSDictionary *promotionParams; // @synthesize promotionParams=_promotionParams;
@property(retain, nonatomic) NSArray *editComponents; // @synthesize editComponents=_editComponents;
@property(nonatomic) unsigned long long queryType; // @synthesize queryType=_queryType;
- (void).cxx_destruct;
- (id)nextCommandId;
- (id)submitData;

@end


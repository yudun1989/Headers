//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol AliDetailSkuContractCity;

@interface AliDetailSkuContractArea : TBJSONModel
{
    NSString *_code;
    NSString *_name;
    NSArray<AliDetailSkuContractCity> *_city;
}

@property(retain, nonatomic) NSArray<AliDetailSkuContractCity> *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end


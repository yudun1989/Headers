//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber;

@interface AWEPOISearchLocationResponseModel : AWEBaseApiModel
{
    _Bool _hasMore;
    NSArray *_poiLocationArray;
    NSNumber *_page;
}

+ (id)poiLocationArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *page; // @synthesize page=_page;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSArray *poiLocationArray; // @synthesize poiLocationArray=_poiLocationArray;
- (void).cxx_destruct;

@end


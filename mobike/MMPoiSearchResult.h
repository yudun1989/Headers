//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMPoiSearchResult : NSObject
{
    NSArray *_pois;
}

+ (id)fromGaodePOIResult:(id)arg1;
+ (id)fromTencentPOIResult:(id)arg1;
@property(retain, nonatomic) NSArray *pois; // @synthesize pois=_pois;
- (void).cxx_destruct;

@end


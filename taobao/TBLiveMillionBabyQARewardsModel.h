//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBLiveMillionBabyQARewardsModel : NSObject
{
    NSString *_link;
    NSString *_logoUrl;
    NSString *_name;
    long long _shopId;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(nonatomic) long long shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
- (void).cxx_destruct;

@end


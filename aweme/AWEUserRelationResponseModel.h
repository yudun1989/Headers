//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@interface AWEUserRelationResponseModel : AWEBaseApiModel
{
    long long _followStatus;
}

+ (id)followStatusJSONTransformer;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel;

@interface AWEVideoLabel : AWEBaseApiModel
{
    long long _labelType;
    AWEURLModel *_labelUrl;
}

+ (id)labelUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEURLModel *labelUrl; // @synthesize labelUrl=_labelUrl;
@property(nonatomic) long long labelType; // @synthesize labelType=_labelType;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailRateKeyWordModel : TBJSONModel
{
    NSString *_attribute;
    NSString *_word;
    NSString *_count;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *word; // @synthesize word=_word;
@property(copy, nonatomic) NSString *attribute; // @synthesize attribute=_attribute;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBMeasureSizeChartMySizeItemModel : TBJSONModel
{
    NSString *_title;
    NSString *_key;
    NSString *_value;
    NSString *_tip;
    unsigned long long _max;
    unsigned long long _min;
    unsigned long long _maxLength;
}

@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) unsigned long long min; // @synthesize min=_min;
@property(nonatomic) unsigned long long max; // @synthesize max=_max;
@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end


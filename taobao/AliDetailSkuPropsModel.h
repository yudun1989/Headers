//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol AliDetailSkuPropsValuesModel;

@interface AliDetailSkuPropsModel : TBJSONModel
{
    NSString *_pid;
    NSArray<AliDetailSkuPropsValuesModel> *_values;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray<AliDetailSkuPropsValuesModel> *values; // @synthesize values=_values;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;

@end


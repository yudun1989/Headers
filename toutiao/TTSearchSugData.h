//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray;
@protocol TTSearchSugItem><Optional;

@interface TTSearchSugData : JSONModel
{
    NSArray<TTSearchSugItem><Optional> *_data;
}

@property(retain, nonatomic) NSArray<TTSearchSugItem><Optional> *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end


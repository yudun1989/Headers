//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface GrowingHeatMapModelItem : NSObject
{
    double _percent;
    long long _count;
    NSString *_content;
    NSString *_xpath;
    NSNumber *_index;
    double _brightLevel;
}

@property(nonatomic) double brightLevel; // @synthesize brightLevel=_brightLevel;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *xpath; // @synthesize xpath=_xpath;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) double percent; // @synthesize percent=_percent;
- (void).cxx_destruct;
- (id)description;

@end

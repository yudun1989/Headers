//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MBKTaxiOrderConfig : NSObject
{
    long long _thanksFeeMax;
    NSString *_ruleCopy;
    NSString *_ruleURL;
    long long _bookTimeScale;
    NSArray *_thanksFees;
    long long _bookTimeRange;
    long long _thanksFeeStep;
    NSString *_narration;
    NSArray *_tags;
}

@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *narration; // @synthesize narration=_narration;
@property(nonatomic) long long thanksFeeStep; // @synthesize thanksFeeStep=_thanksFeeStep;
@property(nonatomic) long long bookTimeRange; // @synthesize bookTimeRange=_bookTimeRange;
@property(retain, nonatomic) NSArray *thanksFees; // @synthesize thanksFees=_thanksFees;
@property(nonatomic) long long bookTimeScale; // @synthesize bookTimeScale=_bookTimeScale;
@property(copy, nonatomic) NSString *ruleURL; // @synthesize ruleURL=_ruleURL;
@property(copy, nonatomic) NSString *ruleCopy; // @synthesize ruleCopy=_ruleCopy;
@property(nonatomic) long long thanksFeeMax; // @synthesize thanksFeeMax=_thanksFeeMax;
- (void).cxx_destruct;

@end


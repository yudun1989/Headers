//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ACDSSyncConsumerCost : NSObject
{
    NSString *_dsName;
    long long _operate;
    double _startTime;
    double _processInter;
    double _processTime;
    double _totalTime;
}

+ (id)costOf:(id)arg1 op:(long long)arg2;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double processTime; // @synthesize processTime=_processTime;
@property(nonatomic) double processInter; // @synthesize processInter=_processInter;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long operate; // @synthesize operate=_operate;
@property(copy, nonatomic) NSString *dsName; // @synthesize dsName=_dsName;
- (void).cxx_destruct;

@end


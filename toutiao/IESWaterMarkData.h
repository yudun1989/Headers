//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IESMediaTimeRange, NSArray;

@interface IESWaterMarkData : NSObject
{
    NSArray *_waterMark;
    long long _refreshInterval;
    IESMediaTimeRange *_showTimeRange;
    struct CGPoint _point;
    struct CGSize _targetVideoSize;
}

@property(retain, nonatomic) IESMediaTimeRange *showTimeRange; // @synthesize showTimeRange=_showTimeRange;
@property(nonatomic) long long refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) struct CGSize targetVideoSize; // @synthesize targetVideoSize=_targetVideoSize;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(retain, nonatomic) NSArray *waterMark; // @synthesize waterMark=_waterMark;
- (void).cxx_destruct;
- (id)init;

@end


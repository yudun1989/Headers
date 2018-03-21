//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol QZLVBadNetworkStrategyDelegate;

@interface QZLVBadNetworkStrategy : NSObject
{
    long long _badCount;
    long long _recivedCount;
    _Bool _stop;
    id <QZLVBadNetworkStrategyDelegate> _delegate;
    long long _countTotal;
    double _percent;
    double _badThreshold;
}

@property(nonatomic) double badThreshold; // @synthesize badThreshold=_badThreshold;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) long long countTotal; // @synthesize countTotal=_countTotal;
@property(nonatomic) __weak id <QZLVBadNetworkStrategyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isFullfill;
- (void)udtLossRate:(double)arg1 netDelay:(long long)arg2;
- (void)resume;
- (void)stop;
- (_Bool)isStop;
- (id)init;
- (void)dealloc;

@end

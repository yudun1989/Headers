//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMapNaviRouteExtendSegment : NSObject
{
    _Bool _isArriveWayPoint;
    long long _iconType;
    NSString *_detailedDescription;
}

@property(nonatomic) _Bool isArriveWayPoint; // @synthesize isArriveWayPoint=_isArriveWayPoint;
@property(retain, nonatomic) NSString *detailedDescription; // @synthesize detailedDescription=_detailedDescription;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
- (void).cxx_destruct;
- (id)description;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKJsonModelObject-Protocol.h"

@class NSDictionary, NSString;

@interface MBKRidingInfoModel : NSObject <MBKJsonModelObject>
{
    _Bool _active;
    NSString *_bikeid;
    long long _biketype;
    NSString *_cost;
    NSString *_duration;
    NSString *_imgpath;
    NSString *_kcal;
    double _latitude;
    double _longitude;
    NSString *_orderid;
    long long _redpackRidingtime;
    long long _redMoney;
    long long _redBikeFreetime;
    long long _ride;
    long long _sendcond;
    NSDictionary *_preciousUserPrizeVo;
    NSString *_starttime;
    NSDictionary *_object;
}

@property(retain, nonatomic) NSDictionary *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *starttime; // @synthesize starttime=_starttime;
@property(retain, nonatomic) NSDictionary *preciousUserPrizeVo; // @synthesize preciousUserPrizeVo=_preciousUserPrizeVo;
@property(nonatomic) long long sendcond; // @synthesize sendcond=_sendcond;
@property(nonatomic) long long ride; // @synthesize ride=_ride;
@property(nonatomic) long long redBikeFreetime; // @synthesize redBikeFreetime=_redBikeFreetime;
@property(nonatomic) long long redMoney; // @synthesize redMoney=_redMoney;
@property(nonatomic) long long redpackRidingtime; // @synthesize redpackRidingtime=_redpackRidingtime;
@property(copy, nonatomic) NSString *orderid; // @synthesize orderid=_orderid;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *kcal; // @synthesize kcal=_kcal;
@property(copy, nonatomic) NSString *imgpath; // @synthesize imgpath=_imgpath;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *cost; // @synthesize cost=_cost;
@property(nonatomic) long long biketype; // @synthesize biketype=_biketype;
@property(copy, nonatomic) NSString *bikeid; // @synthesize bikeid=_bikeid;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


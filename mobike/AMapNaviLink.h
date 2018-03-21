//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface AMapNaviLink : NSObject <NSCopying>
{
    _Bool _isHadTrafficLights;
    NSArray *_coordinates;
    long long _length;
    long long _time;
    NSString *_roadName;
    long long _roadClass;
    long long _formWay;
    long long _trafficStatus;
    unsigned long long _topologyID;
}

@property(nonatomic) unsigned long long topologyID; // @synthesize topologyID=_topologyID;
@property(nonatomic) long long trafficStatus; // @synthesize trafficStatus=_trafficStatus;
@property(nonatomic) _Bool isHadTrafficLights; // @synthesize isHadTrafficLights=_isHadTrafficLights;
@property(nonatomic) long long formWay; // @synthesize formWay=_formWay;
@property(nonatomic) long long roadClass; // @synthesize roadClass=_roadClass;
@property(retain, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSArray *coordinates; // @synthesize coordinates=_coordinates;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end


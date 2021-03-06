//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface ARMapPOIInfo : NSObject
{
    unsigned int _awardRange;
    unsigned long long _poiID;
    long long _lat;
    long long _lon;
    NSArray *_taskIDs;
    NSArray *_tasks;
}

@property(retain, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSArray *taskIDs; // @synthesize taskIDs=_taskIDs;
@property(nonatomic) long long lon; // @synthesize lon=_lon;
@property(nonatomic) long long lat; // @synthesize lat=_lat;
@property(nonatomic) unsigned long long poiID; // @synthesize poiID=_poiID;
@property(nonatomic) unsigned int awardRange; // @synthesize awardRange=_awardRange;
- (void).cxx_destruct;
- (id)description;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SensorData : NSObject
{
    float _light;
    NSMutableArray *_acceleration;
    NSMutableArray *_gyroscope;
}

@property(retain, nonatomic) NSMutableArray *gyroscope; // @synthesize gyroscope=_gyroscope;
@property(retain, nonatomic) NSMutableArray *acceleration; // @synthesize acceleration=_acceleration;
@property(nonatomic) float light; // @synthesize light=_light;
- (void).cxx_destruct;

@end


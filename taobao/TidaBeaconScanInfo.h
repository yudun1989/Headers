//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TidaBeaconScanInfo : NSObject
{
    NSString *_major;
    NSString *_eacon;
    NSString *_uuid;
    NSString *_accuracy;
    NSString *_rssi;
    NSString *_proximity;
    NSString *_heading;
}

@property(copy, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(copy, nonatomic) NSString *proximity; // @synthesize proximity=_proximity;
@property(copy, nonatomic) NSString *rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSString *accuracy; // @synthesize accuracy=_accuracy;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *eacon; // @synthesize eacon=_eacon;
@property(copy, nonatomic) NSString *major; // @synthesize major=_major;
- (void).cxx_destruct;

@end


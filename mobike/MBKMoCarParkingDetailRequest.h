//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKMoCarParkingDetailRequest : MBKMobikeRequest
{
    long long _parkingId;
    NSString *_citycode;
    NSString *_country;
}

@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(nonatomic) long long parkingId; // @synthesize parkingId=_parkingId;
- (void).cxx_destruct;
- (id)init;

@end


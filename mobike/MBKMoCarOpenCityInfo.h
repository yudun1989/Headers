//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKMoCarOpenCityInfo : NSObject
{
    double _centreLat;
    double _centreLng;
    NSString *_cityCode;
    NSString *_cityName;
}

@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(nonatomic) double centreLng; // @synthesize centreLng=_centreLng;
@property(nonatomic) double centreLat; // @synthesize centreLat=_centreLat;
- (void).cxx_destruct;

@end


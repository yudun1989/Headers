//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GeoInfo, NSString;

@interface LocationInfo : NSObject
{
    NSString *_longitude;
    NSString *_latitude;
    GeoInfo *_geo;
}

@property(retain, nonatomic) GeoInfo *geo; // @synthesize geo=_geo;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FRGCGeoDetailItem : NSObject
{
    NSString *_cityCode;
    NSString *_cityName;
    NSString *_centerCoordinate;
}

@property(copy, nonatomic) NSString *centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (void)setupWithDictionary:(id)arg1;

@end


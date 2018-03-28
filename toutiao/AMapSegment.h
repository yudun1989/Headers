//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, AMapWalking, NSArray, NSString;

@interface AMapSegment : AMapSearchObject
{
    AMapWalking *_walking;
    NSArray *_buslines;
    NSString *_enterName;
    AMapGeoPoint *_enterLocation;
    NSString *_exitName;
    AMapGeoPoint *_exitLocation;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(copy, nonatomic) AMapGeoPoint *exitLocation; // @synthesize exitLocation=_exitLocation;
@property(copy, nonatomic) NSString *exitName; // @synthesize exitName=_exitName;
@property(copy, nonatomic) AMapGeoPoint *enterLocation; // @synthesize enterLocation=_enterLocation;
@property(copy, nonatomic) NSString *enterName; // @synthesize enterName=_enterName;
@property(retain, nonatomic) NSArray *buslines; // @synthesize buslines=_buslines;
@property(retain, nonatomic) AMapWalking *walking; // @synthesize walking=_walking;
- (void).cxx_destruct;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;

@end


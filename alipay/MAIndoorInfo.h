//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MAIndoorInfo : NSObject
{
    int _activeFloorInfoIndex;
    int _activeFloorIndex;
    int _numberOfFloor;
    int _numberOfParkFloor;
    NSString *_cnName;
    NSString *_enName;
    NSArray *_floorInfo;
    NSString *_poiID;
    NSString *_buildingType;
}

@property(nonatomic) int numberOfParkFloor; // @synthesize numberOfParkFloor=_numberOfParkFloor;
@property(nonatomic) int numberOfFloor; // @synthesize numberOfFloor=_numberOfFloor;
@property(nonatomic) int activeFloorIndex; // @synthesize activeFloorIndex=_activeFloorIndex;
@property(nonatomic) int activeFloorInfoIndex; // @synthesize activeFloorInfoIndex=_activeFloorInfoIndex;
@property(retain, nonatomic) NSString *buildingType; // @synthesize buildingType=_buildingType;
@property(retain, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(retain, nonatomic) NSArray *floorInfo; // @synthesize floorInfo=_floorInfo;
@property(retain, nonatomic) NSString *enName; // @synthesize enName=_enName;
@property(retain, nonatomic) NSString *cnName; // @synthesize cnName=_cnName;
- (void).cxx_destruct;
- (id)init;

@end


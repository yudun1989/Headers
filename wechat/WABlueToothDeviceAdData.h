//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface WABlueToothDeviceAdData : MMObject
{
    NSString *_localName;
    NSData *_manufacturerData;
    NSArray *_serviceUUIDs;
    NSDictionary *_serviceData;
}

@property(retain, nonatomic) NSDictionary *serviceData; // @synthesize serviceData=_serviceData;
@property(retain, nonatomic) NSArray *serviceUUIDs; // @synthesize serviceUUIDs=_serviceUUIDs;
@property(retain, nonatomic) NSData *manufacturerData; // @synthesize manufacturerData=_manufacturerData;
@property(copy, nonatomic) NSString *localName; // @synthesize localName=_localName;
- (void).cxx_destruct;

@end


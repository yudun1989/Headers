//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSData;

@interface HardDeviceStatusSubRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) NSData *deviceType; // @dynamic deviceType;
@property(nonatomic) unsigned int opType; // @dynamic opType;

@end


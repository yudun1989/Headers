//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTDouble, NSString;

@interface KABAOPRODAvailableShopInfo : NSObject
{
    NSString *_shopName;
    NSString *_phone;
    NSString *_address;
    DTDouble *_longitude;
    DTDouble *_latitude;
    NSString *_distance;
}

@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) DTDouble *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) DTDouble *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
- (void).cxx_destruct;

@end


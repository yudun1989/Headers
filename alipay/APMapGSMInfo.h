//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@interface APMapGSMInfo : NSObject <NSCoding>
{
    int _mcc;
    int _mnc;
    int _lac;
    int _cid;
    int _rssi;
}

@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int cid; // @synthesize cid=_cid;
@property(nonatomic) int lac; // @synthesize lac=_lac;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


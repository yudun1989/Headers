//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LCLoginDeviceInfo : NSObject
{
    _Bool _online;
    long long _appID;
    unsigned long long _clientType;
    NSString *_name;
}

+ (id)deviceNameFromClientType:(unsigned long long)arg1;
+ (id)deviceInfoWithClientType:(long long)arg1 appID:(long long)arg2 online:(_Bool)arg3;
@property(nonatomic) _Bool online; // @synthesize online=_online;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long clientType; // @synthesize clientType=_clientType;
@property(nonatomic) long long appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (id)description;

@end


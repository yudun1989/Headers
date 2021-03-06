//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GXReachability;

@interface GTNetworkState : NSObject
{
    GXReachability *_internetReachability;
    long long _internetNetworkStatus;
}

+ (id)fetchCurrentConnectWifiInfo;
+ (id)standardFormateAddress:(id)arg1;
+ (id)fetchSSIDInfo;
+ (id)sharedInstance;
@property(nonatomic) long long internetNetworkStatus; // @synthesize internetNetworkStatus=_internetNetworkStatus;
@property(retain, nonatomic) GXReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
- (void).cxx_destruct;
- (_Bool)gtp_isNoNetwork;
- (long long)currentNetworkStatus;
- (void)updateInterfaceWithReachability:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)gtp_stop;
- (void)gtp_start;
- (id)init;

@end


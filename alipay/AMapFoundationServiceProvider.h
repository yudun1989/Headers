//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AMapFoundationServiceProvider : NSObject
{
    NSString *_authServerAddress;
    NSString *_statisticsServerAddress;
    NSString *_manifestServerAddress;
    NSString *_logsServerAddress;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *logsServerAddress; // @synthesize logsServerAddress=_logsServerAddress;
@property(copy, nonatomic) NSString *manifestServerAddress; // @synthesize manifestServerAddress=_manifestServerAddress;
@property(copy, nonatomic) NSString *statisticsServerAddress; // @synthesize statisticsServerAddress=_statisticsServerAddress;
@property(copy, nonatomic) NSString *authServerAddress; // @synthesize authServerAddress=_authServerAddress;
- (void).cxx_destruct;
- (id)init;

@end


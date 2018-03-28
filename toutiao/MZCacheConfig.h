//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface MZCacheConfig : NSObject
{
    NSNumber *configVersion;
    NSString *signVersion;
    NSNumber *cacheNumbers;
    NSNumber *configExpiration;
    NSNumber *retryTimes;
    NSNumber *locationExpiration;
    NSNumber *locationServiceTimeout;
    NSNumber *cacheExpiration;
    NSNumber *_configUpdatedTimestamp;
}

@property(retain, nonatomic) NSNumber *configUpdatedTimestamp; // @synthesize configUpdatedTimestamp=_configUpdatedTimestamp;
@property(retain, nonatomic) NSNumber *cacheExpiration; // @synthesize cacheExpiration;
@property(retain, nonatomic) NSNumber *locationServiceTimeout; // @synthesize locationServiceTimeout;
@property(retain, nonatomic) NSNumber *locationExpiration; // @synthesize locationExpiration;
@property(retain, nonatomic) NSNumber *retryTimes; // @synthesize retryTimes;
@property(retain, nonatomic) NSNumber *configExpiration; // @synthesize configExpiration;
@property(retain, nonatomic) NSNumber *cacheNumbers; // @synthesize cacheNumbers;
@property(retain, nonatomic) NSString *signVersion; // @synthesize signVersion;
@property(retain, nonatomic) NSNumber *configVersion; // @synthesize configVersion;
- (void).cxx_destruct;
- (_Bool)validate;

@end


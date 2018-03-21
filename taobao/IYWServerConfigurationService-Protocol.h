//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol IYWServerConfigurationService <NSObject>
- (void)addConfigurationDidUpdatedBlock:(void (^)(NSDictionary *))arg1 forKey:(NSString *)arg2 ofPriority:(unsigned long long)arg3;
- (void)initConfigurationFileSignInfo;
- (void)removeConfigurationFileName:(NSString *)arg1;
- (void)addConfigurationFileName:(NSString *)arg1;
- (NSArray *)fileNameList;
- (id)valueInConfigurationForKey:(NSString *)arg1 fromFile:(NSString *)arg2;
- (id)valueInConfigurationForKey:(NSString *)arg1;
- (NSDictionary *)configurationInfo;
@end


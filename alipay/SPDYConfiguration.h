//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary;

@interface SPDYConfiguration : NSObject <NSCopying>
{
    _Bool _enableSettingsMinorVersion;
    unsigned long long _sessionReceiveWindow;
    unsigned long long _streamReceiveWindow;
    unsigned long long _headerCompressionLevel;
    NSDictionary *_tlsSetting;
    double _heartbeatInterval;
    double _connectionTimeout;
}

+ (id)defaultConfiguration;
+ (void)initialize;
@property double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property double heartbeatInterval; // @synthesize heartbeatInterval=_heartbeatInterval;
@property(retain) NSDictionary *tlsSetting; // @synthesize tlsSetting=_tlsSetting;
@property _Bool enableSettingsMinorVersion; // @synthesize enableSettingsMinorVersion=_enableSettingsMinorVersion;
@property unsigned long long headerCompressionLevel; // @synthesize headerCompressionLevel=_headerCompressionLevel;
@property unsigned long long streamReceiveWindow; // @synthesize streamReceiveWindow=_streamReceiveWindow;
@property unsigned long long sessionReceiveWindow; // @synthesize sessionReceiveWindow=_sessionReceiveWindow;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


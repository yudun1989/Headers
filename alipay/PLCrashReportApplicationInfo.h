//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PLCrashReportApplicationInfo : NSObject
{
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_applicationMarketingVersion;
}

@property(readonly, nonatomic) NSString *applicationMarketingVersion; // @synthesize applicationMarketingVersion=_applicationMarketingVersion;
@property(readonly, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(readonly, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void)dealloc;
- (id)initWithApplicationIdentifier:(id)arg1 applicationVersion:(id)arg2 applicationMarketingVersion:(id)arg3;

@end


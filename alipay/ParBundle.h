//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface ParBundle : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBundleVersion;
    _Bool _hasMinorVersion;
    _Bool _hasBuildVersion;
    _Bool _hasBundleType;
    _Bool _hasAppId;
    _Bool _hasAppVersion;
    int _bundleVersion;
    int _minorVersion;
    int _bundleType;
    long long _buildVersion;
    NSMutableArray *_bundleConfig;
    NSString *_appId;
    NSString *_appVersion;
    NSMutableArray *_contentFiles;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *contentFiles; // @synthesize contentFiles=_contentFiles;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSMutableArray *bundleConfig; // @synthesize bundleConfig=_bundleConfig;
@property(nonatomic) int bundleType; // @synthesize bundleType=_bundleType;
@property(nonatomic) long long buildVersion; // @synthesize buildVersion=_buildVersion;
@property(nonatomic) int minorVersion; // @synthesize minorVersion=_minorVersion;
@property(nonatomic) int bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly) _Bool hasAppVersion; // @synthesize hasAppVersion=_hasAppVersion;
@property(readonly) _Bool hasAppId; // @synthesize hasAppId=_hasAppId;
@property(readonly) _Bool hasBundleType; // @synthesize hasBundleType=_hasBundleType;
@property(readonly) _Bool hasBuildVersion; // @synthesize hasBuildVersion=_hasBuildVersion;
@property(readonly) _Bool hasMinorVersion; // @synthesize hasMinorVersion=_hasMinorVersion;
@property(readonly) _Bool hasBundleVersion; // @synthesize hasBundleVersion=_hasBundleVersion;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addContentFiles:(id)arg1;
- (void)setContentFilesArray:(id)arg1;
- (void)addBundleConfig:(id)arg1;
- (void)setBundleConfigArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


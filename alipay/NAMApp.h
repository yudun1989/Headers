//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface NAMApp : NSObject <NSCopying>
{
    _Bool _isOnline;
    int _local_report;
    int _downType;
    int _appType;
    int _appChannel;
    NSString *_nbl_id;
    NSString *_app_id;
    NSString *_name;
    NSString *_version;
    NSString *_desc;
    NSString *_package_url;
    NSString *_icon_url;
    NSString *_main_url;
    NSString *_vhost;
    NSString *_fallback_host;
    NSString *_patch;
    NSString *_third_platform;
    NSString *_scene;
    NSString *_release_type;
    NSString *_api_permission;
    NSString *_package_nick;
    NSArray *_sub_url;
    NSDictionary *_extend_info;
    long long _size;
    NSString *_patchMd5;
    NSString *_packageUrlMd5;
}

@property(retain, nonatomic) NSString *packageUrlMd5; // @synthesize packageUrlMd5=_packageUrlMd5;
@property(retain, nonatomic) NSString *patchMd5; // @synthesize patchMd5=_patchMd5;
@property(nonatomic) int appChannel; // @synthesize appChannel=_appChannel;
@property(nonatomic) int appType; // @synthesize appType=_appType;
@property(nonatomic) int downType; // @synthesize downType=_downType;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) int local_report; // @synthesize local_report=_local_report;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(copy, nonatomic) NSDictionary *extend_info; // @synthesize extend_info=_extend_info;
@property(copy, nonatomic) NSArray *sub_url; // @synthesize sub_url=_sub_url;
@property(copy, nonatomic) NSString *package_nick; // @synthesize package_nick=_package_nick;
@property(copy, nonatomic) NSString *api_permission; // @synthesize api_permission=_api_permission;
@property(copy, nonatomic) NSString *release_type; // @synthesize release_type=_release_type;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *third_platform; // @synthesize third_platform=_third_platform;
@property(copy, nonatomic) NSString *patch; // @synthesize patch=_patch;
@property(copy, nonatomic) NSString *fallback_host; // @synthesize fallback_host=_fallback_host;
@property(copy, nonatomic) NSString *vhost; // @synthesize vhost=_vhost;
@property(copy, nonatomic) NSString *main_url; // @synthesize main_url=_main_url;
@property(copy, nonatomic) NSString *icon_url; // @synthesize icon_url=_icon_url;
@property(copy, nonatomic) NSString *package_url; // @synthesize package_url=_package_url;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;
@property(copy, nonatomic) NSString *nbl_id; // @synthesize nbl_id=_nbl_id;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasResource;
- (id)apiPermission;
- (unsigned long long)sceneType;
- (id)thirdPlatformInfo;
- (void)removeIncrementalResource;
- (_Bool)needDownload;
- (_Bool)isInstalled;
- (_Bool)isIncremental;
- (unsigned long long)appStatus;
- (id)downloadUrl;
- (id)downloadPath;
- (id)unzipPath;
- (id)internalPath;
- (id)amrPath;
- (id)tarPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (id)initWithDict:(id)arg1;
- (id)internalPath;
@property(nonatomic) _Bool strictlimiting; // @dynamic strictlimiting;
@property(nonatomic) _Bool limiting; // @dynamic limiting;
@property(nonatomic) double lastRefreshTime; // @dynamic lastRefreshTime;
- (void)refresh:(double)arg1 limited:(_Bool)arg2 strict:(_Bool)arg3;
- (_Bool)preReqExpired;
- (_Bool)expired;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NlsRequestProto : NSObject
{
    NSString *_app_id;
    NSString *_app_user_id;
    NSString *_app_version;
    NSString *_device_type;
    NSString *_device_id;
    NSString *_device_system_locale;
    NSString *_device_timezone;
}

@property(copy, nonatomic) NSString *device_timezone; // @synthesize device_timezone=_device_timezone;
@property(copy, nonatomic) NSString *device_system_locale; // @synthesize device_system_locale=_device_system_locale;
@property(copy, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
@property(copy, nonatomic) NSString *device_type; // @synthesize device_type=_device_type;
@property(copy, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
@property(copy, nonatomic) NSString *app_user_id; // @synthesize app_user_id=_app_user_id;
@property(copy, nonatomic) NSString *app_id; // @synthesize app_id=_app_id;
- (void).cxx_destruct;
- (id)init;

@end


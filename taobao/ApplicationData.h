//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ApplicationData : NSObject
{
    NSString *_application_id;
    NSString *_user_id;
    NSString *_version;
    NSString *_service_id;
    NSString *_service_version;
}

@property(copy, nonatomic) NSString *service_version; // @synthesize service_version=_service_version;
@property(copy, nonatomic) NSString *service_id; // @synthesize service_id=_service_id;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(copy, nonatomic) NSString *application_id; // @synthesize application_id=_application_id;
- (void).cxx_destruct;
- (id)init;

@end


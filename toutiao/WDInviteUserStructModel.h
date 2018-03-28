//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface WDInviteUserStructModel : WDBaseModel
{
    NSString<Optional> *_user_id;
    NSString<Optional> *_uname;
    NSString<Optional> *_user_intro;
    NSString<Optional> *_avatar_url;
    NSNumber<Optional> *_is_verify;
    NSString<Optional> *_schema;
    long long _invite_status;
    NSString<Optional> *_user_auth_info;
    NSString<Optional> *_user_decoration;
}

@property(retain, nonatomic) NSString<Optional> *user_decoration; // @synthesize user_decoration=_user_decoration;
@property(retain, nonatomic) NSString<Optional> *user_auth_info; // @synthesize user_auth_info=_user_auth_info;
@property(nonatomic) long long invite_status; // @synthesize invite_status=_invite_status;
@property(retain, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSNumber<Optional> *is_verify; // @synthesize is_verify=_is_verify;
@property(retain, nonatomic) NSString<Optional> *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(retain, nonatomic) NSString<Optional> *user_intro; // @synthesize user_intro=_user_intro;
@property(retain, nonatomic) NSString<Optional> *uname; // @synthesize uname=_uname;
@property(retain, nonatomic) NSString<Optional> *user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface TTVisitorItemModel : TTResponseModel
{
    _Bool _is_following;
    _Bool _is_followed;
    _Bool _ban_comment;
    unsigned long long _status;
    unsigned long long _type;
    unsigned long long _gender;
    NSString<Optional> *_user_id;
    NSString<Optional> *_media_id;
    NSString<Optional> *_screen_name;
    NSString<Optional> *_verified_content;
    NSString<Optional> *_avatar_url;
    NSString<Optional> *_userDescription;
    NSString<Optional> *_userAuthInfo;
    NSString<Optional> *_userDecoration;
    NSNumber<Optional> *_create_time;
    NSNumber<Optional> *_last_visit_time;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSNumber<Optional> *last_visit_time; // @synthesize last_visit_time=_last_visit_time;
@property(retain, nonatomic) NSNumber<Optional> *create_time; // @synthesize create_time=_create_time;
@property(nonatomic) _Bool ban_comment; // @synthesize ban_comment=_ban_comment;
@property(nonatomic) _Bool is_followed; // @synthesize is_followed=_is_followed;
@property(nonatomic) _Bool is_following; // @synthesize is_following=_is_following;
@property(copy, nonatomic) NSString<Optional> *userDecoration; // @synthesize userDecoration=_userDecoration;
@property(copy, nonatomic) NSString<Optional> *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
@property(copy, nonatomic) NSString<Optional> *userDescription; // @synthesize userDescription=_userDescription;
@property(copy, nonatomic) NSString<Optional> *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(copy, nonatomic) NSString<Optional> *verified_content; // @synthesize verified_content=_verified_content;
@property(copy, nonatomic) NSString<Optional> *screen_name; // @synthesize screen_name=_screen_name;
@property(copy, nonatomic) NSString<Optional> *media_id; // @synthesize media_id=_media_id;
@property(copy, nonatomic) NSString<Optional> *user_id; // @synthesize user_id=_user_id;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)init;

@end


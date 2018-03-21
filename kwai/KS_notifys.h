//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KS_comment, KS_feed, KS_params, NSArray, NSDate, NSMutableAttributedString, NSNumber, NSString;

@interface KS_notifys : NSObject
{
    _Bool _isAccept;
    NSNumber *_id;
    NSNumber *_from_id;
    NSString *_headurl;
    NSArray *_headurls;
    KS_params *_params;
    KS_feed *_photo;
    NSNumber *_photo_id;
    NSNumber *_status;
    NSNumber *_timestamp;
    NSDate *_date;
    NSString *_timeString;
    NSNumber *_to_id;
    NSString *_mobile_hash;
    KS_comment *_comment;
    NSNumber *_rootCommentId;
    NSNumber *_type;
    NSNumber *_follow_request_status;
    NSString *_user_sex;
    NSMutableAttributedString *_richContent;
    NSNumber *_ksCoin;
}

@property(retain, nonatomic) NSNumber *ksCoin; // @synthesize ksCoin=_ksCoin;
@property(nonatomic) _Bool isAccept; // @synthesize isAccept=_isAccept;
@property(retain, nonatomic) NSMutableAttributedString *richContent; // @synthesize richContent=_richContent;
@property(retain, nonatomic) NSString *user_sex; // @synthesize user_sex=_user_sex;
@property(retain, nonatomic) NSNumber *follow_request_status; // @synthesize follow_request_status=_follow_request_status;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *rootCommentId; // @synthesize rootCommentId=_rootCommentId;
@property(retain, nonatomic) KS_comment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *mobile_hash; // @synthesize mobile_hash=_mobile_hash;
@property(retain, nonatomic) NSNumber *to_id; // @synthesize to_id=_to_id;
@property(retain, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *photo_id; // @synthesize photo_id=_photo_id;
@property(retain, nonatomic) KS_feed *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) KS_params *params; // @synthesize params=_params;
@property(retain, nonatomic) NSArray *headurls; // @synthesize headurls=_headurls;
@property(retain, nonatomic) NSString *headurl; // @synthesize headurl=_headurl;
@property(retain, nonatomic) NSNumber *from_id; // @synthesize from_id=_from_id;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)richUserNameWithUserId:(id)arg1 userName:(id)arg2 userHeader:(id)arg3;
- (id)classWithUserId:(long long)arg1;
- (id)notifier;
- (id)ks_fromName;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSString;

@interface FriendsVerifyMsgNewTypeCloneInfoModel : NSObject <NSCoding>
{
    _Bool _has_read;
    _Bool _has_reply;
    unsigned int _show_in_aio;
    unsigned int _src_gender;
    unsigned int _receive_time;
    unsigned long long _uin;
    NSString *_remark;
    unsigned long long _to_uin;
    NSString *_to_nick;
}

@property(nonatomic) unsigned int receive_time; // @synthesize receive_time=_receive_time;
@property(nonatomic) _Bool has_reply; // @synthesize has_reply=_has_reply;
@property(nonatomic) _Bool has_read; // @synthesize has_read=_has_read;
@property(nonatomic) unsigned int src_gender; // @synthesize src_gender=_src_gender;
@property(retain, nonatomic) NSString *to_nick; // @synthesize to_nick=_to_nick;
@property(nonatomic) unsigned long long to_uin; // @synthesize to_uin=_to_uin;
@property(nonatomic) unsigned int show_in_aio; // @synthesize show_in_aio=_show_in_aio;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


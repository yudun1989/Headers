//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>
#import <QQMainProject/NSCopying-Protocol.h>

@class NSString;

@interface ValueAddedServiceNumMsgBusi : NSObject <NSCoding, NSCopying>
{
    unsigned long long _msgid;
    unsigned long long _appid;
    NSString *_path;
    NSString *_missionid;
    long long _expire_time;
    NSString *_content;
    NSString *_url;
    NSString *_ext;
    NSString *_ret;
    long long _modify_ts;
    int _xo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)commonInit;
- (id)init;
- (id)initWithMsgId:(unsigned long long)arg1;

// Remaining properties
@property(nonatomic) unsigned long long appid; // @dynamic appid;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) long long expire_time; // @dynamic expire_time;
@property(retain, nonatomic) NSString *ext; // @dynamic ext;
@property(retain, nonatomic) NSString *missionid; // @dynamic missionid;
@property(nonatomic) long long modify_ts; // @dynamic modify_ts;
@property(nonatomic) unsigned long long msgid; // @dynamic msgid;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSString *ret; // @dynamic ret;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end


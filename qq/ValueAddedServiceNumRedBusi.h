//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>
#import <QQMainProject/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ValueAddedServiceNumRedBusi : NSObject <NSCoding, NSCopying>
{
    long long _appid;
    long long _new_flag;
    long long _modify_ts;
    NSMutableArray *_num_red_paths;
    long long _appset;
    int _xo;
}

- (void).cxx_destruct;
- (id)getNumRedPathByMsgid:(unsigned long long)arg1;
- (void)updateNumRedPath:(id)arg1;
- (void)checkMemberPathsIfExpire;
- (void)resetModifyTime;
- (id)getFirstLevelAppId:(id)arg1;
- (int)displayNumCount;
- (_Bool)isNewFlagByPath:(id)arg1;
- (_Bool)isNewFlag;
- (int)getStatusNumRedPathCount:(int)arg1 byPath:(id)arg2;
- (id)displayInfosByPath:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)commonInit;
- (id)init;
- (id)initWithAppId:(long long)arg1 appSet:(long long)arg2;

// Remaining properties
@property(nonatomic) long long appid; // @dynamic appid;
@property(nonatomic) long long appset; // @dynamic appset;
@property(nonatomic) long long modify_ts; // @dynamic modify_ts;
@property(nonatomic) long long new_flag; // @dynamic new_flag;
@property(retain, nonatomic) NSMutableArray *num_red_paths; // @dynamic num_red_paths;

@end


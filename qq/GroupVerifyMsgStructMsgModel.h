//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class GroupVerifyMsgModel;

@interface GroupVerifyMsgStructMsgModel : QQModel
{
    unsigned long long _memoryId;
    unsigned int _version;
    unsigned int _msg_type;
    unsigned long long _msg_seq;
    unsigned long long _msg_time;
    unsigned long long _req_uin;
    GroupVerifyMsgModel *_msg;
    int _xo;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) GroupVerifyMsgModel *msg; // @dynamic msg;
@property(nonatomic) unsigned long long msg_seq; // @dynamic msg_seq;
@property(nonatomic) unsigned long long msg_time; // @dynamic msg_time;
@property(nonatomic) unsigned int msg_type; // @dynamic msg_type;
@property(nonatomic) unsigned long long req_uin; // @dynamic req_uin;
@property(nonatomic) unsigned int version; // @dynamic version;

@end


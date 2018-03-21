//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class GroupVerifyMsgGroupInfoModel, NSMutableArray, NSString;

@interface GroupVerifyMsgModel : QQModel
{
    unsigned int _sub_type;
    NSString *_msg_title;
    NSString *_msg_describe;
    NSString *_msg_additional;
    NSString *_msg_actor_describe;
    NSString *_original_msg_describe;
    NSString *_original_msg_additional;
    NSString *_original_msg_actor_describe;
    unsigned int _msg_describe_uinType;
    unsigned int _msg_additional_uinType;
    unsigned int _msg_actor_describe_uinType;
    NSString *_msg_source;
    NSString *_msg_decided;
    unsigned int _src_id;
    unsigned int _sub_src_id;
    unsigned long long _group_code;
    unsigned long long _action_uin;
    unsigned long long _actor_uin;
    unsigned long long _group_msg_type;
    NSMutableArray *_actions;
    int _group_inviter_role;
    int _group_flagext3;
    GroupVerifyMsgGroupInfoModel *_group_info;
    unsigned int _req_uin_faceid;
    NSString *_req_uin_nick;
    NSString *_group_name;
    NSString *_action_uin_nick;
    NSString *_actor_uin_nick;
    NSString *_msg_qna;
    NSString *_msg_detail;
    NSString *_msg_pic_url;
    int _group_ext_flag;
    unsigned int _certificationType;
    NSString *_msg_additional_list;
    int _src_type;
    unsigned long long _src_code;
    unsigned int _waitState;
    unsigned long long _payGroupJoinTime;
    unsigned long long _payGroupExitTime;
    int _xo;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long action_uin; // @dynamic action_uin;
@property(retain, nonatomic) NSString *action_uin_nick; // @dynamic action_uin_nick;
@property(retain, nonatomic) NSMutableArray *actions; // @dynamic actions;
@property(nonatomic) unsigned long long actor_uin; // @dynamic actor_uin;
@property(retain, nonatomic) NSString *actor_uin_nick; // @dynamic actor_uin_nick;
@property(nonatomic) unsigned int certificationType; // @dynamic certificationType;
@property(nonatomic) unsigned long long group_code; // @dynamic group_code;
@property(nonatomic) int group_ext_flag; // @dynamic group_ext_flag;
@property(nonatomic) unsigned int group_flagext3; // @dynamic group_flagext3;
@property(retain, nonatomic) GroupVerifyMsgGroupInfoModel *group_info; // @dynamic group_info;
@property(nonatomic) int group_inviter_role; // @dynamic group_inviter_role;
@property(nonatomic) unsigned long long group_msg_type; // @dynamic group_msg_type;
@property(retain, nonatomic) NSString *group_name; // @dynamic group_name;
@property(retain, nonatomic) NSString *msg_actor_describe; // @dynamic msg_actor_describe;
@property(nonatomic) unsigned int msg_actor_describe_uinType; // @dynamic msg_actor_describe_uinType;
@property(retain, nonatomic) NSString *msg_additional; // @dynamic msg_additional;
@property(retain, nonatomic) NSString *msg_additional_list; // @dynamic msg_additional_list;
@property(nonatomic) unsigned int msg_additional_uinType; // @dynamic msg_additional_uinType;
@property(retain, nonatomic) NSString *msg_decided; // @dynamic msg_decided;
@property(retain, nonatomic) NSString *msg_describe; // @dynamic msg_describe;
@property(nonatomic) unsigned int msg_describe_uinType; // @dynamic msg_describe_uinType;
@property(retain, nonatomic) NSString *msg_detail; // @dynamic msg_detail;
@property(retain, nonatomic) NSString *msg_pic_url; // @dynamic msg_pic_url;
@property(retain, nonatomic) NSString *msg_qna; // @dynamic msg_qna;
@property(retain, nonatomic) NSString *msg_source; // @dynamic msg_source;
@property(retain, nonatomic) NSString *msg_title; // @dynamic msg_title;
@property(retain, nonatomic) NSString *original_msg_actor_describe; // @dynamic original_msg_actor_describe;
@property(retain, nonatomic) NSString *original_msg_additional; // @dynamic original_msg_additional;
@property(retain, nonatomic) NSString *original_msg_describe; // @dynamic original_msg_describe;
@property(nonatomic) unsigned long long payGroupExitTime; // @dynamic payGroupExitTime;
@property(nonatomic) unsigned long long payGroupJoinTime; // @dynamic payGroupJoinTime;
@property(nonatomic) unsigned int req_uin_faceid; // @dynamic req_uin_faceid;
@property(retain, nonatomic) NSString *req_uin_nick; // @dynamic req_uin_nick;
@property(nonatomic) unsigned long long src_code; // @dynamic src_code;
@property(nonatomic) unsigned int src_id; // @dynamic src_id;
@property(nonatomic) int src_type; // @dynamic src_type;
@property(nonatomic) unsigned int sub_src_id; // @dynamic sub_src_id;
@property(nonatomic) unsigned int sub_type; // @dynamic sub_type;
@property(nonatomic) unsigned int waitState; // @dynamic waitState;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class FriendsVerifyMsgActionInfoModel, NSString;

@interface FriendsVerifyMsgActionModel : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_result;
    unsigned int _action;
    FriendsVerifyMsgActionInfoModel *_action_info;
    NSString *_detail_name;
    int _xo;
}

@property(retain, nonatomic) NSString *detail_name; // @synthesize detail_name=_detail_name;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned int action; // @dynamic action;
@property(retain, nonatomic) FriendsVerifyMsgActionInfoModel *action_info; // @dynamic action_info;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *result; // @dynamic result;

@end


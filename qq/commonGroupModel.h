//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface commonGroupModel : QQModel
{
    NSString *_groupCode;
    unsigned int _lastMsgTime;
    NSString *_lastMsgTimeStr;
    unsigned long long _timeStamp;
    _Bool _isDiscuss;
    int _xo;
}


// Remaining properties
@property(retain, nonatomic) NSString *groupCode; // @dynamic groupCode;
@property(nonatomic) _Bool isDiscuss; // @dynamic isDiscuss;
@property(nonatomic) unsigned long long lastMsgTime; // @dynamic lastMsgTime;
@property(retain, nonatomic) NSString *lastMsgTimeStr; // @dynamic lastMsgTimeStr;
@property(nonatomic) unsigned int timeStamp; // @dynamic timeStamp;
@end


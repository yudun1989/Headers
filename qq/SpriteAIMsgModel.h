//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface SpriteAIMsgModel : QQModel
{
    int _msgType;
    int _msgTag;
    int _showSpace;
    NSString *_content;
    unsigned long long _seq;
    unsigned long long _actionId;
    unsigned long long _msgTime;
    unsigned long long _outTime;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int showSpace; // @synthesize showSpace=_showSpace;
@property(nonatomic) unsigned long long outTime; // @synthesize outTime=_outTime;
@property(nonatomic) unsigned long long msgTime; // @synthesize msgTime=_msgTime;
@property(nonatomic) unsigned long long actionId; // @synthesize actionId=_actionId;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(nonatomic) int msgTag; // @synthesize msgTag=_msgTag;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
- (id)description;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface SyncUpMessage : NSObject
{
    NSString *_biz;
    NSString *_bizId;
    NSData *_msgDataPB;
    NSString *_msgData;
    unsigned long long _sendTime;
    unsigned long long _expireTime;
}

@property(nonatomic) unsigned long long expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned long long sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) NSString *msgData; // @synthesize msgData=_msgData;
@property(retain, nonatomic) NSData *msgDataPB; // @synthesize msgDataPB=_msgDataPB;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *biz; // @synthesize biz=_biz;
- (void).cxx_destruct;
- (id)init;

@end


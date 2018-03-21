//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "NSCopying-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WeChatOutMsg : MMObject <WCTTableCoding, NSCopying>
{
    _Bool isAutoIncrement;
    unsigned int localID;
    unsigned int createTime;
    unsigned int readStatus;
    unsigned int wcoMsgType;
    unsigned int pushTime;
    int reserve1;
    unsigned int reserve2;
    unsigned long long svrID;
    NSString *title;
    NSString *content;
    NSString *reserve3;
    NSString *reserve4;
    long long lastInsertedRowID;
}

+ (const struct WCTProperty *)reserve4;
+ (const struct WCTProperty *)reserve3;
+ (const struct WCTProperty *)reserve2;
+ (const struct WCTProperty *)reserve1;
+ (const struct WCTProperty *)pushTime;
+ (const struct WCTProperty *)content;
+ (const struct WCTProperty *)title;
+ (const struct WCTProperty *)wcoMsgType;
+ (const struct WCTProperty *)readStatus;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)svrID;
+ (const struct WCTProperty *)localID;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(retain, nonatomic) NSString *reserve4; // @synthesize reserve4;
@property(retain, nonatomic) NSString *reserve3; // @synthesize reserve3;
@property(nonatomic) unsigned int reserve2; // @synthesize reserve2;
@property(nonatomic) int reserve1; // @synthesize reserve1;
@property(nonatomic) unsigned int pushTime; // @synthesize pushTime;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) unsigned int wcoMsgType; // @synthesize wcoMsgType;
@property(nonatomic) unsigned int readStatus; // @synthesize readStatus;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned long long svrID; // @synthesize svrID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
- (void)CopyValueToCopy:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


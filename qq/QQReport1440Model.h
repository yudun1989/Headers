//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQReportBaseModel.h>

#import <QQMainProject/QQReportProtocol-Protocol.h>

@class NSString;

@interface QQReport1440Model : QQReportBaseModel <QQReportProtocol>
{
    NSString *_dataKey;
    NSString *_opUin;
    NSString *_targetUin;
    NSString *_opType;
    NSString *_opName;
    long long _opEntry;
    long long _opCount;
    long long _opResult;
    long long _reserved1;
    long long _reserved2;
    NSString *_reserved3;
    NSString *_reserved4;
}

+ (id)keyList;
@property(retain, nonatomic) NSString *reserved4; // @synthesize reserved4=_reserved4;
@property(retain, nonatomic) NSString *reserved3; // @synthesize reserved3=_reserved3;
@property(nonatomic) long long reserved2; // @synthesize reserved2=_reserved2;
@property(nonatomic) long long reserved1; // @synthesize reserved1=_reserved1;
@property(nonatomic) long long opResult; // @synthesize opResult=_opResult;
@property(nonatomic) long long opCount; // @synthesize opCount=_opCount;
@property(nonatomic) long long opEntry; // @synthesize opEntry=_opEntry;
@property(retain, nonatomic) NSString *opName; // @synthesize opName=_opName;
@property(retain, nonatomic) NSString *opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSString *targetUin; // @synthesize targetUin=_targetUin;
@property(retain, nonatomic) NSString *opUin; // @synthesize opUin=_opUin;
@property(retain, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
- (void).cxx_destruct;
- (id)merge:(id)arg1;
- (_Bool)compare:(id)arg1;
- (id)logString;
- (id)modelWithLogString:(id)arg1;
- (id)logKey;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


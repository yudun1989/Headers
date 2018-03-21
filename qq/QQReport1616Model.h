//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQReportBaseModel.h>

#import <QQMainProject/QQReportProtocol-Protocol.h>

@class NSString;

@interface QQReport1616Model : QQReportBaseModel <QQReportProtocol>
{
    NSString *_appName;
    NSString *_opType;
    NSString *_opName;
    long long _result;
    long long _entry;
    long long _count;
    long long _usedTime;
    long long _reserve1;
    long long _reserve2;
    NSString *_reserve3;
    NSString *_reserve4;
    long long _os;
}

+ (id)keyList;
@property(readonly, nonatomic) long long os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *reserve4; // @synthesize reserve4=_reserve4;
@property(copy, nonatomic) NSString *reserve3; // @synthesize reserve3=_reserve3;
@property(nonatomic) long long reserve2; // @synthesize reserve2=_reserve2;
@property(nonatomic) long long reserve1; // @synthesize reserve1=_reserve1;
@property(nonatomic) long long usedTime; // @synthesize usedTime=_usedTime;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long entry; // @synthesize entry=_entry;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *opName; // @synthesize opName=_opName;
@property(copy, nonatomic) NSString *opType; // @synthesize opType=_opType;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
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


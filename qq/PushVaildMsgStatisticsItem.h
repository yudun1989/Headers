//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSMutableString;

@interface PushVaildMsgStatisticsItem : NSObject <NSCoding>
{
    NSMutableString *_clickMsgTypeStr;
    unsigned int clickCount;
    unsigned int validMsgCount;
    long long lastReportTime;
}

@property(readonly, nonatomic) NSMutableString *clickMsgTypeStr; // @synthesize clickMsgTypeStr=_clickMsgTypeStr;
@property(nonatomic) unsigned int validMsgCount; // @synthesize validMsgCount;
@property(nonatomic) unsigned int clickCount; // @synthesize clickCount;
@property(nonatomic) long long lastReportTime; // @synthesize lastReportTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQReportBaseModel.h>

#import <QQMainProject/QQReportProtocol-Protocol.h>

@class NSString;

@interface QQReportStringModel : QQReportBaseModel <QQReportProtocol>
{
    NSString *_theLogKey;
    NSString *_thelogString;
}

@property(copy, nonatomic) NSString *thelogString; // @synthesize thelogString=_thelogString;
@property(copy, nonatomic) NSString *theLogKey; // @synthesize theLogKey=_theLogKey;
- (void).cxx_destruct;
- (id)merge:(id)arg1;
- (_Bool)compare:(id)arg1;
- (id)logString;
- (id)modelWithLogString:(id)arg1;
- (id)logKey;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


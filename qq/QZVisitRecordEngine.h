//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseEngine.h>

@class NSDate, NSMutableDictionary;

@interface QZVisitRecordEngine : QZBaseEngine
{
    NSMutableDictionary *_currentDict;
    NSDate *_lastReportDate;
    _Bool _forceReport;
}

+ (id)busiparamWithlloc:(id)arg1 sloc:(id)arg2;
+ (id)instance;
@property(nonatomic) _Bool forceReport; // @synthesize forceReport=_forceReport;
- (void).cxx_destruct;
- (void)startReport:(id)arg1 first:(_Bool)arg2;
- (void)checkReport;
- (void)reportVisitRecord:(id)arg1;
- (id)keyWithRecord:(id)arg1;
- (void)onLoginOutNotify:(id)arg1;
- (id)init;

@end


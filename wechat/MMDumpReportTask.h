//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "crashReportConnectionDelegate-Protocol.h"

@class MMCrashReportConnection, NSMutableArray, NSString;
@protocol MMDumpReporterDelegate, OS_dispatch_queue;

@interface MMDumpReportTask : NSObject <crashReportConnectionDelegate>
{
    NSMutableArray *m_arrUploadingItems;
    MMCrashReportConnection *m_connect;
    _Bool m_bUploading;
    NSString *m_nsUsrName;
    unsigned long long m_totalUploadCount;
    unsigned long long m_uploadedCount;
    NSObject<OS_dispatch_queue> *wxg_serialQueue;
    _Bool m_quickUpload;
    id <MMDumpReporterDelegate> m_delegate;
    unsigned long long m_reportCntOneTime;
    NSMutableArray *m_arrReportData;
    NSString *m_nsTag;
    unsigned long long m_reportType;
}

@property(nonatomic) _Bool m_quickUpload; // @synthesize m_quickUpload;
@property(nonatomic) unsigned long long m_reportType; // @synthesize m_reportType;
@property(retain, nonatomic) NSString *m_nsTag; // @synthesize m_nsTag;
@property(retain, nonatomic) NSMutableArray *m_arrReportData; // @synthesize m_arrReportData;
@property(nonatomic) unsigned long long m_reportCntOneTime; // @synthesize m_reportCntOneTime;
@property(nonatomic) __weak id <MMDumpReporterDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (unsigned long long)getUploadFilesCount;
- (_Bool)filesEmpty;
- (id)getUsrName;
- (void)onUploadCrashCompleted:(_Bool)arg1 CrashWrap:(id)arg2;
- (void)uploadOneReportData;
- (void)upload;
- (void)cancelTask;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


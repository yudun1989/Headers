//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LYStorage, NSTimer, QQLockDictionary;
@protocol OS_dispatch_queue;

@interface QQReportEngine : NSObject
{
    LYStorage *_storage;
    NSTimer *_logUploadTimer;
    NSTimer *_dailyLogTimer;
    NSTimer *_saveLogFileTimer;
    _Bool _logUploadFlag;
    int _maxLogUploadInterval;
    int _maxLogFileSize;
    NSObject<OS_dispatch_queue> *_queue;
    QQLockDictionary *_logFile;
}

+ (id)getInstance;
@property(retain, nonatomic) QQLockDictionary *logFile; // @synthesize logFile=_logFile;
- (void).cxx_destruct;
- (void)report2528WithOperName:(id)arg1 module:(id)arg2 action:(id)arg3 obj1:(id)arg4 obj2:(id)arg5 obj3:(id)arg6 reserved1:(id)arg7 reserved2:(id)arg8 reserved3:(id)arg9 reserved4:(id)arg10 reserved5:(id)arg11 reserved6:(id)arg12 reserved7:(id)arg13 contextId:(id)arg14 immediately:(_Bool)arg15;
- (void)report2528WithOperName:(id)arg1 module:(id)arg2 action:(id)arg3 obj1:(id)arg4 obj2:(id)arg5 obj3:(id)arg6 reserved1:(id)arg7 reserved2:(id)arg8 reserved3:(id)arg9 reserved4:(id)arg10 reserved5:(id)arg11 reserved6:(id)arg12 reserved7:(id)arg13 contextId:(id)arg14;
- (void)report2528WithOperName:(id)arg1 module:(id)arg2 action:(id)arg3 reserved1:(id)arg4 reserved2:(id)arg5 reserved3:(id)arg6 reserved4:(id)arg7 reserved5:(id)arg8 reserved6:(id)arg9 reserved7:(id)arg10 contextId:(id)arg11;
- (void)report2181WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 opCount:(long long)arg6 opResult:(long long)arg7 reserved1:(long long)arg8 reserved2:(long long)arg9 reserved3:(id)arg10 reserved4:(id)arg11 reserved5:(id)arg12 reserved6:(id)arg13 reserved7:(id)arg14 reserved8:(id)arg15 reserved9:(id)arg16 immediately:(_Bool)arg17;
- (void)report2181WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 opCount:(long long)arg6 opResult:(long long)arg7 reserved1:(long long)arg8 reserved2:(long long)arg9 reserved3:(id)arg10 reserved4:(id)arg11 immediately:(_Bool)arg12;
- (void)report2181WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 reserved1:(long long)arg6 reserved2:(long long)arg7 reserved3:(id)arg8 reserved4:(id)arg9;
- (void)report2181WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 reserved1:(long long)arg6 reserved2:(long long)arg7;
- (void)report2181WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5;
- (void)report2181WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4;
- (void)report2181WithOpType:(id)arg1 opName:(id)arg2 opEntry:(long long)arg3;
- (void)report2181WithOpType:(id)arg1 opName:(id)arg2;
- (void)report2181WithOpType:(id)arg1;
- (void)reportArkAppEvent:(id)arg1 opType:(id)arg2 opName:(id)arg3 result:(long long)arg4 entry:(long long)arg5 usedTime:(long long)arg6 reserve1:(long long)arg7 reserve2:(long long)arg8 reserve3:(id)arg9 reserve4:(id)arg10;
- (void)report1440WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 opCount:(long long)arg6 opResult:(long long)arg7 reserved1:(long long)arg8 reserved2:(long long)arg9 reserved3:(id)arg10 reserved4:(id)arg11 immediately:(_Bool)arg12;
- (void)report1440WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 reserved1:(long long)arg6 reserved2:(long long)arg7 reserved3:(id)arg8 reserved4:(id)arg9;
- (void)report1440WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 reserved1:(long long)arg6 reserved2:(long long)arg7;
- (void)report1440WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5;
- (void)report1440WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4;
- (void)report1440WithOpType:(id)arg1 opName:(id)arg2 opEntry:(long long)arg3;
- (void)report1440WithOpType:(id)arg1 opName:(id)arg2;
- (void)report1440WithOpType:(id)arg1;
- (void)migrate643To1160WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 opCount:(long long)arg6 opResult:(long long)arg7 reserved1:(long long)arg8 reserved2:(long long)arg9 reserved3:(id)arg10 reserved4:(id)arg11 immediately:(_Bool)arg12;
- (void)report1160WithDepartKey:(id)arg1 opUin:(id)arg2 targetUin:(id)arg3 opType:(id)arg4 opName:(id)arg5 opEntry:(long long)arg6 opCount:(long long)arg7 opResult:(long long)arg8 extendFields:(id)arg9 immediately:(_Bool)arg10;
- (void)report1160WithDepartKey:(id)arg1 targetUin:(id)arg2 opT:(id)arg3 extendFields:(id)arg4;
- (void)report1160WithResult:(id)arg1 targetUin:(id)arg2 opEntry:(long long)arg3 opResult:(long long)arg4 extendFields:(id)arg5;
- (void)report1160:(id)arg1 targetUin:(id)arg2 opEntry:(long long)arg3 extendFields:(id)arg4;
- (void)report1160WithDepartKey:(id)arg1 opType:(id)arg2 opName:(id)arg3 extendFields:(id)arg4;
- (void)report899WithDepartKey:(id)arg1 opUin:(id)arg2 targetUin:(id)arg3 opType:(id)arg4 opName:(id)arg5 opEntry:(long long)arg6 opCount:(long long)arg7 opResult:(long long)arg8 reserved1:(id)arg9 reserved2:(id)arg10 reserved3:(id)arg11 reserved4:(id)arg12 immediately:(_Bool)arg13;
- (void)report899WithDepartKey:(id)arg1 opType:(id)arg2 opName:(id)arg3 opEntry:(long long)arg4 reserved1:(id)arg5 reserved2:(id)arg6 reserved3:(id)arg7 reserved4:(id)arg8;
- (void)report899WithDepartKey:(id)arg1 opType:(id)arg2 opName:(id)arg3 reserved1:(id)arg4 reserved2:(id)arg5 reserved3:(id)arg6 reserved4:(id)arg7;
- (void)report899WithDepartKey:(id)arg1 opType:(id)arg2 opName:(id)arg3 opEntry:(long long)arg4;
- (void)report899WithDepartKey:(id)arg1 opType:(id)arg2 opName:(id)arg3;
- (void)report899WithDepartKey:(id)arg1 opType:(id)arg2;
- (void)report898WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 opCount:(long long)arg6 opResult:(long long)arg7 reserved1:(long long)arg8 reserved2:(long long)arg9 reserved3:(id)arg10 reserved4:(id)arg11 immediately:(_Bool)arg12;
- (void)report898WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 reserved1:(long long)arg6 reserved2:(long long)arg7 reserved3:(id)arg8 reserved4:(id)arg9;
- (void)report898WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 reserved1:(long long)arg6 reserved2:(long long)arg7;
- (void)report898WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5;
- (void)report898WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4;
- (void)report898WithOpType:(id)arg1 opName:(id)arg2 opEntry:(long long)arg3;
- (void)report898WithOpType:(id)arg1 opName:(id)arg2;
- (void)report898WithOpType:(id)arg1;
- (void)report667WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 opCount:(long long)arg6 opResult:(long long)arg7 reserved1:(id)arg8 reserved2:(id)arg9 reserved3:(id)arg10 reserved4:(id)arg11 immediately:(_Bool)arg12;
- (void)report629WithOpKey:(id)arg1 opStatus:(id)arg2 immediately:(_Bool)arg3;
- (void)report2676WithDepartKey:(id)arg1 opUin:(id)arg2 targetUin:(id)arg3 opType:(id)arg4 opName:(id)arg5 opEntry:(long long)arg6 opCount:(long long)arg7 opResult:(long long)arg8 timelong:(long long)arg9 feedid:(id)arg10 feedType:(long long)arg11 source:(long long)arg12 networkType:(id)arg13 reserved1:(id)arg14 reserved2:(id)arg15 reserved3:(id)arg16 reserved4:(id)arg17 immediately:(_Bool)arg18;
- (void)report2676WithDepartKey:(id)arg1 opType:(id)arg2 opName:(id)arg3 timelong:(long long)arg4 feedid:(id)arg5 feedType:(long long)arg6 source:(long long)arg7 networkType:(id)arg8 reserved1:(id)arg9 reserved2:(id)arg10 reserved3:(id)arg11 reserved4:(id)arg12;
- (void)report644WithDepartKey:(id)arg1 opUin:(id)arg2 targetUin:(id)arg3 opType:(id)arg4 opName:(id)arg5 opEntry:(long long)arg6 opCount:(long long)arg7 opResult:(long long)arg8 reserved1:(long long)arg9 reserved2:(long long)arg10 reserved3:(id)arg11 reserved4:(id)arg12 immediately:(_Bool)arg13;
- (void)report644WithDepartKey:(id)arg1 opType:(id)arg2 opName:(id)arg3 reserved1:(long long)arg4 reserved2:(long long)arg5 reserved3:(id)arg6 reserved4:(id)arg7;
- (void)report644WithDepartKey:(id)arg1 opType:(id)arg2 opName:(id)arg3 opEntry:(long long)arg4;
- (void)report644WithDepartKey:(id)arg1 opType:(id)arg2 opName:(id)arg3;
- (void)report644WithDepartKey:(id)arg1 opType:(id)arg2;
- (void)report643WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 opCount:(long long)arg6 opResult:(long long)arg7 reserved1:(long long)arg8 reserved2:(long long)arg9 reserved3:(id)arg10 reserved4:(id)arg11 immediately:(_Bool)arg12;
- (void)reportMigrate643To1160WithOpType:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 reserved1:(long long)arg6 reserved2:(long long)arg7 reserved3:(id)arg8 reserved4:(id)arg9;
- (void)reportMigrate643To1160WithOpType:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 reserved1:(long long)arg6 reserved2:(long long)arg7;
- (void)reportMigrate643To1160WithOpType:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5;
- (void)reportMigrate643To1160WithOpType:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4;
- (void)reportMigrate643To1160WithOpType:(id)arg1 opName:(id)arg2 opEntry:(long long)arg3;
- (void)reportMigrate643To1160WithOpType:(id)arg1 opName:(id)arg2;
- (void)reportMigrate643To1160WithOpType:(id)arg1;
- (void)report643WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 reserved1:(long long)arg6 reserved2:(long long)arg7 reserved3:(id)arg8 reserved4:(id)arg9;
- (void)report643WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5 reserved1:(long long)arg6 reserved2:(long long)arg7;
- (void)report643WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4 opEntry:(long long)arg5;
- (void)report643WithOpUin:(id)arg1 targetUin:(id)arg2 opType:(id)arg3 opName:(id)arg4;
- (void)report643WithOpType:(id)arg1 opName:(id)arg2 opEntry:(long long)arg3;
- (void)report643WithOpType:(id)arg1 opName:(id)arg2;
- (void)report643WithOpType:(id)arg1;
- (void)reportWithModel:(id)arg1 comparator:(CDUnknownBlockType)arg2 merger:(CDUnknownBlockType)arg3 immediately:(_Bool)arg4;
- (void)reportWithModel:(id)arg1 immediately:(_Bool)arg2;
- (void)reportWithModel:(id)arg1;
- (void)uploadReportLog;
- (_Bool)shouldConvertToUTF8:(id)arg1;
- (void)packLogArray:(id)arg1 toMap:(map_d2c8aebd *)arg2 withKey:(id)arg3;
- (_Bool)checkLogUploadFlag;
- (_Bool)checkLogFileSize;
- (_Bool)getLogFlagWithLogFlagName:(id)arg1;
- (id)getLogFlagNameWithLogKey:(id)arg1;
- (void)removeLogFile;
- (void)saveLogFileByQueue;
- (void)saveLogFile;
- (id)loadLogFile;
- (void)updateLogUploadConfig;
- (void)resetLogUploadTimer;
- (void)actionUploadLog;
- (void)actionUpdateLogUploadConfig;
- (void)applicationWillEnterBackground;
- (void)logoutBeforeNotification;
- (void)dealloc;
- (id)init;
- (void)reportWithLogKey:(id)arg1 logString:(id)arg2 comparator:(CDUnknownBlockType)arg3 merger:(CDUnknownBlockType)arg4 immediately:(_Bool)arg5;
- (void)reportWithLogKey:(id)arg1 logString:(id)arg2 immediately:(_Bool)arg3;
- (void)reportWithLogKey:(id)arg1 logString:(id)arg2;
- (void)dailyLogForSpriteGameStatus;
- (void)dailyLogForRecZanRankingState;
- (void)dailyLogForJoinZanRankingState;
- (void)dailyLogForSpriteActionCount;
- (void)dailyLogForDynamicPlugin;
- (void)dailyLogForThirdEntry;
- (void)dailyLogForActivateFriends;
- (void)dailyLogForNearbyProfile;
- (void)dailyLogForSecuritySetup;
- (void)dailyLogForAuxiliarySetup;
- (void)dailyLogForMessageNotificationSetup;
- (void)dailyLogForAccountManage;
- (void)dailyLogForSetupRelated;
- (void)actionAccountLogDayliCheck;
- (void)actionCheckDailyLog;
- (void)onDailyCheckTimer;

@end


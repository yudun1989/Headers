//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import <QQMainProject/QQDatabaseMigratorDelegate-Protocol.h>

@class NSObject, NSString, NSTimer, UIButton, UILabel, UIProgressView;

@interface QQDBMigrationProgressWindow : UIWindow <QQDatabaseMigratorDelegate>
{
    UIProgressView *_progressView;
    UILabel *_label;
    NSString *_remidText;
    NSTimer *_timer;
    int _timeoutCount;
    NSObject *_progressWindowDelegate;
    UIButton *_restartBtn;
    UILabel *_errorTips;
}

- (void)increaseProcess:(float)arg1;
- (void)updateProgress:(float)arg1;
- (void)didFinishMigrationWithError:(int)arg1;
- (void)tableMigrationFinishedForCallMsg:(id)arg1 inDatabase:(id)arg2 withError:(int)arg3;
- (void)tableMigrationFinishedForGroup:(id)arg1 inDatabase:(id)arg2 withError:(int)arg3;
- (void)setProgess;
- (void)db:(id)arg1 didFinishMigrationWithError:(int)arg2;
- (void)db:(id)arg1 didStartMigrationWithError:(int)arg2;
- (void)close;
- (void)restartDBMigration;
- (void)didFadeOut;
- (void)loadWindow;
- (void)setRemindText:(id)arg1;
- (void)setProgressWindowDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


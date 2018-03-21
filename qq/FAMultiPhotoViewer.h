//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/FAMultiPhotoViewDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QQDataLineModel, QQProgressBar, UIButton, UILabel, UITableView, UIView;

@interface FAMultiPhotoViewer : QQViewController <FAMultiPhotoViewDelegate, UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
{
    NSMutableArray *_arrayModel;
    UILabel *_groupInfo;
    UIView *_progressView;
    QQProgressBar *_progressBar;
    UILabel *_progressText;
    UILabel *_errorText;
    UIButton *_stopBtn;
    UIButton *_resendBtn;
    UITableView *_tableView;
    QQDataLineModel *_model;
    _Bool _bTransfering;
    NSMutableArray *_wyTipsQueue;
}

- (void)FAMultiPhotoViewDidSelectPhoto:(id)arg1;
- (void)setTransering:(_Bool)arg1;
- (void)onNetworkError;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onRestart;
- (void)bottomBtnAction:(id)arg1;
- (void)stopAction:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateCell:(id)arg1 withObject:(id)arg2;
- (id)getViewCellBySessionID:(id)arg1;
- (void)didFileTransferUpdate:(id)arg1;
- (void)didUpdateThumbnil:(id)arg1;
- (void)initEvent;
- (void)initProgressView;
- (id)initWithDataLineModel:(id)arg1;
- (void)syncDataView;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OListViewController.h"

@class ALPPrivilegeListModel, ALPPrivilegeListViewDataSource, ALPPrivilegeListViewDelegate, APExceptionView, NSString;

@interface ALPPrivilegeListViewController : O2OListViewController
{
    NSString *_passId;
    NSString *_pid;
    NSString *_tid;
    NSString *_source;
    ALPPrivilegeListModel *_privilegeListModel;
    ALPPrivilegeListViewDataSource *_ds;
    ALPPrivilegeListViewDelegate *_dl;
    APExceptionView *_emptyView;
    APExceptionView *_errorView;
}

@property(retain, nonatomic) APExceptionView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) APExceptionView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) ALPPrivilegeListViewDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) ALPPrivilegeListViewDataSource *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) ALPPrivilegeListModel *privilegeListModel; // @synthesize privilegeListModel=_privilegeListModel;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
- (void).cxx_destruct;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showNoResult:(id)arg1;
- (void)showModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithQuery:(id)arg1 params:(id)arg2;

@end


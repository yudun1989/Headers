//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "UIDocumentInteractionControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIDocumentInteractionController, UITableView;

@interface KSLoggerListViewController : KSBaseViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate, UIDocumentInteractionControllerDelegate>
{
    UITableView *_tableView;
    NSMutableArray *_fileItems;
    UIDocumentInteractionController *_documentInteractionController;
}

@property(retain, nonatomic) UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
@property(retain, nonatomic) NSMutableArray *fileItems; // @synthesize fileItems=_fileItems;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)sendByOtherApp;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)sendLogByEmail;
- (void)clearAllLogs;
- (void)didTapRightNavigationButton:(id)arg1;
- (void)reloadData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


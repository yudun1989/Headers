//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class LCSharedDocumentModel, NSMutableArray, NSString, UIView;
@protocol LCSharedDocumentAuthorityTableViewDelegate;

@interface LCSharedDocumentAuthorityTableView : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isMyDoc;
    UIView *_stateSectionHeader;
    LCSharedDocumentModel *_docModel;
    unsigned long long _guestAuthType;
    NSMutableArray *_memberInfoList;
    id <LCSharedDocumentAuthorityTableViewDelegate> _actionDelegate;
}

@property(nonatomic) id <LCSharedDocumentAuthorityTableViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) NSMutableArray *memberInfoList; // @synthesize memberInfoList=_memberInfoList;
@property(nonatomic) unsigned long long guestAuthType; // @synthesize guestAuthType=_guestAuthType;
@property(retain, nonatomic) LCSharedDocumentModel *docModel; // @synthesize docModel=_docModel;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)getStateSectionHeader;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getAuthorityDetailTextFromDocAuthorityType:(unsigned long long)arg1;
- (id)getAuthorityDetailTextFromDocGuestAuthorityType:(unsigned long long)arg1;
- (id)getMemberDetailTextFromDocGuestAuthorityType:(unsigned long long)arg1;
- (void)updateDocGuestAuthorityTypeWithEditType:(unsigned long long)arg1;
- (void)updateDocGuestAuthorityTypeWithGuestAuthorityType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


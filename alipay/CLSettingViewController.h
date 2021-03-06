//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "APSKLaunchpadDelegate-Protocol.h"
#import "BEEPhotoBrowserDelegate-Protocol.h"
#import "CLEditNickNameDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APSKLaunchpad, COMConfigItem, COMQueryCommunityResp, NSMutableArray, NSString, UIImage, UIImageView, UILabel, UITableView, UIView;

@interface CLSettingViewController : DTViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, BEEPhotoBrowserDelegate, APSKLaunchpadDelegate, CLEditNickNameDelegate>
{
    COMQueryCommunityResp *_clubInfo;
    NSString *_originNotice;
    NSString *_originNickName;
    NSMutableArray *_currentSections;
    UITableView *_settingTableView;
    UIView *_clubInfoView;
    UIImageView *_logoView;
    UIImage *_logoImage;
    UILabel *_clubNameLabel;
    COMConfigItem *_quiteItem;
    NSString *_sourceId;
    UIView *_introductionView;
    APSKLaunchpad *_launchPad;
}

@property(retain, nonatomic) APSKLaunchpad *launchPad; // @synthesize launchPad=_launchPad;
@property(retain, nonatomic) UIView *introductionView; // @synthesize introductionView=_introductionView;
- (void).cxx_destruct;
- (void)updateDataSource:(id)arg1 value:(id)arg2;
- (void)savaSwitchSuccessed:(id)arg1;
- (void)pinSwitchValueChanged:(id)arg1;
- (void)modifySwitch:(id)arg1;
- (void)doSettingValueChanged:(id)arg1;
- (void)didSwitchValueChanged:(id)arg1;
- (void)exitCurrentApp;
- (void)goReport;
- (void)BrowserQrCode;
- (void)goEditNickName;
- (void)goClubMemberList;
- (void)doQuitClub;
- (void)readLegalNotice:(id)arg1;
- (void)quitClub;
- (void)onLogoViewTap:(id)arg1;
- (void)goShare;
- (void)goShareOrReport;
- (void)noticeUpdated:(id)arg1;
- (void)nickNameUpdated:(id)arg1;
- (void)shareToChannel:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)buildClubInfoView;
- (id)makeTableView;
- (void)dealloc;
- (void)parseConfig:(id)arg1;
- (void)commomInit;
- (void)viewDidLoad;
- (id)initWithClubInfo:(id)arg1 sourceId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


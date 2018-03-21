//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBBViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TBSDKUploadService, UIImageView, UITableView;

@interface ALBBPersonalProfileViewController : ALBBViewController <UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_personalTableView;
    UIImageView *_imageView;
    NSString *_gender;
    TBSDKUploadService *_sdkUploadService;
}

@property(retain, nonatomic) TBSDKUploadService *sdkUploadService; // @synthesize sdkUploadService=_sdkUploadService;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UITableView *personalTableView; // @synthesize personalTableView=_personalTableView;
- (void).cxx_destruct;
- (void)uploadUserAvatar:(id)arg1 endBlock:(CDUnknownBlockType)arg2;
- (void)uploadPictureWithPath:(id)arg1 endBlock:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3;
- (void)uploadImageWithPath:(id)arg1 withBizId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setGenderToServer:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestPersonalInfo;
- (void)createUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


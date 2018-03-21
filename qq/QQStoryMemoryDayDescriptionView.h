//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQStoryShareControllerDelegate-Protocol.h>

@class NSString, QQFriendSelectedViewController, TBDateVideoCollectionModel, UIButton, UIImageView, UILabel, UIViewController;

@interface QQStoryMemoryDayDescriptionView : UIView <QQFriendSelectedViewControllerDelegate, QQStoryShareControllerDelegate>
{
    UIViewController *_viewController;
    TBDateVideoCollectionModel *_model;
    UILabel *_dayLabel;
    UILabel *_monthLabel;
    UILabel *_videoCountLabel;
    UIButton *_shareBtn;
    UIImageView *_pointImageView;
    QQFriendSelectedViewController *_fileSelectedViewController;
}

+ (double)height;
@property(retain, nonatomic) QQFriendSelectedViewController *fileSelectedViewController; // @synthesize fileSelectedViewController=_fileSelectedViewController;
@property(retain, nonatomic) UIImageView *pointImageView; // @synthesize pointImageView=_pointImageView;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UILabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(readonly, retain, nonatomic) TBDateVideoCollectionModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)shareToFriendSuccess;
- (_Bool)friendSelectedViewController:(id)arg1 didClickButtonAtIndex:(long long)arg2 withSelectedFriend:(id)arg3 type:(int)arg4;
- (void)shareToFriendCancelled;
- (void)refreshVideoCountWithModel:(id)arg1 unionID:(id)arg2;
- (void)refreshDateWithModel:(id)arg1;
- (void)setModel:(id)arg1 withUnionID:(id)arg2;
- (void)actionDidSuccess:(int)arg1 storyExInfo:(id)arg2;
- (void)actionDidClick:(int)arg1 storyExInfo:(id)arg2;
- (id)getReportDict:(int)arg1;
- (void)shareVideo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


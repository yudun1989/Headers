//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>

@class NSString, TBShareGroupInfoModel, UIButton, UIImageView, UILabel;
@protocol QQStorySGPrivateInvitorViewDelegate;

@interface QQStorySGPrivateInvitorView : UIView <TBBizNetworkLogicDelegate>
{
    unsigned int _requestStatus;
    TBShareGroupInfoModel *_infoModel;
    id <QQStorySGPrivateInvitorViewDelegate> _delegate;
    UILabel *_loadingLabel;
    UIView *_invitorView;
    NSString *_invitorID;
    UILabel *_describeLabel;
    UIView *_avatarBackView;
    UILabel *_nameLabel;
    UILabel *_infoCountLabel;
    UIButton *_joinButton;
    UIImageView *_headBGView;
    UILabel *_invitorLabel;
}

@property(retain, nonatomic) UILabel *invitorLabel; // @synthesize invitorLabel=_invitorLabel;
@property(retain, nonatomic) UIImageView *headBGView; // @synthesize headBGView=_headBGView;
@property(retain, nonatomic) UIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UILabel *infoCountLabel; // @synthesize infoCountLabel=_infoCountLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *avatarBackView; // @synthesize avatarBackView=_avatarBackView;
@property(retain, nonatomic) UILabel *describeLabel; // @synthesize describeLabel=_describeLabel;
@property(retain, nonatomic) NSString *invitorID; // @synthesize invitorID=_invitorID;
@property(retain, nonatomic) UIView *invitorView; // @synthesize invitorView=_invitorView;
@property(nonatomic) unsigned int requestStatus; // @synthesize requestStatus=_requestStatus;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(nonatomic) __weak id <QQStorySGPrivateInvitorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBShareGroupInfoModel *infoModel; // @synthesize infoModel=_infoModel;
- (void).cxx_destruct;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)showFailToast:(id)arg1;
- (void)getHeadBGImage:(id)arg1 image:(CDUnknownBlockType)arg2;
- (void)joinShareGroup;
- (void)setMemberList:(id)arg1;
- (void)layout;
- (void)showLoadingFailLabel;
- (void)showLoadingLabel;
- (void)hideLoadingLabel;
- (void)initUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 invitor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


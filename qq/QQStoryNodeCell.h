//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>

@class NSString, QQStoryMultiUserAvatarView, QQStoryNodeBorderView, TBAvatarView, TBMsgTabNodeInfo, UIImage, UIImageView, UILabel;
@protocol QQStoryNodeCellDelegate;

@interface QQStoryNodeCell : UICollectionViewCell <TBBizNetworkLogicDelegate>
{
    NSString *_nodeText;
    UIImage *_nodeImage;
    unsigned long long _nodeType;
    TBAvatarView *_avatarView;
    TBMsgTabNodeInfo *_nodeInfo;
    id <QQStoryNodeCellDelegate> _delegate;
    UILabel *_nameLabel;
    QQStoryNodeBorderView *_borderView;
    QQStoryMultiUserAvatarView *_avatarMultiUserView;
    UIImageView *_recommendImage;
    UIImageView *_iconImage;
    UILabel *_unReadLabel;
}

+ (double)itemSpacing;
+ (struct CGSize)itemSize;
@property(retain, nonatomic) UILabel *unReadLabel; // @synthesize unReadLabel=_unReadLabel;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImageView *recommendImage; // @synthesize recommendImage=_recommendImage;
@property(retain, nonatomic) QQStoryMultiUserAvatarView *avatarMultiUserView; // @synthesize avatarMultiUserView=_avatarMultiUserView;
@property(retain, nonatomic) QQStoryNodeBorderView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak id <QQStoryNodeCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBMsgTabNodeInfo *nodeInfo; // @synthesize nodeInfo=_nodeInfo;
@property(retain, nonatomic) TBAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)reload;
- (void)playLoadingAnimationForSeconds:(double)arg1;
- (void)configurMessage;
- (void)configurCircle;
- (void)configurRecommendUser;
- (void)configurUser;
- (void)configurIcon:(_Bool)arg1;
- (void)configurRecommendAcLa;
- (void)setSelfHeadImage;
- (void)setHeadImageAndNick:(_Bool)arg1;
- (void)configReadedUI;
- (void)configureUnreadView:(unsigned int)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)longPressEvent:(id)arg1;
- (void)clickEvent:(id)arg1;
- (void)addEvent;
- (void)initWithUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


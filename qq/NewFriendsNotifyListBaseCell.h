//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NFMsgNotifyListItemModel, QQAvatarView, UIButton, UIColor, UIImageView, UILabel, UIView;
@protocol NewFriendsNotifyListCellProtocol;

@interface NewFriendsNotifyListBaseCell : UITableViewCell
{
    NFMsgNotifyListItemModel *_feedModel;
    id <NewFriendsNotifyListCellProtocol> _delegate;
    UIView *_bgBodyView;
    UIView *_separateView;
    UILabel *_titleLabel;
    QQAvatarView *_headImageView;
    UILabel *_nickLabel;
    UIImageView *_sexAndAgeView;
    UIImageView *_sexView;
    UILabel *_ageLabel;
    UILabel *_line1Label;
    UIImageView *_line1ImageView;
    UILabel *_line2Label;
    UIButton *_actionBtn;
    UILabel *_resultLabel;
    UIColor *_bgBodyColor;
}

@property(retain, nonatomic) UIColor *bgBodyColor; // @synthesize bgBodyColor=_bgBodyColor;
@property(retain, nonatomic) UILabel *resultLabel; // @synthesize resultLabel=_resultLabel;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *line2Label; // @synthesize line2Label=_line2Label;
@property(retain, nonatomic) UIImageView *line1ImageView; // @synthesize line1ImageView=_line1ImageView;
@property(retain, nonatomic) UILabel *line1Label; // @synthesize line1Label=_line1Label;
@property(retain, nonatomic) UILabel *ageLabel; // @synthesize ageLabel=_ageLabel;
@property(retain, nonatomic) UIImageView *sexView; // @synthesize sexView=_sexView;
@property(retain, nonatomic) UIImageView *sexAndAgeView; // @synthesize sexAndAgeView=_sexAndAgeView;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) QQAvatarView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) UIView *bgBodyView; // @synthesize bgBodyView=_bgBodyView;
@property(nonatomic) __weak id <NewFriendsNotifyListCellProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NFMsgNotifyListItemModel *feedModel; // @synthesize feedModel=_feedModel;
- (void).cxx_destruct;
- (void)didClickNFItem:(id)arg1 currContr:(id)arg2;
- (void)loadCellWithNFItem:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;
- (long long)getRightWidgetWidth;
- (void)actionButton;
- (void)setBackgroundColorInNomal:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)getLineCountExpectNick;
- (void)clearAlreadyExistSubView;
- (void)configCellWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NearbyFriendHeaderListBaseCell.h>

@class NearbyFriendHeaderListNormalModel, QQAsynUrlImageView, UIImageView, UILabel;

@interface NearbyFriendHeaderListNormalCell : NearbyFriendHeaderListBaseCell
{
    NearbyFriendHeaderListNormalModel *_itemModel;
    QQAsynUrlImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_redDotView;
}

- (void).cxx_destruct;
- (void)clearRedDotIfNecessary;
- (void)layoutSubviews;
- (void)setDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


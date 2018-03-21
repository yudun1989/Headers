//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEUserModel, UIImageView, UILabel;

@interface AWEVideoBrowserCollectionViewCell : UICollectionViewCell
{
    AWEUserModel *_user;
    UIImageView *_avatarView;
    unsigned long long _style;
    UILabel *_nameLabel;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)markAsSeen;
- (void)markAsUnseen;
- (void)remakeConstrains;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end


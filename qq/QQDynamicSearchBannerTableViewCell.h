//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QQAsynUrlImageView, UILabel;

@interface QQDynamicSearchBannerTableViewCell : UITableViewCell
{
    UILabel *_labelForTitle;
    UILabel *_labelForSubTitle;
    UILabel *_labelForDescription;
    QQAsynUrlImageView *_imageViewForAvatar;
}

- (void).cxx_destruct;
- (double)heightOfBannerCell;
- (void)setBannerTableCellViewMode:(id)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface TBVideoFlowSectionCell : UITableViewCell
{
    UILabel *_sectionTitle;
    UIView *_icon;
}

+ (id)identifier;
@property(retain, nonatomic) UIView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (void).cxx_destruct;
- (void)setupWithVideoCellModel:(id)arg1;
- (void)bindData:(id)arg1 isFooter:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


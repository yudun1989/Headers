//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface KPPopMenuCell : UITableViewCell
{
    UIImageView *_menuImageView;
    UILabel *_menuLabel;
}

@property(retain, nonatomic) UILabel *menuLabel; // @synthesize menuLabel=_menuLabel;
@property(retain, nonatomic) UIImageView *menuImageView; // @synthesize menuImageView=_menuImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end


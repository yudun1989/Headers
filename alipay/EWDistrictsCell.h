//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface EWDistrictsCell : UITableViewCell
{
    _Bool _checked;
    UIImageView *_checkbox;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) UIImageView *checkbox; // @synthesize checkbox=_checkbox;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


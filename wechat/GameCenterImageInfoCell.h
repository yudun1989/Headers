//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMWebImageView, NSString;

@interface GameCenterImageInfoCell : MMTableViewCell
{
    MMWebImageView *_imageView;
    NSString *_imageUrl;
}

@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)reloadData;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


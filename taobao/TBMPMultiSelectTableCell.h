//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray;

@interface TBMPMultiSelectTableCell : UITableViewCell
{
    NSMutableArray *_assets;
    NSMutableArray *_items;
    NSArray *_photos;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)cellClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithItems:(id)arg1 andAssets:(id)arg2 reuseIdentifier:(id)arg3;

@end


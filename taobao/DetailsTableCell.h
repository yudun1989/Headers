//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary;

@interface DetailsTableCell : UITableViewCell
{
    float _detailsCellHeight;
    NSDictionary *_theme;
    id _delegate;
    NSDictionary *_dataSourceInfo;
}

@property(copy, nonatomic) NSDictionary *dataSourceInfo; // @synthesize dataSourceInfo=_dataSourceInfo;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float detailsCellHeight; // @synthesize detailsCellHeight=_detailsCellHeight;
@property(retain, nonatomic) NSDictionary *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)create:(id)arg1 theme:(id)arg2;
- (void)delBtnClick:(id)arg1;
- (void)openCalendarListView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCellFrame;

@end


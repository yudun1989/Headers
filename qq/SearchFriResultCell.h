//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SearchModel;
@protocol SearchFriResultCellDelegate;

@interface SearchFriResultCell : UITableViewCell
{
    SearchModel *_model;
    id <SearchFriResultCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)touchIconAdd:(id)arg1;
- (void)touchHead:(id)arg1;
- (id)initWithStyleAndModel:(long long)arg1 reuseIdentifier:(id)arg2 searchModel:(id)arg3 delegate:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@protocol TBIMSimpleProfileSettingBaseCellDelegate;

@interface TBIMSimpleProfileSettingBaseCell : UITableViewCell
{
    id <TBIMSimpleProfileSettingBaseCellDelegate> _delegate;
}

@property(nonatomic) __weak id <TBIMSimpleProfileSettingBaseCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 delegate:(id)arg3;

@end


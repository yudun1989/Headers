//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@protocol QZPhotoModuleCellDelegate;

@interface QZPhotoModuleCell : UITableViewCell
{
    id <QZPhotoModuleCellDelegate> _delegate;
}

@property(nonatomic) __weak id <QZPhotoModuleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


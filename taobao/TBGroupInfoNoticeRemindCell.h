//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBGroupInfoNoticeCell.h"

@class NSString, UISwitch;
@protocol TBGroupInfoNoticeRemindCellDelegate;

@interface TBGroupInfoNoticeRemindCell : TBGroupInfoNoticeCell
{
    NSString *_titleStr;
    NSString *_contentStr;
    id <TBGroupInfoNoticeRemindCellDelegate> _delegate;
    UISwitch *_switchView;
}

+ (double)heightForCellWithContent:(id)arg1;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property(nonatomic) __weak id <TBGroupInfoNoticeRemindCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *contentStr; // @synthesize contentStr=_contentStr;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
- (void).cxx_destruct;
- (void)switchAction:(id)arg1;
@property(nonatomic, getter=isOn) _Bool on;

@end

